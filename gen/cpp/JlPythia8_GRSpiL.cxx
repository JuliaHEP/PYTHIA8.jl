// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::GRSpiL> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::GRSpiL> : std::false_type { };
template<> struct SuperType<Pythia8::GRSpiL> { typedef Pythia8::PDF type; };
}

// Class generating the wrapper for type Pythia8::GRSpiL
// signature to use in the veto file: Pythia8::GRSpiL
struct JlPythia8_GRSpiL: public Wrapper {

  JlPythia8_GRSpiL(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::GRSpiL (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:523:7
    jlcxx::TypeWrapper<Pythia8::GRSpiL>  t = jlModule.add_type<Pythia8::GRSpiL>("Pythia8!GRSpiL",
      jlcxx::julia_base_type<Pythia8::PDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::GRSpiL>>(new jlcxx::TypeWrapper<Pythia8::GRSpiL>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::GRSpiL::GRSpiL(int, double) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:528:3
    t.constructor<int>(/*finalize=*/true);
    t.constructor<int, double>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void Pythia8::GRSpiL::setVMDscale(double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::GRSpiL::setVMDscale(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:532:8
    t.method("setVMDscale", static_cast<void (Pythia8::GRSpiL::*)(double) >(&Pythia8::GRSpiL::setVMDscale));
    t.method("setVMDscale", [](Pythia8::GRSpiL& a)->void { a.setVMDscale(); });
    t.method("setVMDscale", [](Pythia8::GRSpiL* a)->void { a->setVMDscale(); });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::GRSpiL>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_GRSpiL(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_GRSpiL(module));
}
