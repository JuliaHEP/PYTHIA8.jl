// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::PomHISASD> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::PomHISASD> : std::false_type { };
template<> struct SuperType<Pythia8::PomHISASD> { typedef Pythia8::PDF type; };
}

// Class generating the wrapper for type Pythia8::PomHISASD
// signature to use in the veto file: Pythia8::PomHISASD
struct JlPythia8_PomHISASD: public Wrapper {

  JlPythia8_PomHISASD(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::PomHISASD (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:685:7
    jlcxx::TypeWrapper<Pythia8::PomHISASD>  t = jlModule.add_type<Pythia8::PomHISASD>("Pythia8!PomHISASD",
      jlcxx::julia_base_type<Pythia8::PDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PomHISASD>>(new jlcxx::TypeWrapper<Pythia8::PomHISASD>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void Pythia8::PomHISASD::PomHISASD(int, Pythia8::PDFPtr, Pythia8::Settings &, Pythia8::Logger *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:690:3
    t.constructor<int, Pythia8::PDFPtr, Pythia8::Settings &>(/*finalize=*/true);
    t.constructor<int, Pythia8::PDFPtr, Pythia8::Settings &, Pythia8::Logger *>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void Pythia8::PomHISASD::xPom(double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PomHISASD::xPom(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:704:8
    t.method("xPom", static_cast<void (Pythia8::PomHISASD::*)(double) >(&Pythia8::PomHISASD::xPom));
    t.method("xPom", [](Pythia8::PomHISASD& a)->void { a.xPom(); });
    t.method("xPom", [](Pythia8::PomHISASD* a)->void { a->xPom(); });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PomHISASD>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_PomHISASD(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_PomHISASD(module));
}
