# Example main291.jl Julia equivalent of the Pyhton main291.py from the Pythia8 examples directory.
# Authors: Pere Mato (pere.mato@cern.ch)
# Keywords: parallelism; charged multiplicity; julia;

using Pythia8

pythia = Pythia8.Pythia()
pythia << "Beams:eCM = 8000." << 
          "HardQCD:all = on" << 
          "PhaseSpace:pTHatMin = 20." |> init

mult = Pythia8.Hist("charged multiplicity", 100, -0.5, 799.5)

# Begin event loop. Generate event. Skip if error. List first one.
for iEvent in 1:100
    pythia |> next || continue
    # Find number of all final charged particles and fill histogram.
    nCharged = count(p -> isFinal(p) && isCharged(p), pythia |> event) 
    fill!(mult, nCharged)
end

# End of event loop. Statistics. Histogram. Done.
pythia |> Pythia8.stat
mult |> print
