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
export CxxBool, CxxRef, CxxPtr

#---Pythia API functions---------------------------------------------------------------------------
Base.:<<(pythia::Pythia, s::String) = readString(pythia, s) ? pythia : error("Pythia8: $s")
Base.:<<(pythia::PythiaParallel, s::String) = readString(pythia, s) ? pythia : error("Pythia8: $s")

#---Event API--------------------------------------------------------------------------------------
Base.length(evt::Event) = size(evt) |> Int64
Base.getindex(evt::CxxWrap.CxxWrapCore.CxxRef{<:Event}, n::Int64) = evt[][n-1]
Base.iterate(evt::Union{Event, CxxWrap.CxxWrapCore.CxxRef{<:Event}}, state=1) = state > length(evt) ? nothing : (evt[state], state+1)

#---Hist API---------------------------------------------------------------------------------------
Base.fill!(hist::Hist, x::Number) = fill(hist, x)
Base.fill!(hist::Hist, x::Number, w::Number) = fill(hist, x, w)
Base.fill!(hist::Hist, x::Int32) = fill(hist, x |> Float64) 
Base.fill!(hist::Hist, x::Int32, w::Int32) = fill(hist, x |> Float64, w |> Float64)
Base.print(hist::Hist) = print(to_string(hist))

#----Callbacks-------------------------------------------------------------------------------------
_callbacks = Vector{CxxWrap.CxxWrapCore.SafeCFunction}()
function init(pythia::PythiaParallel, fun::Function)
    sf = eval(
            quote 
                @safe_cfunction(getfield(Main, Symbol($fun)), CxxBool, (CxxPtr{Pythia},))
            end
    )
    push!(_callbacks, sf)
    init(pythia, sf)
end
function run(pythia::PythiaParallel, fun::Function)
    sf = eval(
            quote 
                @safe_cfunction(getfield(Main, Symbol($fun)), Nothing, (CxxPtr{Pythia},))
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
    :multiplySigmaBy => (Float64, (ConstCxxPtr{SigmaProcess}, ConstCxxPtr{PhaseSpace}, CxxBool)),
    :canBiasSelection => (CxxBool, ()),
    :biasSelectionBy => (Float64, (ConstCxxPtr{SigmaProcess}, ConstCxxPtr{PhaseSpace}, CxxBool)),
    :biasedSelectionWeight  => (Float64, ()),
    :canVetoProcessLevel  => (CxxBool, ()),
    :doVetoProcessLevel => (CxxBool, (CxxRef{Event})),
    :canSetLowEnergySigma => (CxxBool, (Int32, Int32)),
    :doSetLowEnergySigma => (Float64, (Int32, Int32, Float64, Float64, Float64)),
    :canVetoResonanceDecays => (CxxBool, ()),
    :doVetoResonanceDecays => (CxxBool, (CxxRef{Event})),
    :canVetoPT => (CxxBool, ()),
    :scaleVetoPT => (Float64, ()),
    :doVetoPT => (CxxBool, (Int32, ConstCxxRef{Event})),
    :canVetoStep => (CxxBool, ()),
    :numberVetoStep => (CxxBool, (Int32, Int32, Int32, CxxRef{Event})),
    :doVetoStep => (CxxBool, (Int32, Int32, Int32, ConstCxxRef{Event})),
    :canVetoMPIStep => (CxxBool, ()),
    :numberVetoMPIStep => (Int32, ()),
    :doVetoMPIStep => (Int32, (CxxRef{Event})),
    :canVetoPartonLevelEarly  => (CxxBool, ()),
    :doVetoPartonLevelEarly => (CxxBool, (CxxRef{Event})),
    :retryPartonLevel => (CxxBool, ()),
    :canVetoPartonLevel => (CxxBool, ()),
    :doVetoPartonLevel => (CxxBool, (CxxRef{Event})),
    :canSetResonanceScale => (CxxBool, ()),
    :scaleResonance => (Float64, (CxxRef{Event})),
    :canVetoISREmission => (CxxBool, ()),
    :doVetoISREmission => (CxxBool, (Int32, CxxRef{Event})),
    :canVetoFSREmission => (CxxBool, ()),
    :doVetoFSREmission => (CxxBool, (Int32, CxxRef{Event}, Int32, CxxBool)),
    :canVetoMPIEmission => (CxxBool, ()),
    :doVetoMPIEmission => (CxxBool, (Int32, CxxRef{Event})),
    :canReconnectResonanceSystems => (CxxBool, ()),
    :doReconnectResonanceSystems => (CxxBool, (Int32, CxxRef{Event})),
    :canChangeFragPar => (CxxBool, ()),
    :setStringEnds => (Nothing, (ConstCxxPtr{StringEnd}, ConstCxxPtr{StringEnd}, StdVector{Int32})),
    :doChangeFragPar => (CxxBool, (CxxPtr{StringFlav}, CxxPtr{StringZ}, CxxPtr{StringPT}, Int32, Float64, StdVector{Int32},  ConstCxxPtr{StringEnd})),
    :doVetoFragmentation1 => (CxxBool, (CxxRef{Particle}, ConstCxxPtr{StringEnd})),
    :doVetoFragmentation2 => (CxxBool, (CxxRef{Particle}, CxxRef{Particle}, ConstCxxPtr{StringEnd}, ConstCxxPtr{StringEnd})),
    :canVetoHadronization => (CxxBool, ()),
    :doVetoAfterHadronization => (CxxBool, (ConstCxxRef{Event})),
    :canSetImpactParameter => (CxxBool, ()),
    :doSetImpactParameter => (Float64, ()),
    :onEndHadronLevel => (CxxBool, (CxxRef{HadronLevel}, CxxRef{Event}))
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


