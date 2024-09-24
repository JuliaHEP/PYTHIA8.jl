// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::RndmEngine> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::RndmEngine> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::RndmEngine
// signature to use in the veto file: Pythia8::RndmEngine
struct JlPythia8_RndmEngine: public Wrapper {

  JlPythia8_RndmEngine(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::RndmEngine (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:353:7
    jlcxx::TypeWrapper<Pythia8::RndmEngine>  t = jlModule.add_type<Pythia8::RndmEngine>("Pythia8!RndmEngine");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::RndmEngine>>(new jlcxx::TypeWrapper<Pythia8::RndmEngine>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for double Pythia8::RndmEngine::flat() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::RndmEngine::flat()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Basics.h:362:18
    t.method("flat", static_cast<double (Pythia8::RndmEngine::*)() >(&Pythia8::RndmEngine::flat));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::RndmEngine>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_RndmEngine(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_RndmEngine(module));
}
