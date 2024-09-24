#include "Pythia8Wrap.h"
#include "Pythia8/Pythia.h"
#include "Pythia8/PythiaParallel.h"
#include <functional>
#include "jlcxx/functions.hpp"

void gc_safe_enter() {
    #if JULIA_VERSION_MAJOR >= 1 && JULIA_VERSION_MINOR >= 7
        jl_ptls_t ptls = jl_current_task->ptls;
    #else
        jl_ptls_t ptls = jl_get_ptls_states();
    #endif
    jl_gc_safe_enter(ptls);
}
void gc_safe_leave() {
        #if JULIA_VERSION_MAJOR >= 1 && JULIA_VERSION_MINOR >= 7
        jl_ptls_t ptls = jl_current_task->ptls;
    #else
        jl_ptls_t ptls = jl_get_ptls_states();
    #endif
    jl_gc_unsafe_enter(ptls);
}

bool init(Pythia8::PythiaParallel& pythia, bool (*func)(Pythia8::Pythia*)) {
    return pythia.init(func);
}
std::vector<long> run(Pythia8::PythiaParallel& pythia, long nEvents, void (*func)(Pythia8::Pythia*)) {
    gc_safe_enter();  // this is needed to not block Julia's GC from running during the Pythia event loop
    auto r = pythia.run(nEvents, func);
    gc_safe_leave();
    return r;
}
std::vector<long> run(Pythia8::PythiaParallel& pythia, void (*func)(Pythia8::Pythia*)) {
    gc_safe_enter();  // this is needed to not block Julia's GC from running during the Pythia event loop
    auto r = pythia.run(func);
    gc_safe_leave();
    return r;
}

// user hooks
bool Pythia8UserHooks::initAfterBeams() {
    if (initAfterBeams_f) {
        return initAfterBeams_f(initAfterBeams_d);
    }
    return true;
}
bool Pythia8UserHooks::canModifySigma() {
    if (canModifySigma_f) {
        return canModifySigma_f(canModifySigma_d);
    }
    return false;
}
double Pythia8UserHooks::multiplySigmaBy(const Pythia8::SigmaProcess* sigmaProcessPtr,
                                         const Pythia8::PhaseSpace* phaseSpacePtr, bool inEvent) {
    if (multiplySigmaBy_f) {
        return multiplySigmaBy_f(multiplySigmaBy_d, sigmaProcessPtr, phaseSpacePtr, inEvent); 
    }
    return 1.0;
}
bool Pythia8UserHooks::canBiasSelection() {
    if (canBiasSelection_f) {
        return canBiasSelection_f(canBiasSelection_d);
    }
    return false;
}
double Pythia8UserHooks::biasSelectionBy(const Pythia8::SigmaProcess* sigmaProcessPtr,
                                         const Pythia8::PhaseSpace* phaseSpacePtr, bool inEvent) {
    if (biasSelectionBy_f) {
        return biasSelectionBy_f(biasSelectionBy_d, sigmaProcessPtr, phaseSpacePtr, inEvent); 
    }
    return 1.0;
}
double Pythia8UserHooks::biasedSelectionWeight() {
    if (biasedSelectionWeight_f) {
        return biasedSelectionWeight_f(biasedSelectionWeight_d);
    }
    return 1.0/selBias;
}
bool Pythia8UserHooks::canVetoProcessLevel() {
    if (canVetoProcessLevel_f) {
        return canVetoProcessLevel_f(canVetoProcessLevel_d);
    }
    return false;
}
bool Pythia8UserHooks::doVetoProcessLevel(Pythia8::Event& event) {
    if (doVetoProcessLevel_f) {
        return doVetoProcessLevel_f(doVetoProcessLevel_d, event);
    }
    return false;
}
bool Pythia8UserHooks::canSetLowEnergySigma(int idA, int idB) const {
    if (canSetLowEnergySigma_f) {
        return canSetLowEnergySigma_f(canSetLowEnergySigma_d, idA, idB);
    }
    return false;
}
double Pythia8UserHooks::doSetLowEnergySigma(int idA, int idB, double eCM, double mA, double mB) const {
    if (doSetLowEnergySigma_f) {
        return doSetLowEnergySigma_f(doSetLowEnergySigma_d, idA, idB, eCM, mA, mB);
    }
    return 0.0;
}
bool Pythia8UserHooks::canVetoResonanceDecays() {
    if (canVetoResonanceDecays_f) {
        return canVetoResonanceDecays_f(canVetoResonanceDecays_d);
    }
    return false;
}
bool Pythia8UserHooks::doVetoResonanceDecays(Pythia8::Event& event) {
    if (doVetoResonanceDecays_f) {
        return doVetoResonanceDecays_f(doVetoResonanceDecays_d, event);
    }
    return false;
}
bool Pythia8UserHooks::canVetoPT() {
    if (canVetoPT_f) {
        return canVetoPT_f(canVetoPT_d);
    }
    return false;
}
double Pythia8UserHooks::scaleVetoPT() {
    if (scaleVetoPT_f) {
        return scaleVetoPT_f(scaleVetoPT_d);
    }
    return 0.0;
}
bool Pythia8UserHooks::doVetoPT(int iPos, const Pythia8::Event& event) {
    if (doVetoPT_f) {
        return doVetoPT_f(doVetoPT_d, iPos, event);
    }
    return false;
}
bool Pythia8UserHooks::canVetoStep() {
    if (canVetoStep_f) {
        return canVetoStep_f(canVetoStep_d);
    }
    return false;
}
int Pythia8UserHooks::numberVetoStep() {
    if (numberVetoStep_f) {
        return numberVetoStep_f(numberVetoStep_d);
    }
    return 1;
}
bool Pythia8UserHooks::doVetoStep(int iPos, int nISR, int nFSR, const Pythia8::Event& event) {
    if (doVetoStep_f) {
        return doVetoStep_f(doVetoStep_d, iPos, nISR, nFSR, event);
    }
    return false;
}
bool Pythia8UserHooks::canVetoMPIStep() {
    if (canVetoMPIStep_f) {
        return canVetoMPIStep_f(canVetoMPIStep_d);
    }
    return false;
}
int Pythia8UserHooks::numberVetoMPIStep() {
    if (numberVetoMPIStep_f) {
        return numberVetoMPIStep_f(numberVetoMPIStep_d);
    }
    return 1;
}
bool Pythia8UserHooks::doVetoMPIStep(int nMPI, const Pythia8::Event& event) {
    if (doVetoMPIStep_f) {
        return doVetoMPIStep_f(doVetoMPIStep_d, nMPI, event);
    }
    return false;
}
bool Pythia8UserHooks::canVetoPartonLevelEarly() {
    if (canVetoPartonLevelEarly_f) {
        return canVetoPartonLevelEarly_f(canVetoPartonLevelEarly_d);
    }
    return false;
}
bool Pythia8UserHooks::doVetoPartonLevelEarly(const Pythia8::Event& event) {
    if (doVetoPartonLevelEarly_f) {
        return doVetoPartonLevelEarly_f(doVetoPartonLevelEarly_d, event);
    }
    return false;
}
bool Pythia8UserHooks::retryPartonLevel() {
    if (retryPartonLevel_f) {
        return retryPartonLevel_f(retryPartonLevel_d);
    }
    return false;
}
bool Pythia8UserHooks::canVetoPartonLevel() {
    if (canVetoPartonLevel_f) {
        return canVetoPartonLevel_f(canVetoPartonLevel_d);
    }
    return false;
}
bool Pythia8UserHooks::doVetoPartonLevel(const Pythia8::Event& event) {
    if (doVetoPartonLevel_f) {
        return doVetoPartonLevel_f(doVetoPartonLevel_d, event);
    }
    return false;
}
bool Pythia8UserHooks::canSetResonanceScale() {
    if (canSetResonanceScale_f) {
        return canSetResonanceScale_f(canSetResonanceScale_d);
    }
    return false;
}
double Pythia8UserHooks::scaleResonance(int iRes, const Pythia8::Event& event) {
    if (scaleResonance_f) {
        return scaleResonance_f(scaleResonance_d, iRes, event);
    }
    return 0.0;
}
bool Pythia8UserHooks::canVetoISREmission() {
    if (canVetoISREmission_f) {
        return canVetoISREmission_f(canVetoISREmission_d);
    }
    return false;
}
bool Pythia8UserHooks::doVetoISREmission(int sizeOld, const Pythia8::Event& event, int iSys) {
    if (doVetoISREmission_f) {
        return doVetoISREmission_f(doVetoISREmission_d, sizeOld, event, iSys);
    }
    return false;
}
bool Pythia8UserHooks::canVetoFSREmission() {
    if (canVetoFSREmission_f) {
        return canVetoFSREmission_f(canVetoFSREmission_d);
    }
    return false;
}
bool Pythia8UserHooks::doVetoFSREmission(int sizeOld, const Pythia8::Event& event, int iSys, bool inResonance) { 
    if (doVetoFSREmission_f) {
        return doVetoFSREmission_f(doVetoFSREmission_d, sizeOld, event, iSys, inResonance);
    }
    return false;
}
bool Pythia8UserHooks::canVetoMPIEmission() {
    if (canVetoMPIEmission_f) {
        return canVetoMPIEmission_f(canVetoMPIEmission_d);
    }
    return false;
}
bool Pythia8UserHooks::doVetoMPIEmission(int sizeOld, const Pythia8::Event& event) {
    if (doVetoMPIEmission_f) {
        return doVetoMPIEmission_f(doVetoMPIEmission_d, sizeOld, event);
    }
    return false;
}
bool Pythia8UserHooks::canReconnectResonanceSystems() {
    if (canReconnectResonanceSystems_f) {
        return canReconnectResonanceSystems_f(canReconnectResonanceSystems_d);
    }
    return false;
}
bool Pythia8UserHooks::doReconnectResonanceSystems(int oldSizeEvt, Pythia8::Event& event) {
    if (doReconnectResonanceSystems_f) {
        return doReconnectResonanceSystems_f(doReconnectResonanceSystems_d, oldSizeEvt, event);
    }
    return true;
}
bool Pythia8UserHooks::canChangeFragPar() {
    if (canChangeFragPar_f) {
        return canChangeFragPar_f(canChangeFragPar_d);
    }
    return false;
}
void Pythia8UserHooks::setStringEnds(const Pythia8::StringEnd* e1, const Pythia8::StringEnd* e2, std::vector<int> v) {
    if (setStringEnds_f) {
        setStringEnds_f(setStringEnds_d, e1, e2, v);
    }
}
bool Pythia8UserHooks::doChangeFragPar(Pythia8::StringFlav* flavPtr, Pythia8::StringZ* zPtr, Pythia8::StringPT* pTPtr, int idEnd, double m2Had, std::vector<int> iParton, const Pythia8::StringEnd* posEnd) {
    if (doChangeFragPar_f) {
        return doChangeFragPar_f(doChangeFragPar_d, flavPtr, zPtr, pTPtr, idEnd, m2Had, iParton, posEnd);
    }
    return false;
}
bool Pythia8UserHooks::doVetoFragmentation(Pythia8::Particle p1, const Pythia8::StringEnd* pos1) {
    if (doVetoFragmentation1_f) {
        return doVetoFragmentation1_f(doVetoFragmentation1_d, p1, pos1);
    }
    return false;
}
bool Pythia8UserHooks::doVetoFragmentation(Pythia8::Particle p1, Pythia8::Particle p2, const Pythia8::StringEnd* pos1, const Pythia8::StringEnd* pos2) {
    if (doVetoFragmentation2_f) {
        return doVetoFragmentation2_f(doVetoFragmentation2_d, p1, p2, pos1, pos2);
    }
    return false;
}
bool Pythia8UserHooks::canVetoAfterHadronization() {
    if (canVetoAfterHadronization_f) {
        return canVetoAfterHadronization_f(canVetoAfterHadronization_d);
    }
    return false;
}
bool Pythia8UserHooks::doVetoAfterHadronization(const Pythia8::Event& event) {
    if (doVetoAfterHadronization_f) {
        return doVetoAfterHadronization_f(doVetoAfterHadronization_d, event);
    }
    return false;
}
bool Pythia8UserHooks::canSetImpactParameter() const {
    if (canSetImpactParameter_f) {
        return canSetImpactParameter_f(canSetImpactParameter_d);
    }
    return false;
}
double Pythia8UserHooks::doSetImpactParameter() {
    if (doSetImpactParameter_f) {
        return doSetImpactParameter_f(doSetImpactParameter_d);
    }
    return 0.0;
}
bool Pythia8UserHooks::onEndHadronLevel(Pythia8::HadronLevel& hlvl, Pythia8::Event& event) {
    if (onEndHadronLevel_f) {
        return onEndHadronLevel_f(onEndHadronLevel_d, hlvl, event);
    }
    return true;
}

