include("CallBacks.jl")

#---Pythia8 Types----------------------------------------------------------------------------------
const Pythia = Pythia8!Pythia
const PythiaParallel = Pythia8!PythiaParallel
const Event = Pythia8!Event
const Hist = Pythia8!Hist
const UserHooks = Pythia8!UserHooks
const SlowJet = Pythia8!SlowJet
const SigmaProcess = Pythia8!SigmaProcess
const PhaseSpace = Pythia8!PhaseSpace
const StringEnd = Pythia8!StringEnd
const StringFlav = Pythia8!StringFlav
const StringZ = Pythia8!StringZ
const StringPT = Pythia8!StringPT
const Particle = Pythia8!Particle
const HadronLevel = Pythia8!HadronLevel


#---CxxWrap Types-----------------------------------------------------------------------------------
export CxxBool

#---Pythia API functions---------------------------------------------------------------------------
Base.:<<(pythia::Pythia, s::String) = readString(pythia, s) ? pythia : error("Pythia8: $s")
Base.:<<(pythia::PythiaParallel, s::String) = readString(pythia, s) ? pythia : error("Pythia8: $s")

#---Event API--------------------------------------------------------------------------------------
Base.length(evt::Event) = Pythia8.size(evt) |> Int64
Base.getindex(evt::CxxWrap.CxxWrapCore.CxxRef{<:Event}, n::Int64) = evt[][n-1]
Base.iterate(evt::Union{Event, CxxWrap.CxxWrapCore.CxxRef{<:Event}}, state=1) = state > length(evt) ? nothing : (evt[state], state+1)

#---Hist API---------------------------------------------------------------------------------------
Base.fill!(hist::Hist, x::Number) = Pythia8.fill(hist, x)
Base.fill!(hist::Hist, x::Number, w::Number) = Pythia8.fill(hist, x, w)
Base.fill!(hist::Hist, x::Int32) = Pythia8.fill(hist, x |> Float64) 
Base.fill!(hist::Hist, x::Int32, w::Int32) = Pythia8.fill(hist, x |> Float64, w |> Float64)
Base.print(hist::Hist) = print(to_string(hist))

#----Callbacks-------------------------------------------------------------------------------------
_callbacks = Vector{CxxWrap.CxxWrapCore.SafeCFunction}()
function init(pythia::PythiaParallel, fun::Function)
    sf = eval(
            quote 
                @safe_cfunction(getfield(Main, Symbol($fun)), CxxBool, (CxxPtr{Pythia8.Pythia},))
            end
    )
    push!(_callbacks, sf)
    init(pythia, sf)
end
function run(pythia::PythiaParallel, fun::Function)
    sf = eval(
            quote 
                @safe_cfunction(getfield(Main, Symbol($fun)), Nothing, (CxxPtr{Pythia8.Pythia},))
            end
    )
    push!(_callbacks, sf)
    run(pythia, sf)
end

#---UserHooks API----------------------------------------------------------------------------------
using InteractiveUtils
export __init__
const hookssignatures = Dict(
    :initAfterBeams => (CxxBool, ()),
    :canModifySigma => (CxxBool, ()),
    :multiplySigmaBy => (Float64, (ConstCxxPtr{Pythia8.SigmaProcess}, ConstCxxPtr{Pythia8.PhaseSpace}, CxxBool)),
    :canBiasSelection => (CxxBool, ()),
    :biasSelectionBy => (Float64, (ConstCxxPtr{Pythia8.SigmaProcess}, ConstCxxPtr{Pythia8.PhaseSpace}, CxxBool)),
    :biasedSelectionWeight  => (Float64, ()),
    :canVetoProcessLevel  => (CxxBool, ()),
    :doVetoProcessLevel => (CxxBool, (CxxRef{Pythia8.Event})),
    :canSetLowEnergySigma => (CxxBool, (Int32, Int32)),
    :doSetLowEnergySigma => (Float64, (Int32, Int32, Float64, Float64, Float64)),
    :canVetoResonanceDecays => (CxxBool, ()),
    :doVetoResonanceDecays => (CxxBool, (CxxRef{Pythia8.Event})),
    :canVetoPT => (CxxBool, ()),
    :scaleVetoPT => (Float64, ()),
    :doVetoPT => (CxxBool, (Int32, ConstCxxRef{Pythia8.Event})),
    :canVetoStep => (CxxBool, ()),
    :numberVetoStep => (CxxBool, (Int32, Int32, Int32, CxxRef{Pythia8.Event})),
    :doVetoStep => (CxxBool, (Int32, Int32, Int32, ConstCxxRef{Pythia8.Event})),
    :canVetoMPIStep => (CxxBool, ()),
    :numberVetoMPIStep => (Int32, ()),
    :doVetoMPIStep => (Int32, (CxxRef{Pythia8.Event})),
    :canVetoPartonLevelEarly  => (CxxBool, ()),
    :doVetoPartonLevelEarly => (CxxBool, (CxxRef{Pythia8.Event})),
    :retryPartonLevel => (CxxBool, ()),
    :canVetoPartonLevel => (CxxBool, ()),
    :doVetoPartonLevel => (CxxBool, (CxxRef{Pythia8.Event})),
    :canSetResonanceScale => (CxxBool, ()),
    :scaleResonance => (Float64, (CxxRef{Pythia8.Event})),
    :canVetoISREmission => (CxxBool, ()),
    :doVetoISREmission => (CxxBool, (Int32, CxxRef{Pythia8.Event})),
    :canVetoFSREmission => (CxxBool, ()),
    :doVetoFSREmission => (CxxBool, (Int32, CxxRef{Pythia8.Event}, Int32, CxxBool)),
    :canVetoMPIEmission => (CxxBool, ()),
    :doVetoMPIEmission => (CxxBool, (Int32, CxxRef{Pythia8.Event})),
    :canReconnectResonanceSystems => (CxxBool, ()),
    :doReconnectResonanceSystems => (CxxBool, (Int32, CxxRef{Pythia8.Event})),
    :canChangeFragPar => (CxxBool, ()),
    :setStringEnds => (Nothing, (ConstCxxPtr{Pythia8.StringEnd}, ConstCxxPtr{Pythia8.StringEnd}, StdVector{Int32})),
    :doChangeFragPar => (CxxBool, (CxxPtr{Pythia8.StringFlav}, CxxPtr{Pythia8.StringZ}, CxxPtr{Pythia8.StringPT}, Int32, Float64, StdVector{Int32},  ConstCxxPtr{Pythia8.StringEnd})),
    :doVetoFragmentation1 => (CxxBool, (CxxRef{Pythia8.Particle}, ConstCxxPtr{Pythia8.StringEnd})),
    :doVetoFragmentation2 => (CxxBool, (CxxRef{Pythia8.Particle}, CxxRef{Pythia8.Particle}, ConstCxxPtr{Pythia8.StringEnd}, ConstCxxPtr{Pythia8.StringEnd})),
    :canVetoHadronization => (CxxBool, ()),
    :doVetoAfterHadronization => (CxxBool, (ConstCxxRef{Pythia8.Event})),
    :canSetImpactParameter => (CxxBool, ()),
    :doSetImpactParameter => (Float64, ()),
    :onEndHadronLevel => (CxxBool, (CxxRef{Pythia8.HadronLevel}, CxxRef{Pythia8.Event}))
)
"""
    __init__(self::UserHooks)

This function initializes the UserHooks object by creating an instance of Pythia8UserHooks 
and setting the hooks for each method defined by the user.
"""
function __init__(self::UserHooks)
    # create an instance of Pythia8UserHooks
    uhooks = Pythia8UserHooks!make_shared()
    # set the hooks for each method defined by the user
    for m in methodswith(self |> typeof)
        if m.name in keys(hookssignatures)
            cb = make_callback(self, getfield(m.module, m.name), hookssignatures[m.name]...)
            eval(Symbol(:set_, m.name))(CxxRef{Pythia8UserHooks}(uhooks[]), closure(cb)...)
        else
            error("Method $(m.name) not supported")
        end
    end
    # store the object pointed by shared pointer
    self.base = CxxRef{Pythia8UserHooks}(uhooks[]) # store the object pointed by shared pointer
    return uhooks
end


