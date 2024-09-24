// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::Sigma2Process> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::Sigma2Process> : std::false_type { };
template<> struct SuperType<Pythia8::Sigma2Process> { typedef Pythia8::SigmaProcess type; };
}

// Class generating the wrapper for type Pythia8::Sigma2Process
// signature to use in the veto file: Pythia8::Sigma2Process
struct JlPythia8_Sigma2Process: public Wrapper {

  JlPythia8_Sigma2Process(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::Sigma2Process (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:479:7
    jlcxx::TypeWrapper<Pythia8::Sigma2Process>  t = jlModule.add_type<Pythia8::Sigma2Process>("Pythia8!Sigma2Process",
      jlcxx::julia_base_type<Pythia8::SigmaProcess>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Sigma2Process>>(new jlcxx::TypeWrapper<Pythia8::Sigma2Process>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;

    DEBUG_MSG("Adding wrapper for int Pythia8::Sigma2Process::nFinal() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::Sigma2Process::nFinal()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:487:18
    t.method("nFinal", static_cast<int (Pythia8::Sigma2Process::*)()  const>(&Pythia8::Sigma2Process::nFinal));

    DEBUG_MSG("Adding wrapper for void Pythia8::Sigma2Process::set2Kin(double, double, double, double, double, double, double, double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Sigma2Process::set2Kin(double, double, double, double, double, double, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:490:18
    t.method("set2Kin", static_cast<void (Pythia8::Sigma2Process::*)(double, double, double, double, double, double, double, double) >(&Pythia8::Sigma2Process::set2Kin));

    DEBUG_MSG("Adding wrapper for void Pythia8::Sigma2Process::set2KinMPI(double, double, double, double, double, double, double, bool, double, double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::Sigma2Process::set2KinMPI(double, double, double, double, double, double, double, bool, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:496:18
    t.method("set2KinMPI", static_cast<void (Pythia8::Sigma2Process::*)(double, double, double, double, double, double, double, bool, double, double) >(&Pythia8::Sigma2Process::set2KinMPI));

    DEBUG_MSG("Adding wrapper for double Pythia8::Sigma2Process::sigmaHat() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Sigma2Process::sigmaHat()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:503:18
    t.method("sigmaHat", static_cast<double (Pythia8::Sigma2Process::*)() >(&Pythia8::Sigma2Process::sigmaHat));

    DEBUG_MSG("Adding wrapper for double Pythia8::Sigma2Process::sigmaHatWrap(int, int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::Sigma2Process::sigmaHatWrap(int, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:508:18
    t.method("sigmaHatWrap", static_cast<double (Pythia8::Sigma2Process::*)(int, int) >(&Pythia8::Sigma2Process::sigmaHatWrap));
    t.method("sigmaHatWrap", [](Pythia8::Sigma2Process& a)->double { return a.sigmaHatWrap(); });
    t.method("sigmaHatWrap", [](Pythia8::Sigma2Process& a, int arg0)->double { return a.sigmaHatWrap(arg0); });
    t.method("sigmaHatWrap", [](Pythia8::Sigma2Process* a)->double { return a->sigmaHatWrap(); });
    t.method("sigmaHatWrap", [](Pythia8::Sigma2Process* a, int arg0)->double { return a->sigmaHatWrap(arg0); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::Sigma2Process::final2KinMPI(int, int, Pythia8::Vec4, Pythia8::Vec4, double, double) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::Sigma2Process::final2KinMPI(int, int, Pythia8::Vec4, Pythia8::Vec4, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/SigmaProcess.h:515:18
    t.method("final2KinMPI", static_cast<bool (Pythia8::Sigma2Process::*)(int, int, Pythia8::Vec4, Pythia8::Vec4, double, double) >(&Pythia8::Sigma2Process::final2KinMPI));
    t.method("final2KinMPI", [](Pythia8::Sigma2Process& a)->bool { return a.final2KinMPI(); });
    t.method("final2KinMPI", [](Pythia8::Sigma2Process& a, int arg0)->bool { return a.final2KinMPI(arg0); });
    t.method("final2KinMPI", [](Pythia8::Sigma2Process& a, int arg0, int arg1)->bool { return a.final2KinMPI(arg0, arg1); });
    t.method("final2KinMPI", [](Pythia8::Sigma2Process& a, int arg0, int arg1, Pythia8::Vec4 arg2)->bool { return a.final2KinMPI(arg0, arg1, arg2); });
    t.method("final2KinMPI", [](Pythia8::Sigma2Process& a, int arg0, int arg1, Pythia8::Vec4 arg2, Pythia8::Vec4 arg3)->bool { return a.final2KinMPI(arg0, arg1, arg2, arg3); });
    t.method("final2KinMPI", [](Pythia8::Sigma2Process& a, int arg0, int arg1, Pythia8::Vec4 arg2, Pythia8::Vec4 arg3, double arg4)->bool { return a.final2KinMPI(arg0, arg1, arg2, arg3, arg4); });
    t.method("final2KinMPI", [](Pythia8::Sigma2Process* a)->bool { return a->final2KinMPI(); });
    t.method("final2KinMPI", [](Pythia8::Sigma2Process* a, int arg0)->bool { return a->final2KinMPI(arg0); });
    t.method("final2KinMPI", [](Pythia8::Sigma2Process* a, int arg0, int arg1)->bool { return a->final2KinMPI(arg0, arg1); });
    t.method("final2KinMPI", [](Pythia8::Sigma2Process* a, int arg0, int arg1, Pythia8::Vec4 arg2)->bool { return a->final2KinMPI(arg0, arg1, arg2); });
    t.method("final2KinMPI", [](Pythia8::Sigma2Process* a, int arg0, int arg1, Pythia8::Vec4 arg2, Pythia8::Vec4 arg3)->bool { return a->final2KinMPI(arg0, arg1, arg2, arg3); });
    t.method("final2KinMPI", [](Pythia8::Sigma2Process* a, int arg0, int arg1, Pythia8::Vec4 arg2, Pythia8::Vec4 arg3, double arg4)->bool { return a->final2KinMPI(arg0, arg1, arg2, arg3, arg4); });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Sigma2Process>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_Sigma2Process(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_Sigma2Process(module));
}
