// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::EPAexternal> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::EPAexternal> : std::false_type { };
template<> struct SuperType<Pythia8::EPAexternal> { typedef Pythia8::PDF type; };
}

// Class generating the wrapper for type Pythia8::EPAexternal
// signature to use in the veto file: Pythia8::EPAexternal
struct JlPythia8_EPAexternal: public Wrapper {

  JlPythia8_EPAexternal(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::EPAexternal (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:989:7
    jlcxx::TypeWrapper<Pythia8::EPAexternal>  t = jlModule.add_type<Pythia8::EPAexternal>("Pythia8!EPAexternal",
      jlcxx::julia_base_type<Pythia8::PDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::EPAexternal>>(new jlcxx::TypeWrapper<Pythia8::EPAexternal>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void Pythia8::EPAexternal::EPAexternal(int, double, Pythia8::PDFPtr, Pythia8::PDFPtr, Pythia8::Info *, Pythia8::Logger *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:994:3
    t.constructor<int, double, Pythia8::PDFPtr, Pythia8::PDFPtr, Pythia8::Info *>(/*finalize=*/true);
    t.constructor<int, double, Pythia8::PDFPtr, Pythia8::PDFPtr, Pythia8::Info *, Pythia8::Logger *>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void Pythia8::EPAexternal::xfUpdate(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::EPAexternal::xfUpdate(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1004:8
    t.method("xfUpdate", static_cast<void (Pythia8::EPAexternal::*)(int, double, double) >(&Pythia8::EPAexternal::xfUpdate));

    DEBUG_MSG("Adding wrapper for double Pythia8::EPAexternal::xfFlux(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::EPAexternal::xfFlux(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1007:10
    t.method("xfFlux", static_cast<double (Pythia8::EPAexternal::*)(int, double, double) >(&Pythia8::EPAexternal::xfFlux));
    t.method("xfFlux", [](Pythia8::EPAexternal& a, int arg0, double arg1)->double { return a.xfFlux(arg0, arg1); });
    t.method("xfFlux", [](Pythia8::EPAexternal* a, int arg0, double arg1)->double { return a->xfFlux(arg0, arg1); });

    DEBUG_MSG("Adding wrapper for double Pythia8::EPAexternal::xfGamma(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::EPAexternal::xfGamma(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1008:10
    t.method("xfGamma", static_cast<double (Pythia8::EPAexternal::*)(int, double, double) >(&Pythia8::EPAexternal::xfGamma));

    DEBUG_MSG("Adding wrapper for double Pythia8::EPAexternal::xfApprox(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::EPAexternal::xfApprox(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1009:10
    t.method("xfApprox", static_cast<double (Pythia8::EPAexternal::*)(int, double, double) >(&Pythia8::EPAexternal::xfApprox));

    DEBUG_MSG("Adding wrapper for double Pythia8::EPAexternal::intFluxApprox() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::EPAexternal::intFluxApprox()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1010:10
    t.method("intFluxApprox", static_cast<double (Pythia8::EPAexternal::*)() >(&Pythia8::EPAexternal::intFluxApprox));

    DEBUG_MSG("Adding wrapper for bool Pythia8::EPAexternal::hasApproxGammaFlux() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::EPAexternal::hasApproxGammaFlux()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1013:8
    t.method("hasApproxGammaFlux", static_cast<bool (Pythia8::EPAexternal::*)() >(&Pythia8::EPAexternal::hasApproxGammaFlux));

    DEBUG_MSG("Adding wrapper for double Pythia8::EPAexternal::getXmin() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::EPAexternal::getXmin()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1016:10
    t.method("getXmin", static_cast<double (Pythia8::EPAexternal::*)() >(&Pythia8::EPAexternal::getXmin));

    DEBUG_MSG("Adding wrapper for double Pythia8::EPAexternal::getXhadr() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::EPAexternal::getXhadr()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1017:10
    t.method("getXhadr", static_cast<double (Pythia8::EPAexternal::*)() >(&Pythia8::EPAexternal::getXhadr));

    DEBUG_MSG("Adding wrapper for double Pythia8::EPAexternal::sampleXgamma(double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::EPAexternal::sampleXgamma(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1020:10
    t.method("sampleXgamma", static_cast<double (Pythia8::EPAexternal::*)(double) >(&Pythia8::EPAexternal::sampleXgamma));

    DEBUG_MSG("Adding wrapper for double Pythia8::EPAexternal::sampleQ2gamma(double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::EPAexternal::sampleQ2gamma(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:1021:10
    t.method("sampleQ2gamma", static_cast<double (Pythia8::EPAexternal::*)(double) >(&Pythia8::EPAexternal::sampleQ2gamma));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::EPAexternal>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_EPAexternal(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_EPAexternal(module));
}
