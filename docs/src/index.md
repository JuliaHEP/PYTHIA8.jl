# Julia bindings for Pythia8

## Description

Julia bindings for the [Pythia8](https://pythia.org) package used for generating high-energy physics collision events. It facilitates the interface with the Pythia8 client library, by writing Julia code instead of having to write C++ code.
This package is developed using the [CxxWrap.jl](https://github.com/JuliaInterop/CxxWrap.jl) package to wrap C++ types and functions to Julia. Wrapper C++ code is generated with the help of [WrapIt](https://github.com/grasph/wrapit) tool that uses of the clang library.

The Julia interface has been inspired by the functionality provided by [Pythia Python interface](https://pythia.org//latest-manual/PythonInterface.html).

## Installation
The Pythia8.jl package does no require any special installation. Stable releases are registered into the Julia general registry, and therefore can be deployed with the standard `Pkg` Julia package manager. This would bring automatically an installation of Pythia8 binary libraries as artifacts that corresponds to the current platform (the so called _jll packages).
```julia
julia> using Pkg
julia> Pkg.add("Pythia8")
```
## Available Interface
Only the classes that provides the everyday functionality of PYTHIA have been wrapped. Additional functionality can be included upon request. This is a summary of the provided classes:
- top level: `Pythia`
- event access: `Event`, `Particle`, `Vec4`
- settings and information: `HIInfo`, `Settings`, `Flag`, `Mode`, `Parm`, `Word`, `FVec`, `MVec`, `PVec`, `WVec`
- user interface pointers: `Rndm`, `PDF`, `DecayHandler`, `RndmEngine`, `UserHooks`, `MergingHooks`, `BeamShape`, `SigmaProcess`, `TimeShower`, `SpaceShower`, `HeavyIons`
- analysis tools: `Hist`, `HistPlot`, `SlowJet`
- kinematic functions: `m`, `m2`, `dot3`, `cross3`, `cross4`, `theta`, `costheta`, `phi`, `cosphi`, `RRapPhi`, `REtaPhi`

## Limitations
- Methods returning or accepting as argument a `std::map` have not wrapped (this is a current limitation of CxxWrap package).

## Getting Started
The the following trivial interactive session:
```Julia
julia> pythia = Pythia8.Pythia("", false)
Pythia8.Pythia8!PythiaAllocated(Ptr{Nothing} @0x00000001200d0000)

julia> sets = pythia |> settings # which equivalent to sets = settings(pythia)
CxxRef{Pythia8!Settings}(Ptr{Pythia8!Settings} @0x00000001200d02d0)

julia> list(sets, "Init:")
 *-------  PYTHIA Flag + Mode + Parm + Word + FVec + MVec + PVec + WVec Settings (with requested string) ----------* 
 |                                                                                                                 | 
 | Name                                          |                      Now |      Default         Min         Max | 
 |                                               |                          |                                      | 
 | Init:showAllParticleData                      |                      off |          off                         | 
 | Init:showAllSettings                          |                      off |          off                         | 
 | Init:showChangedParticleData                  |                       on |           on                         | 
 | Init:showChangedResonanceData                 |                      off |          off                         | 
 | Init:showChangedSettings                      |                       on |           on                         | 
 | Init:showMultipartonInteractions              |                       on |           on                         | 
 | Init:showOneParticleData                      |                        0 |            0           0             | 
 | Init:showProcesses                            |                       on |           on                         | 
 |                                                                                                                 | 
 *-------  End PYTHIA Flag + Mode + Parm + Word + FVec + MVec + PVec + WVec Settings  -----------------------------* 
 julia> parm(sets, "Beams:eA")
7000.0
```

## Tests
Unit tests can be run with `julia --project=. test/runtests.jl`

## Roadmap
There are a number of issues and problems still to be resolved. We keep track of them in this list:
