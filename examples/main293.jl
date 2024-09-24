# Example main293.jl Julia equivalent of the Pyhton main293.py from the Pythia8 examples directory.
# Authors: Pere Mato (pere.mato@cern.ch)
# Keywords: userhooks; jet finding; anti-kT; process veto; python;

using Pythia8

mutable struct MyHooks <: Pythia8!UserHooks
    slowJet::Pythia8!SlowJet
    pTHat::Float64
    base::Pythia8!UserHooks
    function MyHooks()
        this = new(Pythia8.SlowJet(-1, 0.7, 10., 5.), 0.)
        __init__(this)
    end
end
function canModifySigma(h::MyHooks)
    return true
end
function multiplySigmaBy(h::MyHooks, sigmaProcess::Pythia8!SigmaProcess, phaseSpace::Pythia8!PhaseSpace, inEvent)
    # All events should be 2 -> 2, but kill them if not.
    if sigmaProcess |> nFinal != 2
        return 0.
    end

    # Extract the pT for 2 -> 2 processes in the event generation chain
    # (inEvent = false for initialization).
    if inEvent == true
        h.pTHat = phaseSpace |> pTHat
        fill!(pTtrial, h.pTHat)
    end

    # Here we do not modify 2 -> 2 cross sections.
    return 1.
end
function canVetoPT(h::MyHooks)
    return true
end
function scaleVetoPT(h::MyHooks)
    return 5.
end
# Access the event in the interleaved evolution.
function doVetoPT(h::MyHooks, iPos, event)
    # iPos <= 3 for interleaved evolution; skip others.
    if iPos > 3
        return false
    end

    # Fill histogram of pT spectrum at this stage.
    fill!(pTselect, h.pTHat)

    # Extract a copy of the partons in the hardest system.
    subEvent(h, event)
    fill!(nPartonsB, h.workEvent |> size)

    # Find number of jets with given conditions.
    analyze(h.slowJet, event)
    nJet = h.slowJet |> sizeJet
    fill!(nJets, nJet)

    # Veto events which do not have exactly three jets.
    if nJet != 3
        return true
    end

    # Statistics of survivors.
    fill!(nPartonsA, h.workEvent |> size)
    fill!(pTaccept, h.pTHat)

    # Do not veto events that got this far.
    return false
end



# Put histograms here to make them global, so they can be used both
# in MyUserHooks and in the main program.

pTtrial   = Pythia8.Hist("trial pT spectrum", 100, 0., 400.)
pTselect  = Pythia8.Hist("selected pT spectrum (before veto)", 100, 0., 400.)
pTaccept  = Pythia8.Hist("accepted pT spectrum (after veto)", 100, 0., 400.)
nPartonsB = Pythia8.Hist("number of partons before veto", 20, -0.5, 19.5)
nJets     = Pythia8.Hist("number of jets before veto", 20, -0.5, 19.5)
nPartonsA = Pythia8.Hist("number of partons after veto", 20, -0.5, 19.5)
nFSRatISR = Pythia8.Hist("number of FSR emissions at first ISR emission",
                         20, -0.5, 19.5)


#==========================================================================

# Write own derived UserHooks class.

class MyUserHooks(pythia8.UserHooks):

    # Constructor creates anti-kT jet finder with (-1, R, pTmin, etaMax).
    def __init__(self):
        pythia8.UserHooks.__init__(self)
        self.slowJet = pythia8.SlowJet(-1, 0.7, 10., 5.)
        self.pTHat   = 0.

    # Allow process cross section to be modified...
    def canModifySigma(self): return True

    # ...which gives access to the event at the trial level, before selection.
    def multiplySigmaBy(self, sigmaProcessPtr, phaseSpacePtr, inEvent):

        # All events should be 2 -> 2, but kill them if not.
        if sigmaProcessPtr.nFinal() != 2: return 0.

        # Extract the pT for 2 -> 2 processes in the event generation chain
        # (inEvent = false for initialization).
        if inEvent:
            self.pTHat = phaseSpacePtr.pTHat()
            # Fill histogram of pT spectrum.
            pTtrial.fill(self.pTHat)

        # Here we do not modify 2 -> 2 cross sections.
        return 1.

    # Allow a veto for the interleaved evolution in pT.
    def canVetoPT(self): return True

    # Do the veto test at a pT scale of 5 GeV.
    def scaleVetoPT(self): return 5.

    # Access the event in the interleaved evolution.
    def doVetoPT(self, iPos, event):

        # iPos <= 3 for interleaved evolution; skip others.
        if iPos > 3: return False

        # Fill histogram of pT spectrum at this stage.
        pTselect.fill(self.pTHat)

        # Extract a copy of the partons in the hardest system.
        self.subEvent(event)
        nPartonsB.fill(self.workEvent.size())

        # Find number of jets with given conditions.
        self.slowJet.analyze(event);
        nJet = self.slowJet.sizeJet()
        nJets.fill(nJet)

        # Veto events which do not have exactly three jets.
        if nJet != 3: return True

        # Statistics of survivors.
        nPartonsA.fill(self.workEvent.size())
        pTaccept.fill(self.pTHat)

        # Do not veto events that got this far.
        return False

    # Allow a veto after (by default) first step.
    def canVetoStep(self): return True

    # Access the event in the interleaved evolution after first step.
    def doVetoStep(self, iPos, nISR, nFSR, event):

        # Only want to study what happens at first ISR emission
        if iPos == 2 and nISR == 1: nFSRatISR.fill(nFSR)

        # Not intending to veto any events here.
        return False

=#

# Generator.
pythia = Pythia8.Pythia()

#  Process selection. No need to study hadron level.
pythia << "HardQCD:all = on"
pythia << "PhaseSpace:pTHatMin = 50."
pythia << "HadronLevel:all = off"

# Set up to do a user veto and send it in.
myUserHooks = MyHooks()
setUserHooksPtr(pythia, myUserHooks)


# Tevatron initialization.
pythia << "Beams:idB = -2212"
pythia << "Beams:eCM = 1960."
pythia |> init

# Generate events.

for iEvent in 1:1000
    pythia |> next
end

# Statistics. Histograms.
pythia |> Pythia8.stat
pTtrial |> print
pTselect |> print
pTaccept |> print
nPartonsB |> print
nJets |> print
nPartonsA |> print
nFSRatISR |> print
