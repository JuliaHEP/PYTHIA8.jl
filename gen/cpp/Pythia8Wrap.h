#include "Pythia8/Basics.h"
#include "Pythia8/UserHooks.h"
namespace Pythia8 {
    class PythiaParallel;
    class Pythia;
}
#include <vector>
#include <string>

inline std::string to_string(const Pythia8::Hist& h) {std::ostringstream s; s << h; return s.str(); }

// added signature for callbacks without using std::function
bool init(Pythia8::PythiaParallel&, bool (*)(Pythia8::Pythia*));
std::vector<long> run(Pythia8::PythiaParallel&, long nEvents, void (*)(Pythia8::Pythia*));
std::vector<long> run(Pythia8::PythiaParallel&, void (*)(Pythia8::Pythia*));

// user hooks
class Pythia8UserHooks : public Pythia8::UserHooks {
public:
    static auto make_shared() { return std::shared_ptr<Pythia8::UserHooks>(new Pythia8UserHooks); }
    Pythia8UserHooks() : Pythia8::UserHooks() {}
    virtual ~Pythia8UserHooks() {}
    void subEvent(const Pythia8::Event& event, bool isHardest = true) { Pythia8::UserHooks::subEvent(event, isHardest); }
    Pythia8::Event workEvent() const { return Pythia8::UserHooks::workEvent; }

    virtual bool initAfterBeams();
    virtual bool canModifySigma();
    virtual double multiplySigmaBy(const Pythia8::SigmaProcess* sigmaProcessPtr, const Pythia8::PhaseSpace* phaseSpacePtr, bool inEvent);
    virtual bool canBiasSelection();
    virtual double biasSelectionBy(const Pythia8::SigmaProcess* sigmaProcessPtr,const Pythia8::PhaseSpace* phaseSpacePtr, bool inEvent);
    virtual double biasedSelectionWeight();
    virtual bool canVetoProcessLevel();
    virtual bool doVetoProcessLevel(Pythia8::Event& );
    virtual bool canSetLowEnergySigma(int, int) const;
    virtual double doSetLowEnergySigma(int, int, double, double, double) const;
    virtual bool canVetoResonanceDecays();
    virtual bool doVetoResonanceDecays(Pythia8::Event& );
    virtual bool canVetoPT();
    virtual double scaleVetoPT();
    virtual bool doVetoPT( int , const Pythia8::Event& );
    virtual bool canVetoStep();
    virtual int numberVetoStep();
    virtual bool doVetoStep( int , int , int , const Pythia8::Event& );
    virtual bool canVetoMPIStep();
    virtual int numberVetoMPIStep();
    virtual bool doVetoMPIStep( int , const Pythia8::Event& );
    virtual bool canVetoPartonLevelEarly();
    virtual bool doVetoPartonLevelEarly( const Pythia8::Event& );
    virtual bool retryPartonLevel();
    virtual bool canVetoPartonLevel();
    virtual bool doVetoPartonLevel( const Pythia8::Event& );
    virtual bool canSetResonanceScale();
    virtual double scaleResonance( int, const Pythia8::Event& );
    virtual bool canVetoISREmission();
    virtual bool doVetoISREmission( int, const Pythia8::Event&, int );
    virtual bool canVetoFSREmission();
    virtual bool doVetoFSREmission( int, const Pythia8::Event&, int, bool = false );
    virtual bool canVetoMPIEmission();
    virtual bool doVetoMPIEmission( int, const Pythia8::Event &);
    virtual bool canReconnectResonanceSystems();
    virtual bool doReconnectResonanceSystems( int, Pythia8::Event &);
    virtual bool canChangeFragPar();
    virtual void setStringEnds( const Pythia8::StringEnd*, const Pythia8::StringEnd*, std::vector<int>);
    virtual bool doChangeFragPar( Pythia8::StringFlav*, Pythia8::StringZ*, Pythia8::StringPT*, int, double, std::vector<int>, const Pythia8::StringEnd* );
    virtual bool doVetoFragmentation( Pythia8::Particle, const Pythia8::StringEnd *);
    virtual bool doVetoFragmentation(Pythia8::Particle, Pythia8::Particle, const Pythia8::StringEnd*, const Pythia8::StringEnd* );
    virtual bool canVetoAfterHadronization();
    virtual bool doVetoAfterHadronization(const Pythia8::Event& );
    virtual bool canSetImpactParameter() const;
    virtual double doSetImpactParameter();
    virtual bool onEndHadronLevel(Pythia8::HadronLevel&, Pythia8::Event&);

    void set_initAfterBeams(void* data, bool (*func)(void*)) { initAfterBeams_f = func; initAfterBeams_d = data; }
    void set_canModifySigma(void* data, bool (*func)(void*)) { canModifySigma_f = func; canModifySigma_d = data; }    
    void set_multiplySigmaBy(void* data, double (*func)(void*, const Pythia8::SigmaProcess*, const Pythia8::PhaseSpace*, bool)) { multiplySigmaBy_f = func; multiplySigmaBy_d = data;}
    void set_canBiasSelection(void* data, bool (*func)(void*)) { canBiasSelection_f = func; canBiasSelection_d = data; }
    void set_biasSelectionBy(void* data, double (*func)(void*, const Pythia8::SigmaProcess*, const Pythia8::PhaseSpace*, bool)) { biasSelectionBy_f = func; biasSelectionBy_d = data; }
    void set_biasedSelectionWeight(void* data, double (*func)(void*)) { biasedSelectionWeight_f = func; biasedSelectionWeight_d = data; }
    void set_canVetoProcessLevel(void* data, bool (*func)(void*)) { canVetoProcessLevel_f = func; canVetoProcessLevel_d = data; }
    void set_doVetoProcessLevel(void* data, bool (*func)(void*, Pythia8::Event&)) { doVetoProcessLevel_f = func; doVetoProcessLevel_d = data; }
    void set_canSetLowEnergySigma(void* data, bool (*func)(void*, int, int)) { canSetLowEnergySigma_f = func; canSetLowEnergySigma_d = data; }
    void set_doSetLowEnergySigma(void* data, double (*func)(void*, int, int, double, double, double)) { doSetLowEnergySigma_f = func; doSetLowEnergySigma_d = data; }
    void set_canVetoResonanceDecays(void* data, bool (*func)(void*)) { canVetoResonanceDecays_f = func; canVetoResonanceDecays_d = data; }
    void set_doVetoResonanceDecays(void* data, bool (*func)(void*, Pythia8::Event&)) { doVetoResonanceDecays_f = func; doVetoResonanceDecays_d = data; }
    void set_canVetoPT(void* data, bool (*func)(void*)) { canVetoPT_f = func; canVetoPT_d = data; }
    void set_scaleVetoPT(void* data, double (*func)(void*)) { scaleVetoPT_f = func; scaleVetoPT_d = data; }
    void set_doVetoPT(void* data, bool (*func)(void*, int, const Pythia8::Event&)) { doVetoPT_f = func; doVetoPT_d = data; }
    void set_canVetoStep(void* data, bool (*func)(void*)) { canVetoStep_f = func; canVetoStep_d = data; }
    void set_numberVetoStep(void* data, int (*func)(void*)) { numberVetoStep_f = func; numberVetoStep_d = data; }
    void set_doVetoStep(void* data, bool (*func)(void*, int, int, int, const Pythia8::Event&)) { doVetoStep_f = func; doVetoStep_d = data; }
    void set_canVetoMPIStep(void* data, bool (*func)(void*)) { canVetoMPIStep_f = func; canVetoMPIStep_d = data; }
    void set_numberVetoMPIStep(void* data, int (*func)(void*)) { numberVetoMPIStep_f = func; numberVetoMPIStep_d = data; }
    void set_doVetoMPIStep(void* data, bool (*func)(void*, int, const Pythia8::Event&)) { doVetoMPIStep_f = func; doVetoMPIStep_d = data; }
    void set_canVetoPartonLevelEarly(void* data, bool (*func)(void*)) { canVetoPartonLevelEarly_f = func; canVetoPartonLevelEarly_d = data; }
    void set_doVetoPartonLevelEarly(void* data, bool (*func)(void*, const Pythia8::Event&)) { doVetoPartonLevelEarly_f = func; doVetoPartonLevelEarly_d = data; }
    void set_retryPartonLevel(void* data, bool (*func)(void*)) { retryPartonLevel_f = func; retryPartonLevel_d = data; }
    void set_canVetoPartonLevel(void* data, bool (*func)(void*)) { canVetoPartonLevel_f = func; canVetoPartonLevel_d = data; }
    void set_doVetoPartonLevel(void* data, bool (*func)(void*, const Pythia8::Event&)) { doVetoPartonLevel_f = func; doVetoPartonLevel_d = data; }
    void set_canSetResonanceScale(void* data, bool (*func)(void*)) { canSetResonanceScale_f = func; canSetResonanceScale_d = data; }
    void set_scaleResonance(void* data, double (*func)(void*, int, const Pythia8::Event&)) { scaleResonance_f = func; scaleResonance_d = data; }
    void set_canVetoISREmission(void* data, bool (*func)(void*)) { canVetoISREmission_f = func; canVetoISREmission_d = data; }
    void set_doVetoISREmission(void* data, bool (*func)(void*, int, const Pythia8::Event&, int)) { doVetoISREmission_f = func; doVetoISREmission_d = data; }
    void set_canVetoFSREmission(void* data, bool (*func)(void*)) { canVetoFSREmission_f = func; canVetoFSREmission_d = data; }
    void set_doVetoFSREmission(void* data, bool (*func)(void*, int, const Pythia8::Event&, int, bool)) { doVetoFSREmission_f = func; doVetoFSREmission_d = data; }
    void set_canVetoMPIEmission(void* data, bool (*func)(void*)) { canVetoMPIEmission_f = func; canVetoMPIEmission_d = data; }
    void set_doVetoMPIEmission(void* data, bool (*func)(void*, int, const Pythia8::Event&)) { doVetoMPIEmission_f = func; doVetoMPIEmission_d = data; }
    void set_canReconnectResonanceSystems(void* data, bool (*func)(void*)) { canReconnectResonanceSystems_f = func; canReconnectResonanceSystems_d = data; }
    void set_doReconnectResonanceSystems(void* data, bool (*func)(void*, int, Pythia8::Event&)) { doReconnectResonanceSystems_f = func; doReconnectResonanceSystems_d = data; }
    void set_canChangeFragPar(void* data, bool (*func)(void*)) { canChangeFragPar_f = func; canChangeFragPar_d = data; }
    void set_setStringEnds(void* data, void (*func)(void*, const Pythia8::StringEnd*, const Pythia8::StringEnd*, std::vector<int>)) { setStringEnds_f = func; setStringEnds_d = data; }
    void set_doChangeFragPar(void* data, bool (*func)(void*, Pythia8::StringFlav*, Pythia8::StringZ*, Pythia8::StringPT*, int, double, std::vector<int>, const Pythia8::StringEnd*)) { doChangeFragPar_f = func; doChangeFragPar_d = data; }
    void set_doVetoFragmentation1(void* data, bool (*func)(void*, Pythia8::Particle, const Pythia8::StringEnd*)) { doVetoFragmentation1_f = func; doVetoFragmentation1_d = data; }
    void set_doVetoFragmentation2(void* data, bool (*func)(void*, Pythia8::Particle, Pythia8::Particle, const Pythia8::StringEnd*, const Pythia8::StringEnd*)) { doVetoFragmentation2_f = func; doVetoFragmentation2_d = data; }
    void set_canVetoAfterHadronization(void* data, bool (*func)(void*)) { canVetoAfterHadronization_f = func; canVetoAfterHadronization_d = data; }
    void set_doVetoAfterHadronization(void* data, bool (*func)(void*, const Pythia8::Event&)) { doVetoAfterHadronization_f = func; doVetoAfterHadronization_d = data; }
    void set_canSetImpactParameter(void* data, bool (*func)(void*)) { canSetImpactParameter_f = func; canSetImpactParameter_d = data; }
    void set_doSetImpactParameter(void* data, double (*func)(void*)) { doSetImpactParameter_f = func; doSetImpactParameter_d = data; }
    void set_onEndHadronLevel(void* data, bool (*func)(void*, Pythia8::HadronLevel&, Pythia8::Event&)) { onEndHadronLevel_f = func; onEndHadronLevel_d = data; }
private:
    Pythia8UserHooks(const Pythia8UserHooks&);  // prevent copying
    Pythia8UserHooks& operator=(const Pythia8UserHooks&);  // prevent copying
    bool (*initAfterBeams_f)(void*) = nullptr;
    void *initAfterBeams_d = nullptr;
    bool (*canModifySigma_f)(void*) = nullptr;
    void *canModifySigma_d = nullptr;
    double (*multiplySigmaBy_f)(void*, const Pythia8::SigmaProcess*, const Pythia8::PhaseSpace*, bool) = nullptr;
    void *multiplySigmaBy_d = nullptr;
    bool (*canBiasSelection_f)(void*) = nullptr;
    void *canBiasSelection_d = nullptr;
    double (*biasSelectionBy_f)(void*, const Pythia8::SigmaProcess*, const Pythia8::PhaseSpace*, bool) = nullptr;
    void *biasSelectionBy_d = nullptr;
    double (*biasedSelectionWeight_f)(void*) = nullptr;
    void *biasedSelectionWeight_d = nullptr;
    bool (*canVetoProcessLevel_f)(void*) = nullptr;
    void *canVetoProcessLevel_d = nullptr;
    bool (*doVetoProcessLevel_f)(void*, Pythia8::Event&) = nullptr;
    void *doVetoProcessLevel_d = nullptr;
    bool (*canSetLowEnergySigma_f)(void*, int, int) = nullptr;
    void *canSetLowEnergySigma_d = nullptr;
    double (*doSetLowEnergySigma_f)(void*, int, int, double, double, double) = nullptr;
    void *doSetLowEnergySigma_d = nullptr;
    bool (*canVetoResonanceDecays_f)(void*) = nullptr;
    void *canVetoResonanceDecays_d = nullptr;
    bool (*doVetoResonanceDecays_f)(void*, Pythia8::Event&) = nullptr;
    void *doVetoResonanceDecays_d = nullptr;
    bool (*canVetoPT_f)(void*) = nullptr;
    void *canVetoPT_d = nullptr;
    double (*scaleVetoPT_f)(void*) = nullptr;
    void *scaleVetoPT_d = nullptr;
    bool (*doVetoPT_f)(void*, int, const Pythia8::Event&) = nullptr;
    void *doVetoPT_d = nullptr;
    bool (*canVetoStep_f)(void*) = nullptr;
    void *canVetoStep_d = nullptr;
    int (*numberVetoStep_f)(void*) = nullptr;
    void *numberVetoStep_d = nullptr;
    bool (*doVetoStep_f)(void*, int, int, int, const Pythia8::Event&) = nullptr;
    void *doVetoStep_d = nullptr;
    bool (*canVetoMPIStep_f)(void*) = nullptr;
    void *canVetoMPIStep_d = nullptr;
    int (*numberVetoMPIStep_f)(void*) = nullptr;
    void *numberVetoMPIStep_d = nullptr;
    bool (*doVetoMPIStep_f)(void*, int, const Pythia8::Event&) = nullptr;
    void *doVetoMPIStep_d = nullptr;
    bool (*canVetoPartonLevelEarly_f)(void*) = nullptr;
    void *canVetoPartonLevelEarly_d = nullptr;
    bool (*doVetoPartonLevelEarly_f)(void*, const Pythia8::Event&) = nullptr;
    void *doVetoPartonLevelEarly_d = nullptr;
    bool (*retryPartonLevel_f)(void*) = nullptr;
    void *retryPartonLevel_d = nullptr;
    bool (*canVetoPartonLevel_f)(void*) = nullptr;
    void *canVetoPartonLevel_d = nullptr;
    bool (*doVetoPartonLevel_f)(void*, const Pythia8::Event&) = nullptr;
    void *doVetoPartonLevel_d = nullptr;
    bool (*canSetResonanceScale_f)(void*) = nullptr;
    void *canSetResonanceScale_d = nullptr;
    double (*scaleResonance_f)(void*, int, const Pythia8::Event&) = nullptr;
    void *scaleResonance_d = nullptr;
    bool (*canVetoISREmission_f)(void*) = nullptr;
    void *canVetoISREmission_d = nullptr;
    bool (*doVetoISREmission_f)(void*, int, const Pythia8::Event&, int) = nullptr;
    void *doVetoISREmission_d = nullptr;
    bool (*canVetoFSREmission_f)(void*) = nullptr;
    void *canVetoFSREmission_d = nullptr;
    bool (*doVetoFSREmission_f)(void*, int, const Pythia8::Event&, int, bool) = nullptr;
    void *doVetoFSREmission_d = nullptr;
    bool (*canVetoMPIEmission_f)(void*) = nullptr;
    void *canVetoMPIEmission_d = nullptr;
    bool (*doVetoMPIEmission_f)(void*, int, const Pythia8::Event&) = nullptr;
    void *doVetoMPIEmission_d = nullptr;
    bool (*canReconnectResonanceSystems_f)(void*) = nullptr;
    void *canReconnectResonanceSystems_d = nullptr;
    bool (*doReconnectResonanceSystems_f)(void*, int, Pythia8::Event&) = nullptr;
    void *doReconnectResonanceSystems_d = nullptr;
    bool (*canChangeFragPar_f)(void*) = nullptr;
    void *canChangeFragPar_d = nullptr;
    void (*setStringEnds_f)(void*, const Pythia8::StringEnd*, const Pythia8::StringEnd*, std::vector<int>) = nullptr;
    void *setStringEnds_d = nullptr;
    bool (*doChangeFragPar_f)(void*, Pythia8::StringFlav*, Pythia8::StringZ*, Pythia8::StringPT*, int, double, std::vector<int>, const Pythia8::StringEnd*) = nullptr;
    void *doChangeFragPar_d = nullptr;
    bool (*doVetoFragmentation1_f)(void*, Pythia8::Particle, const Pythia8::StringEnd*) = nullptr;
    void *doVetoFragmentation1_d = nullptr;
    bool (*doVetoFragmentation2_f)(void*, Pythia8::Particle, Pythia8::Particle, const Pythia8::StringEnd*, const Pythia8::StringEnd*) = nullptr;
    void *doVetoFragmentation2_d = nullptr;
    bool (*canVetoAfterHadronization_f)(void*) = nullptr;
    void *canVetoAfterHadronization_d = nullptr;
    bool (*doVetoAfterHadronization_f)(void*, const Pythia8::Event&) = nullptr;
    void *doVetoAfterHadronization_d = nullptr;
    bool (*canSetImpactParameter_f)(void*) = nullptr;
    void *canSetImpactParameter_d = nullptr;
    double (*doSetImpactParameter_f)(void*) = nullptr;
    void *doSetImpactParameter_d = nullptr;
    bool (*onEndHadronLevel_f)(void*, Pythia8::HadronLevel&, Pythia8::Event&) = nullptr;
    void *onEndHadronLevel_d = nullptr;
};
