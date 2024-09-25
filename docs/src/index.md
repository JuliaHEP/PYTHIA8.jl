# Julia bindings for PYTHIA

## Description

Julia bindings for the [PYTHIA](https://pythia.org) package used for generating high-energy physics collision events. It facilitates the interface with the PYTHIA client library, by writing Julia code instead of having to write C++ code.
This package is developed using the [CxxWrap.jl](https://github.com/JuliaInterop/CxxWrap.jl) package to wrap C++ types and functions to Julia. Wrapper C++ code is generated with the help of [WrapIt](https://github.com/grasph/wrapit) tool that uses of the clang library.

The Julia interface has been inspired by the functionality provided by [Pythia Python interface](https://pythia.org//latest-manual/PythonInterface.html).

## Installation
The PYTHIA8.jl package does no require any special installation. Stable releases are registered into the Julia general registry, and therefore can be deployed with the standard `Pkg` Julia package manager. This would bring automatically an installation of PYTHIA binary libraries as artifacts corresponding to the current platform (the so called \_jll packages). Linux and MacOS operating systems with `x86_64`, `powerpc64le` and `aarch64` architectures are supported. 

```julia
julia> using Pkg
julia> Pkg.add("PYTHIA8")
```
## Interface
Only the classes that provide the everyday functionality of PYTHIA have been wrapped. Additional classes and functionality can be included upon request. This is a summary of the currently provided classes:
- top level: `Pythia`, `PythiaParallel`
- event access: `Event`, `Particle`, `Vec4`
- settings and information: `HIInfo`, `Settings`, `Flag`, `Mode`, `Parm`, `Word`, `FVec`, `MVec`, `PVec`, `WVec`
- user interface pointers: `Rndm`, `PDF`, `DecayHandler`, `RndmEngine`, `UserHooks`, `MergingHooks`, `BeamShape`, `SigmaProcess`, `TimeShower`, `SpaceShower`, `HeavyIons`
- analysis tools: `Hist`, `HistPlot`, `SlowJet`
- kinematic functions: `m`, `m2`, `dot3`, `cross3`, `cross4`, `theta`, `costheta`, `phi`, `cosphi`, `RRapPhi`, `REtaPhi`

## Limitations
- Methods returning or accepting as argument a `std::map` have not been wrapped since this is a current limitation of the `CxxWrap` package.

## Getting Started
Have a look at the following trivial interactive session:
```Julia
julia> pythia = PYTHIA8.Pythia("", false)
PYTHIA8.Pythia8!PythiaAllocated(Ptr{Nothing} @0x00000001200d0000)

julia> csets = pythia |> settings # which equivalent to csets = settings(pythia)
CxxRef{Pythia8!Settings}(Ptr{Pythia8!Settings} @0x00000001200d02d0)

julia> list(csets, "Init:")
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
 julia> parm(csets, "Beams:eA")
7000.0
```
Note that class methods are called with the object instance as first argument. In C++ the `parm(...)` method of the `Settings` class would be called as `csets.parm("Beams:eA")` being `csets` an instance of `Settings`, while in Julia it is called as `parm(csets, "Beams:eA")`. Thanks to the Julia multi-dispatch we do not need to prefix the methods with the module name `PYTHIA8.parm`, even for very common function names such as `list`.

Also notice that the default printout of any wrapped object is of the form `C++/Julia type(at some address @0xXXXXXX)` like this one: `CxxRef{Pythia8!Settings}(Ptr{Pythia8!Settings} @0x00000001200d02d0)`. In this particular example, the C++ type is a reference to `Pythia8::Settings` and the object is at the memory address `0x00000001200d02d0`.

## Examples
Currently the following examples are implemented replicating the equivalent Python ones.
### [main291.jl](https://github.com/JuliaHEP/PYTHIA8.jl/blob/main/examples/main291.jl)
Simple test program, equivalent to `main101.cc`, but written in Julia. It fits on one slide in a talk. It studies the charged multiplicity distribution at the LHC.
### [main292.jl](https://github.com/JuliaHEP/PYTHIA8.jl/blob/main/examples/main292.jl)
Simple test program to illustrate the usage of `PythiaParallel` in Julia. The physics case is equivalent to `main291`, but in parallel.
### [main293.jl](https://github.com/JuliaHEP/PYTHIA8.jl/blob/main/examples/main293.jl)
Example how you can use `UserHooks` to trace pT spectrum through the program, and veto undesirable jet multiplicities. It is based on `main242.cc`.

## Tests
Unit tests can be run with `julia --project=. test/runtests.jl`. It runs in addition all the implemented examples to ensure their correct execution and detection of any regression.

## Roadmap
There are a number of issues and problems still to be resolved. We keep track of them in this list:
- implement more examples