var documenterSearchIndex = {"docs":
[{"location":"release_notes/#Release-Notes","page":"Release Notes","title":"Release Notes","text":"","category":"section"},{"location":"release_notes/#0.2.0-(07-11-2024)","page":"Release Notes","title":"0.2.0 (07-11-2024)","text":"","category":"section"},{"location":"release_notes/#New-functionality","page":"Release Notes","title":"New functionality","text":"","category":"section"},{"location":"release_notes/","page":"Release Notes","title":"Release Notes","text":"Added 2 more new examples: main294.jl and main296.jl\nAdded a tutorial in the documentation using the module Literate.jl to generate markdown and notebook from single source.","category":"page"},{"location":"release_notes/#0.1.1-(03-10-2024)","page":"Release Notes","title":"0.1.1 (03-10-2024)","text":"","category":"section"},{"location":"release_notes/#Fixes","page":"Release Notes","title":"Fixes","text":"","category":"section"},{"location":"release_notes/","page":"Release Notes","title":"Release Notes","text":"Lower the version requirements InteractiveUtils.","category":"page"},{"location":"release_notes/#0.1.0-(25-09-2024)","page":"Release Notes","title":"0.1.0 (25-09-2024)","text":"","category":"section"},{"location":"release_notes/","page":"Release Notes","title":"Release Notes","text":"Initial release with basic functionality needed to run the first 3 examples.","category":"page"},{"location":"api/#Public-Documentation","page":"Public APIs","title":"Public Documentation","text":"","category":"section"},{"location":"api/","page":"Public APIs","title":"Public APIs","text":"Documentation for PYTHIA8.jl public interface.","category":"page"},{"location":"api/","page":"Public APIs","title":"Public APIs","text":"","category":"page"},{"location":"api/#Index","page":"Public APIs","title":"Index","text":"","category":"section"},{"location":"api/","page":"Public APIs","title":"Public APIs","text":"Pages   = [\"api.md\"]\nModules = [PYTHIA8]\nOrder   = [:type]","category":"page"},{"location":"api/","page":"Public APIs","title":"Public APIs","text":"Pages   = [\"api.md\"]\nModules = [PYTHIA8, Base]\nOrder   = [:function]","category":"page"},{"location":"api/","page":"Public APIs","title":"Public APIs","text":"","category":"page"},{"location":"api/#Types","page":"Public APIs","title":"Types","text":"","category":"section"},{"location":"api/","page":"Public APIs","title":"Public APIs","text":"This is the list of all types and functions defined for PYTHIA8","category":"page"},{"location":"api/","page":"Public APIs","title":"Public APIs","text":"Modules = [PYTHIA8]\nOrder = [:type]","category":"page"},{"location":"api/#Functions","page":"Public APIs","title":"Functions","text":"","category":"section"},{"location":"api/","page":"Public APIs","title":"Public APIs","text":"Modules = [PYTHIA8]\nOrder = [:function]","category":"page"},{"location":"api/#PYTHIA8.__init__-Tuple{Pythia8!UserHooks}","page":"Public APIs","title":"PYTHIA8.__init__","text":"__init__(self::UserHooks)\n\nThis function initializes the UserHooks object by creating an instance of Pythia8UserHooks  and setting the hooks for each method defined by the user.\n\n\n\n\n\n","category":"method"},{"location":"#Julia-bindings-for-PYTHIA","page":"Introduction","title":"Julia bindings for PYTHIA","text":"","category":"section"},{"location":"#Description","page":"Introduction","title":"Description","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"Julia bindings for the PYTHIA package used for generating high-energy physics collision events. It facilitates the interface with the PYTHIA client library, by writing Julia code instead of having to write C++ code. This package is developed using the CxxWrap.jl package to wrap C++ types and functions to Julia. Wrapper C++ code is generated with the help of WrapIt tool that uses of the clang library.","category":"page"},{"location":"","page":"Introduction","title":"Introduction","text":"The Julia interface has been inspired by the functionality provided by Pythia Python interface.","category":"page"},{"location":"#Installation","page":"Introduction","title":"Installation","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"The PYTHIA8.jl package does no require any special installation. Stable releases are registered into the Julia general registry, and therefore can be deployed with the standard Pkg Julia package manager. This would bring automatically an installation of PYTHIA binary libraries as artifacts corresponding to the current platform (the so called _jll packages). Linux and MacOS operating systems with x86_64, powerpc64le and aarch64 architectures are supported. ","category":"page"},{"location":"","page":"Introduction","title":"Introduction","text":"julia> using Pkg\njulia> Pkg.add(\"PYTHIA8\")","category":"page"},{"location":"#Interface","page":"Introduction","title":"Interface","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"Only the classes that provide the everyday functionality of PYTHIA have been wrapped. Additional classes and functionality can be included upon request. This is a summary of the currently provided classes:","category":"page"},{"location":"","page":"Introduction","title":"Introduction","text":"top level: Pythia, PythiaParallel\nevent access: Event, Particle, Vec4\nsettings and information: HIInfo, Settings, Flag, Mode, Parm, Word, FVec, MVec, PVec, WVec\nuser interface pointers: Rndm, PDF, DecayHandler, RndmEngine, UserHooks, MergingHooks, BeamShape, SigmaProcess, TimeShower, SpaceShower, HeavyIons\nanalysis tools: Hist, HistPlot, SlowJet\nkinematic functions: m, m2, dot3, cross3, cross4, theta, costheta, phi, cosphi, RRapPhi, REtaPhi","category":"page"},{"location":"#Limitations","page":"Introduction","title":"Limitations","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"Methods returning or accepting as argument a std::map have not been wrapped since this is a current limitation of the CxxWrap package.","category":"page"},{"location":"#Getting-Started","page":"Introduction","title":"Getting Started","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"Have a look at the following trivial interactive session:","category":"page"},{"location":"","page":"Introduction","title":"Introduction","text":"julia> using PYTHIA8\n\njulia> pythia = PYTHIA8.Pythia(\"\", false)\nPYTHIA8.Pythia8!PythiaAllocated(Ptr{Nothing} @0x00000001200d0000)\n\njulia> csets = pythia |> settings # which equivalent to csets = settings(pythia)\nCxxRef{Pythia8!Settings}(Ptr{Pythia8!Settings} @0x00000001200d02d0)\n\njulia> list(csets, \"Init:\")\n *-------  PYTHIA Flag + Mode + Parm + Word + FVec + MVec + PVec + WVec Settings (with requested string) ----------* \n |                                                                                                                 | \n | Name                                          |                      Now |      Default         Min         Max | \n |                                               |                          |                                      | \n | Init:showAllParticleData                      |                      off |          off                         | \n | Init:showAllSettings                          |                      off |          off                         | \n | Init:showChangedParticleData                  |                       on |           on                         | \n | Init:showChangedResonanceData                 |                      off |          off                         | \n | Init:showChangedSettings                      |                       on |           on                         | \n | Init:showMultipartonInteractions              |                       on |           on                         | \n | Init:showOneParticleData                      |                        0 |            0           0             | \n | Init:showProcesses                            |                       on |           on                         | \n |                                                                                                                 | \n *-------  End PYTHIA Flag + Mode + Parm + Word + FVec + MVec + PVec + WVec Settings  -----------------------------* \n julia> parm(csets, \"Beams:eA\")\n7000.0","category":"page"},{"location":"","page":"Introduction","title":"Introduction","text":"Note that class methods are called with the object instance as first argument. In C++ the parm(...) method of the Settings class would be called as csets.parm(\"Beams:eA\") being csets an instance of Settings, while in Julia it is called as parm(csets, \"Beams:eA\"). Thanks to the Julia multi-dispatch we do not need to prefix the methods with the module name PYTHIA8.parm, even for very common function names such as list.","category":"page"},{"location":"","page":"Introduction","title":"Introduction","text":"Also notice that the default printout of any wrapped object is of the form C++/Julia type(at some address @0xXXXXXX) like this one: CxxRef{Pythia8!Settings}(Ptr{Pythia8!Settings} @0x00000001200d02d0). In this particular example, the C++ type is a reference to Pythia8::Settings and the object is at the memory address 0x00000001200d02d0.","category":"page"},{"location":"#Examples","page":"Introduction","title":"Examples","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"Currently the following examples are implemented replicating the equivalent Python ones.","category":"page"},{"location":"#[main291.jl](https://github.com/JuliaHEP/PYTHIA8.jl/blob/main/examples/main291.jl)","page":"Introduction","title":"main291.jl","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"Simple test program, equivalent to main101.cc, but written in Julia. It fits on one slide in a talk. It studies the charged multiplicity distribution at the LHC.","category":"page"},{"location":"#[main292.jl](https://github.com/JuliaHEP/PYTHIA8.jl/blob/main/examples/main292.jl)","page":"Introduction","title":"main292.jl","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"Simple test program to illustrate the usage of PythiaParallel in Julia. The physics case is equivalent to main291, but in parallel.","category":"page"},{"location":"#[main293.jl](https://github.com/JuliaHEP/PYTHIA8.jl/blob/main/examples/main293.jl)","page":"Introduction","title":"main293.jl","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"Example how you can use UserHooks to trace pT spectrum through the program, and veto undesirable jet multiplicities. It is based on main242.cc.","category":"page"},{"location":"#[main294.jl](https://github.com/JuliaHEP/PYTHIA8.jl/blob/main/examples/main294.jl)","page":"Introduction","title":"main294.jl","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"Simple Julia script which reads and parses the Pythia 8 particle database (XML format), without requiring the Pythia8 Julia bindings.","category":"page"},{"location":"#[main296.jl](https://github.com/JuliaHEP/PYTHIA8.jl/blob/main/examples/main296.jl)","page":"Introduction","title":"main296.jl","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"Example of how PYTHIA can be used as a shared library from Julia. The physics case is a study of total cross sections, which are not exposed currently cannot through the normal Julia interface.","category":"page"},{"location":"#Tests","page":"Introduction","title":"Tests","text":"","category":"section"},{"location":"","page":"Introduction","title":"Introduction","text":"Unit tests can be run with julia --project=. test/runtests.jl. It runs in addition all the implemented examples to ensure their correct execution and detection of any regression.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"EditURL = \"tutorial_lit.jl\"","category":"page"},{"location":"tutorial/#PYTHIA8.jl-Tutorial","page":"Tutorial","title":"PYTHIA8.jl Tutorial","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"This turorial demostrates a simple application of PYTHIA8.jl to generate some events and present the results in form of histograms. Please refer to the PYTHIA documentation for more details on the parameters and the physics processes.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"note: Note that\nYou can also download this tutorial as a Jupyter notebook and a plain Julia source file.","category":"page"},{"location":"tutorial/#Table-of-contents","page":"Tutorial","title":"Table of contents","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Pages = [\"tutorial.md\"]\nDepth = 2:3","category":"page"},{"location":"tutorial/#Generate-events-and-plot-the-charged-multiplicity-distribution","page":"Tutorial","title":"Generate events and plot the charged multiplicity distribution","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"In this example, we will generate 200 events at a center of mass energy of 8000 GeV and plot the charged multiplicity distribution.","category":"page"},{"location":"tutorial/#Loading-the-necessary-modules","page":"Tutorial","title":"Loading the necessary modules","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"We will use the PYTHIA8 module to run the event generation.\nWe will use the FHist module to create the histograms.\nWe will use the Plots module to plot them.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"If these modules are not installed, you can install them by running the following commands:","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"using Pkg\nPkg.add(\"PYTHIA8\")\nPkg.add(\"FHist\")\nPkg.add(\"Plots\")","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"using PYTHIA8\nusing FHist\nusing Plots: plot, plot!, theme\nimport DisplayAs: PNG #hide","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Define the theme for the plots. See available themes and attributes in Plots.jl.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"theme(:wong2, frame=:box, grid=false, minorticks=true,\n      guidefontvalign=:top, guidefonthalign=:right,\n      xlims=(:auto, :auto), lw=1.2, lab=\"\", colorbar=false)","category":"page"},{"location":"tutorial/#Initialize-PYTHIA","page":"Tutorial","title":"Initialize PYTHIA","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"We will initialize PYTHIA with the following settings:","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Center of mass energy of the collision: 8000 GeV\nAll hard QCD processes are enabled\nMinimum transverse momentum of the hard process: 20 GeV","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"We use the operator << to set the parameters and the operator |> to pipe to the init function. This added interface is quite ergonomic, however alternatively, we can use the functions directly provided by C++ interface, e.g.,","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"readString(pythia, \"Beams:eCM = 8000.\") or\nparm( settings(pythia), \"Beams:eCM\", 8000.)","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"pythia = PYTHIA8.Pythia(\"\", false);\npythia << \"Beams:eCM = 8000.\" <<\n          \"HardQCD:all = on\" <<\n          \"PhaseSpace:pTHatMin = 20.\";\nnothing #hide","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"The purpose of the next two lines is to reduce the amount of output during the event generation","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"pythia << \"Next:numberShowEvent = 0\" <<\n          \"Next:numberShowProcess = 0\";\nnothing #hide","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Initialize the event generation. The init function returns a boolean value. Alternatively, we can use the direct call to init(pythia) function.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"pythia |> init;\nnothing #hide","category":"page"},{"location":"tutorial/#Create-a-1D-histogram","page":"Tutorial","title":"Create a 1D histogram","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"We will create a histogram to store the charged multiplicity distribution. The histogram is defined with 25 bins ranging from -0.5 to 499.5. Note that with ranges we need to specify the number of edges (26) and not the number of bins (25)","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"mult = Hist1D(binedges=range(-0.5, 499.5, 26));\nnothing #hide","category":"page"},{"location":"tutorial/#Generate-events","page":"Tutorial","title":"Generate events","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"We will generate 200 events and fill the histogram with the number of charged particles making use of the count function. We use the push! function to fill the histogram.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"for iEvent in 1:200\n    pythia |> next || continue\n    # Find number of all final charged particles and fill histogram.\n    nCharged = count(p -> isFinal(p) && isCharged(p), pythia |> event)\n    push!(mult, nCharged)\nend","category":"page"},{"location":"tutorial/#Print-the-statistics-and-plot-charged-multiplicity-distribution","page":"Tutorial","title":"Print the statistics and plot charged multiplicity distribution","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Print the generation statistics using the stat function from PYTHIA.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"pythia |> PYTHIA8.stat","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Plot the histogram with the plot function from Plots.jl. We use the stepbins seriestype to plot the histogram as a step plot.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"img = plot(mult, xlabel=\"counts\", ylabel=\"#particles\",\n           title=\"Charged Multiplicity Distribution\", seriestype=:stepbins,\n           c=2, lc=1, fill=0);\ndisplay(img)\nPNG(img) #hide","category":"page"},{"location":"tutorial/#Multi-threaded-version-of-the-same-example","page":"Tutorial","title":"Multi-threaded version of the same example","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"In this example we repeat the same example as before but using multi-threading to generate the events faster.","category":"page"},{"location":"tutorial/#Initialize-Parallel-PYTHIA","page":"Tutorial","title":"Initialize Parallel PYTHIA","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Create an instance of PythiaParallel with the same settings as before. The PythiaParallel class is used to generate events concurrently using multiple threads. The settings are copied for each Pythia instance.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"pythia_mt = PYTHIA8.PythiaParallel(\"\", false);\nnothing #hide","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"PythiaParallel reads settings the same way as the normal Pythia does.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"pythia_mt << \"Beams:eCM = 8000.\" <<\n             \"HardQCD:all = on\" <<\n             \"PhaseSpace:pTHatMin = 20.\";\nnothing #hide","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"The maximum degree of parallelism. If set to 0 (default), the program will use the maximum number of threads supported by the hardware.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"pythia_mt << \"Parallelism:numThreads = 4\";\nnothing #hide","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"This defines the number of events generated by PythiaParallel::run.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"pythia_mt << \"Main:numberOfEvents = 200\";\nnothing #hide","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"The next is a user provided function to initialize each underlying Pythia instance (one per thread). Please note that the function is called concurrently, therefore the use needs to avoid calling thread-unsafe functions. This is the reason we use the Core.println function instead of println.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"function w_init(pythia)::CxxBool\n    Core.println(\"Initializing Pythia with index $(mode(pythia |> settings, \"Parallelism:index\")).\")\n    return pythia |> init\nend;\nnothing #hide","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Initialize the event generation. The init function returns a boolean value to indicate the success. The user provided function w_init is called for each thread.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"init(pythia_mt, w_init);\nnothing #hide","category":"page"},{"location":"tutorial/#Create-a-1D-histogram-2","page":"Tutorial","title":"Create a 1D histogram","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"mult_mt = Hist1D(binedges=range(-0.5, 499.5, 26));\nnothing #hide","category":"page"},{"location":"tutorial/#Generate-events-2","page":"Tutorial","title":"Generate events","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Define a user function that will be called for each generated event. This function will be called concurrently by the threads. Therefore, we need to use thread-safe functions. Filling the histogram with atomic_push is thread-safe. The function takes a Pythia object as the first argument and returns Nothing.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"function analyze(pythiaNow)::Nothing\n    nCharged = count(p -> isFinal(p) && isCharged(p), pythiaNow |> event)\n    atomic_push!(mult_mt, nCharged)\n    return\nend","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Run the event generation. The number of events has been set in the Main:numberOfEvents parameter.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"PYTHIA8.run(pythia_mt, analyze);\nnothing #hide","category":"page"},{"location":"tutorial/#Print-the-statistics-and-plot-charged-multiplicity-distribution-2","page":"Tutorial","title":"Print the statistics and plot charged multiplicity distribution","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Print the statistics using the stat function from PYTHIA8.jl","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"pythia_mt |> PYTHIA8.stat","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Plot the result histogram","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"img = plot(mult_mt, xlabel=\"counts\", ylabel=\"#particles\",\n           title=\"Charged Multiplicity Distribution (multi-threaded)\", seriestype=:stepbins,\n           c=2, lc=1, fill=0);\ndisplay(img)\nPNG(img) #hide","category":"page"},{"location":"tutorial/#Speed-comparison-between-the-two-versions","page":"Tutorial","title":"Speed comparison between the two versions","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"We will generate 1000 events and compare the time taken by the two versions.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"empty!(mult);\nempty!(mult_mt);\nnothing #hide","category":"page"},{"location":"tutorial/#Single-threaded-version","page":"Tutorial","title":"Single-threaded version","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Generate 1000 events and measure the time taken. This is done using the @elapsed macro.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"st_elap = @elapsed begin\n    for iEvent in 1:1000\n        pythia |> next || continue\n        nCharged = count(p -> isFinal(p) && isCharged(p), pythia |> event)\n        atomic_push!(mult, nCharged)\n    end\nend","category":"page"},{"location":"tutorial/#Multi-threaded-version","page":"Tutorial","title":"Multi-threaded version","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Generate 1000 events and measure the time taken. This is done using the @elapsed macro.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"pythia_mt << \"Main:numberOfEvents = 1000\"\nmt_elap = @elapsed begin\n    PYTHIA8.run(pythia_mt, analyze)\nend","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Print the speedup factor (4 threads)","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"println(\"Speedup is $(st_elap/mt_elap).\")","category":"page"},{"location":"tutorial/#Make-a-plot-of-the-speedup-factor","page":"Tutorial","title":"Make a plot of the speedup factor","text":"","category":"section"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"We will generate events using 1, 2, 4, 8, 16, and 32 threads and plot the speedup factor. The speedup factor is defined as the ratio of the time taken by the single-threaded version to the time taken by the multi-threaded version.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"n_threads = [2^n for n in 0:5]\nspeedup = Float64[]\nw_init(pythiaNow)::CxxBool = pythiaNow |> init\nfor n_thread in n_threads\n    empty!(mult_mt)\n    _pythia = PYTHIA8.PythiaParallel(\"\", false);\n    _pythia << \"Beams:eCM = 8000.\" <<\n               \"HardQCD:all = on\" <<\n               \"PhaseSpace:pTHatMin = 20.\" <<\n               \"Parallelism:numThreads = $n_thread\" <<\n               \"Main:numberOfEvents = 1000\"\n    init(_pythia, w_init)\n\n    elap = @elapsed begin\n        PYTHIA8.run(_pythia, analyze)\n    end\n    push!(speedup, st_elap/elap)\nend;\nnothing #hide","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Plot the speedup factor vs the number of threads and overlay the line for the ideal scaling.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"img = plot(n_threads, speedup, xlabel=\"#threads\", ylabel=\"speedup\",\n           title=\"Speedup vs #threads (#cores = $(Sys.CPU_THREADS))\",\n           seriestype=:scatter, legend=false,\n           xscale=:log10, yscale=:log10);\nnothing #hide","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"Add a line to the same plot","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"plot!(n_threads, n_threads, seriestype=:line)\ndisplay(img)\nPNG(img) #hide","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"note: Note that\nThe plot is generated in a CI node using the cores available in the node. The speedup factor may not scale as expected.","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"","category":"page"},{"location":"tutorial/","page":"Tutorial","title":"Tutorial","text":"This page was generated using Literate.jl.","category":"page"}]
}
