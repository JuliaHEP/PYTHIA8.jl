// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::Rndm> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::Rndm> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::Rndm
// signature to use in the veto file: Pythia8::Rndm
struct JlPythia8_Rndm: public Wrapper {

  JlPythia8_Rndm(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::Rndm (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:386:7
    jlcxx::TypeWrapper<Pythia8::Rndm>  t = jlModule.add_type<Pythia8::Rndm>("Pythia8!Rndm");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Rndm>>(new jlcxx::TypeWrapper<Pythia8::Rndm>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::Rndm::Rndm(int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:392:3
    t.constructor<int>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for bool Pythia8::Rndm::rndmEnginePtr(Pythia8::RndmEnginePtr) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::Rndm::rndmEnginePtr(Pythia8::RndmEnginePtr)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:396:8
    t.method("rndmEnginePtr", static_cast<bool (Pythia8::Rndm::*)(Pythia8::RndmEnginePtr) >(&Pythia8::Rndm::rndmEnginePtr));

    DEBUG_MSG("Adding wrapper for void Pythia8::Rndm::init(int) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Rndm::init(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:399:8
    t.method("init", static_cast<void (Pythia8::Rndm::*)(int) >(&Pythia8::Rndm::init));
    t.method("init", [](Pythia8::Rndm& a)->void { a.init(); });
    t.method("init", [](Pythia8::Rndm* a)->void { a->init(); });

    DEBUG_MSG("Adding wrapper for double Pythia8::Rndm::flat() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Rndm::flat()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:402:10
    t.method("flat", static_cast<double (Pythia8::Rndm::*)() >(&Pythia8::Rndm::flat));

    DEBUG_MSG("Adding wrapper for double Pythia8::Rndm::exp() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Rndm::exp()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:405:10
    t.method("exp", static_cast<double (Pythia8::Rndm::*)() >(&Pythia8::Rndm::exp));

    DEBUG_MSG("Adding wrapper for double Pythia8::Rndm::xexp() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Rndm::xexp()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:408:10
    t.method("xexp", static_cast<double (Pythia8::Rndm::*)() >(&Pythia8::Rndm::xexp));

    DEBUG_MSG("Adding wrapper for double Pythia8::Rndm::gauss() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Rndm::gauss()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:411:10
    t.method("gauss", static_cast<double (Pythia8::Rndm::*)() >(&Pythia8::Rndm::gauss));

    DEBUG_MSG("Adding wrapper for double Pythia8::Rndm::gamma(double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Rndm::gamma(double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:419:10
    t.method("gamma", static_cast<double (Pythia8::Rndm::*)(double, double) >(&Pythia8::Rndm::gamma));

    DEBUG_MSG("Adding wrapper for int Pythia8::Rndm::pick(const std::vector<double> &) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::Rndm::pick(const std::vector<double> &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:425:7
    t.method("pick", static_cast<int (Pythia8::Rndm::*)(const std::vector<double> &) >(&Pythia8::Rndm::pick));

    DEBUG_MSG("Adding wrapper for bool Pythia8::Rndm::dumpState(std::string) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::Rndm::dumpState(std::string)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:431:8
    t.method("dumpState", static_cast<bool (Pythia8::Rndm::*)(std::string) >(&Pythia8::Rndm::dumpState));

    DEBUG_MSG("Adding wrapper for bool Pythia8::Rndm::readState(std::string) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::Rndm::readState(std::string)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:432:8
    t.method("readState", static_cast<bool (Pythia8::Rndm::*)(std::string) >(&Pythia8::Rndm::readState));

    DEBUG_MSG("Adding wrapper for Pythia8::RndmState Pythia8::Rndm::getState() (" __HERE__ ")");
    // signature to use in the veto list: Pythia8::RndmState Pythia8::Rndm::getState()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:435:13
    t.method("getState", static_cast<Pythia8::RndmState (Pythia8::Rndm::*)()  const>(&Pythia8::Rndm::getState));

    DEBUG_MSG("Adding wrapper for void Pythia8::Rndm::setState(const Pythia8::RndmState &) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Rndm::setState(const Pythia8::RndmState &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:436:8
    t.method("setState", static_cast<void (Pythia8::Rndm::*)(const Pythia8::RndmState &) >(&Pythia8::Rndm::setState));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Rndm>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_Rndm(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_Rndm(module));
}
