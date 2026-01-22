module PYTHIA8
    using PYTHIA_jll
    using CxxWrap
    using Libdl

    # Check whether the wrappers have been build locally otherwise use the binary package Pythia8_cxxwrap_jll
    gendir = normpath(joinpath(@__DIR__, "../gen"))
    if isdir(joinpath(gendir, "build/lib"))
        println("Using local pythia8 wrapper code from: $gendir")
        include(joinpath(gendir, "jl/src/Pythia8-export.jl"))
        @wrapmodule(()->joinpath(gendir, "build/lib", "libPythia8Wrap.$(Libdl.dlext)"))
    else
        using Pythia8_cxxwrap_jll
        if Pythia8_cxxwrap_jll.is_available()
            include(Pythia8_cxxwrap_jll.Pythia8_exports)
            @wrapmodule(()->Pythia8_cxxwrap_jll.libPythia8Wrap)
        else
            error("Pythia8 binaries not available for $(Sys.KERNEL) $(Sys.ARCH)")
        end
    end

    function __init__()
        @initcxx
        #---Setup [data] environment-------------------------------------------
        ENV["PYTHIA8DATA"] = joinpath(PYTHIA_jll.artifact_dir, "share/Pythia8/xmldoc")
        ENV["PYTHIA8"] = PYTHIA_jll.artifact_dir
    end

    include("Pythia8_API.jl")

end # module PYTHIA8
