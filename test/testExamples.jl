@testset "Pythia8Examples" begin

    #---change the working directory
    Base.cd(dirname(dirname(pathof(Pythia8))))

    # All examples should be used for testing to ensure that the release is working correctly
    @test Base.run(`julia --project examples/main291.jl`, devnull, devnull).exitcode  == 0
    @test Base.run(`julia --project examples/main292.jl`, devnull, devnull).exitcode  == 0
    @test Base.run(`julia --project examples/main293.jl`, devnull, devnull).exitcode  == 0
end
