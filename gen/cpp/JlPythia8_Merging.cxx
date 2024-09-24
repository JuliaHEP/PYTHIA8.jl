// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::Merging> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::Merging> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::Merging
// signature to use in the veto file: Pythia8::Merging
struct JlPythia8_Merging: public Wrapper {

  JlPythia8_Merging(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::Merging (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Merging.h:33:7
    jlcxx::TypeWrapper<Pythia8::Merging>  t = jlModule.add_type<Pythia8::Merging>("Pythia8!Merging");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Merging>>(new jlcxx::TypeWrapper<Pythia8::Merging>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for void Pythia8::Merging::initPtrs(Pythia8::MergingHooksPtr, Pythia8::PartonLevel *) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Merging::initPtrs(Pythia8::MergingHooksPtr, Pythia8::PartonLevel *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Merging.h:45:8
    t.method("initPtrs", static_cast<void (Pythia8::Merging::*)(Pythia8::MergingHooksPtr, Pythia8::PartonLevel *) >(&Pythia8::Merging::initPtrs));

    DEBUG_MSG("Adding wrapper for void Pythia8::Merging::init() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Merging::init()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Merging.h:52:16
    t.method("init", static_cast<void (Pythia8::Merging::*)() >(&Pythia8::Merging::init));

    DEBUG_MSG("Adding wrapper for void Pythia8::Merging::statistics() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Merging::statistics()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Merging.h:55:16
    t.method("statistics", static_cast<void (Pythia8::Merging::*)() >(&Pythia8::Merging::statistics));

    DEBUG_MSG("Adding wrapper for int Pythia8::Merging::mergeProcess(Pythia8::Event &) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::Merging::mergeProcess(Pythia8::Event &)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Merging.h:58:15
    t.method("mergeProcess", static_cast<int (Pythia8::Merging::*)(Pythia8::Event &) >(&Pythia8::Merging::mergeProcess));

    DEBUG_MSG("Adding wrapper for double Pythia8::Merging::generateSingleSudakov(double, double, double, int, int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Merging::generateSingleSudakov(double, double, double, int, int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Merging.h:71:18
    t.method("generateSingleSudakov", static_cast<double (Pythia8::Merging::*)(double, double, double, int, int, double, double) >(&Pythia8::Merging::generateSingleSudakov));
    t.method("generateSingleSudakov", [](Pythia8::Merging& a, double arg0, double arg1, double arg2, int arg3, int arg4)->double { return a.generateSingleSudakov(arg0, arg1, arg2, arg3, arg4); });
    t.method("generateSingleSudakov", [](Pythia8::Merging& a, double arg0, double arg1, double arg2, int arg3, int arg4, double arg5)->double { return a.generateSingleSudakov(arg0, arg1, arg2, arg3, arg4, arg5); });
    t.method("generateSingleSudakov", [](Pythia8::Merging* a, double arg0, double arg1, double arg2, int arg3, int arg4)->double { return a->generateSingleSudakov(arg0, arg1, arg2, arg3, arg4); });
    t.method("generateSingleSudakov", [](Pythia8::Merging* a, double arg0, double arg1, double arg2, int arg3, int arg4, double arg5)->double { return a->generateSingleSudakov(arg0, arg1, arg2, arg3, arg4, arg5); });

    DEBUG_MSG("Adding wrapper for void Pythia8::Merging::setLHAPtr(Pythia8::LHEF3FromPythia8Ptr) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Merging::setLHAPtr(Pythia8::LHEF3FromPythia8Ptr)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Merging.h:75:8
    t.method("setLHAPtr", static_cast<void (Pythia8::Merging::*)(Pythia8::LHEF3FromPythia8Ptr) >(&Pythia8::Merging::setLHAPtr));

    DEBUG_MSG("Adding lhaPtr methods  to provide read access to the field lhaPtr (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Merging.h:74:23
    // signature to use in the veto list: Pythia8::Merging::lhaPtr
    t.method("lhaPtr", [](const Pythia8::Merging& a) -> const Pythia8::LHEF3FromPythia8Ptr& { return a.lhaPtr; });
    t.method("lhaPtr", [](Pythia8::Merging& a) -> Pythia8::LHEF3FromPythia8Ptr& { return a.lhaPtr; });
    t.method("lhaPtr", [](const Pythia8::Merging* a) -> const Pythia8::LHEF3FromPythia8Ptr& { return a->lhaPtr; });
    t.method("lhaPtr", [](Pythia8::Merging* a) -> Pythia8::LHEF3FromPythia8Ptr& { return a->lhaPtr; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Merging.h:74:23
    // signature to use in the veto list: Pythia8::Merging::lhaPtr
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding lhaPtr! methods to provide write access to the field lhaPtr (" __HERE__ ")");
    t.method("lhaPtr!", [](Pythia8::Merging& a, const Pythia8::LHEF3FromPythia8Ptr& val) -> Pythia8::LHEF3FromPythia8Ptr& { return a.lhaPtr = val; });

    DEBUG_MSG("Adding lhaPtr! methods to provide write access to the field lhaPtr (" __HERE__ ")");
    t.method("lhaPtr!", [](Pythia8::Merging* a, const Pythia8::LHEF3FromPythia8Ptr& val) -> Pythia8::LHEF3FromPythia8Ptr& { return a->lhaPtr = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Merging>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_Merging(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_Merging(module));
}
