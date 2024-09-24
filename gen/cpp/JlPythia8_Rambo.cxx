// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::Rambo> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::Rambo> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::Rambo
// signature to use in the veto file: Pythia8::Rambo
struct JlPythia8_Rambo: public Wrapper {

  JlPythia8_Rambo(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::Rambo (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:636:7
    jlcxx::TypeWrapper<Pythia8::Rambo>  t = jlModule.add_type<Pythia8::Rambo>("Pythia8!Rambo");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Rambo>>(new jlcxx::TypeWrapper<Pythia8::Rambo>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::Rambo::Rambo(Pythia8::Rndm *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:644:3
    t.constructor<Pythia8::Rndm *>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void Pythia8::Rambo::initPtr(Pythia8::Rndm *) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Rambo::initPtr(Pythia8::Rndm *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:650:8
    t.method("initPtr", static_cast<void (Pythia8::Rambo::*)(Pythia8::Rndm *) >(&Pythia8::Rambo::initPtr));

    DEBUG_MSG("Adding wrapper for double Pythia8::Rambo::genPoint(double, int, std::vector<Pythia8::Vec4> &) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Rambo::genPoint(double, int, std::vector<Pythia8::Vec4> &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:654:10
    t.method("genPoint", static_cast<double (Pythia8::Rambo::*)(double, int, std::vector<Pythia8::Vec4> &) >(&Pythia8::Rambo::genPoint));

    DEBUG_MSG("Adding wrapper for double Pythia8::Rambo::genPoint(double, std::vector<double>, std::vector<Pythia8::Vec4> &) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Rambo::genPoint(double, std::vector<double>, std::vector<Pythia8::Vec4> &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PhaseSpace.h:659:10
    t.method("genPoint", static_cast<double (Pythia8::Rambo::*)(double, std::vector<double>, std::vector<Pythia8::Vec4> &) >(&Pythia8::Rambo::genPoint));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Rambo>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_Rambo(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_Rambo(module));
}
