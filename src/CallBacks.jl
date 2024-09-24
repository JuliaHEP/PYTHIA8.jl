#----Callback structures---------------------------------------------------------------------------
mutable struct CallBackData{CONTEXT}
    context::CONTEXT
    callback::Function   # (i::Int32, ctx::T)::Int32
end

struct CallBack{CONTEXT}
    cfunction::CxxWrap.CxxWrapCore.SafeCFunction
    cbdata::CallBackData{CONTEXT}
end

#----Global vector (GC) ---------------------------------------------------------------------------
callbacks = Vector{CallBack}()

#----Function to create a callback avoiding the use of closures (ARM is not supporting closures)
#    We need to project with a lock the make_callback since it can be called from concurrent threads
const spinlock = Base.Threads.SpinLock()
function make_callback(ctx, fun, rt, args)
    lock(spinlock)
    try
        i_callback = Symbol(:_internal_callback_, Symbol(typeof(ctx)))
        narg = length(args)
        CONTEXT = typeof(ctx)
        #---create the internal callback function------------------------------------------------------
        if narg == 0
            eval( 
                quote
                    function $i_callback(data::Ptr{Cvoid})::$rt
                        cb_data = unsafe_pointer_to_objref(data)::CallBackData{$CONTEXT}
                        cb_data.callback(cb_data.context)
                    end
                end
            )
        elseif narg == 1
            eval( 
                quote
                    function $i_callback(data::Ptr{Cvoid}, a1::$(args[1]))::$rt
                        cb_data = unsafe_pointer_to_objref(data)::CallBackData{$CONTEXT}
                        cb_data.callback(cb_data.context, a1[])
                    end
                end
            )
        elseif narg == 2
            eval( 
                quote
                    function $i_callback(data::Ptr{Cvoid}, a1::$(args[1]), a2::$(args[2]))::$rt
                        cb_data = unsafe_pointer_to_objref(data)::CallBackData{$CONTEXT}
                        cb_data.callback(cb_data.context, a1[], a2[])
                    end
                end
            )
        elseif narg == 3
            eval( 
                quote
                    function $i_callback(data::Ptr{Cvoid}, a1::$(args[1]), a2::$(args[2]), a3=$(args[3]))::$rt
                        cb_data = unsafe_pointer_to_objref(data)::CallBackData{$CONTEXT}
                        cb_data.callback(cb_data.context, a1[], a2[], a3[])
                    end
                end
            )
        else
            error("callbacks with more than 3 arguments not yet supported")
        end
        #---Instantiate the callback-------------------------------------------------------------------
        cb = eval(
                quote
                    CallBack{$CONTEXT}( @safe_cfunction($i_callback, $rt, (Ptr{Cvoid}, $(args...))),
                                        CallBackData{$CONTEXT}($ctx, $fun))
                end
            )
        push!(callbacks, cb)
        unlock(spinlock)
        return cb
    catch
        unlock(spinlock)
        rethrow()
    end
end
function closure(cb::CallBack)
    return (pointer_from_objref(cb.cbdata), cb.cfunction)
end
function null_closure(rt, args)
    return (C_NULL, CxxWrap.CxxWrapCore.SafeCFunction(C_NULL, rt, [Ptr{Cvoid}, args...]))
end

