pythia = Pythia8.Pythia("",false)
@testset "Basics" begin
    @test checkVersion(pythia)
    
    # Test reading and writing settings as strings
    @test readString(pythia, "Beams:eCM = 8888.")
    @test parm(pythia, "Beams:eCM") == 8888.
end
