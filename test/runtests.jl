using Test
using Pythia8

@testset "Pythia8 tests" verbose = true begin 
    include("testBasics.jl")
    include("testExamples.jl")
end

