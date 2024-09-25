using Test
using PYTHIA8

@testset "Pythia8 tests" verbose = true begin 
    include("testBasics.jl")
    include("testExamples.jl")
end

