# Example main294.jl Julia equivalent of the Python main294.py from the PYTHIA examples directory.
# Authors: Pere Mato (pere.mato@cern.ch)
# Keywords: particle data

# This provides a simple Julia type which reads and parses the Pythia 8
# particle database, without requiring the Pythia 8 Python bindings.

using Parameters
using LightXML
using PYTHIA8

"""
The 'ParticleData' struct stores the necessary information to define a particle.
# Fields
- 'id' is the particle ID number
- 'name' the name 
- 'm0' the mass in GeV
- 'tau0' the proper lifetime in mm/c
- 'spinType' twice the particle spin
- 'chargeType' is three times the electromagnetic chargeType
- 'colType' is the colType type
- 'mWidth' is the particle width in GeV
- 'mMin' is the minimum mass in GeV
- 'mMax' is the maximum mass in GeV
- 'varWidth' is a flag if variable width should be used
- 'antiName' is a dummy argument not used.
"""
@with_kw struct ParticleData
    id::Int = 0
    name::String = ""
    m0::Float64 = 0
    tau0::Float64 = Inf
    spinType::Int = 0
    chargeType::Int = 0 
    colType::Int = 0
    mWidth::Float64 = 0
    mMin::Float64 = 0
    mMax::Float64 = Inf
    varWidth::Bool= false
    antiName::Union{Nothing, String} = nothing
end
isQuark(pd::ParticleData) = 0 < abs(pd.id) < 10
isDiquark(pd::ParticleData) = 1000 < abs(pd.id) < 10000
isBaryon(pd::ParticleData) = begin
    id = abs(pd.id)
    n = [id ÷ 10^i % 10 for i in 0:9]
    ! (id <= 1000 || 1000000 <= id <= 9000000 || id >= 9900000 ||
       n[1] == 0 || n[2] == 0 || n[3] == 0 || n[4] == 0)
end
isMeson(pd::ParticleData) = begin
    id = abs(pd.id)
    n = [id ÷ 10^i % 10 for i in 0:9]
    id == 130 || id == 310 || ! (
        id <= 100 || 1000000 <= id <= 9000000 || id >= 9900000 ||
        n[1] == 0 || n[2] == 0 || n[3] == 0 || n[4] != 0)
end
isNucleus(pd::ParticleData) = abs(pd.id) > 1000000000

"""
The 'ParticleDatabase' struct initializes and stores the 'ParticleData' for 
all particles in the 'ParticleData.xml' file from Pythia 8.
"""
struct ParticleDatabase
    data::Dict{Union{Int, String}, ParticleData}
end

# Function to parse XML values (strings) to Julia types
quoted(v) = v == "on" ? true : v == "off" ? false : tryparse(Int, v) !== nothing || tryparse(Float64, v) !== nothing ? v : "\"$v\""

function ParticleDatabase(xmlfile=nothing)
    xmlfile == nothing && (xmlfile = joinpath(ENV["PYTHIA8DATA"], "ParticleData.xml"))
    data = Dict{Union{Int, String}, ParticleData}()
    xdoc = parse_string(replace(read(xmlfile, String), "&rarr;" => "→"))
    xroot = root(xdoc)
    xparticles = get_elements_by_tagname(xroot, "particle")
    for xparticle in xparticles
        attrs = attributes_dict(xparticle)
        args = Meta.parse("(" * join(["$k = $(quoted(v))" for (k,v) in attrs],", ") *")") |> eval
        pd = ParticleData(;args...)
        data[pd.id], data[pd.name] = pd, pd
        if pd.antiName != nothing
            attrs["name"] = pd.antiName
            attrs["id"] = "$(-pd.id)"
            attrs["antiName"] = pd.name
            attrs["chargeType"] = "$(-pd.chargeType)"
            args = Meta.parse("(" * join(["$k = $(quoted(v))" for (k,v) in attrs],", ") *")") |> eval
            ad = ParticleData(;args...)
            data[ad.id], data[ad.name] = ad, ad
        end
    end
    ParticleDatabase(data)
end
Base.getindex(pdb::ParticleDatabase, key::Union{Int, String}) = pdb.data[key]

# Parse particle request.
if length(ARGS) < 1
    println("Usage:\n  julia main294.jl <particle id/name>")
    exit(1)
end
key = tryparse(Int, ARGS[1])
key == nothing && ( key =  ARGS[1])
pdb = ParticleDatabase()
try
    println(pdb[key])
catch
    println("Particle id or name not found: $(ARGS[1])")
end

# End of file.