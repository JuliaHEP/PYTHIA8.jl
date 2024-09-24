// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::Nucleus2gamma> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::Nucleus2gamma> : std::false_type { };
template<> struct SuperType<Pythia8::Nucleus2gamma> { typedef Pythia8::PDF type; };
}

// Class generating the wrapper for type Pythia8::Nucleus2gamma
// signature to use in the veto file: Pythia8::Nucleus2gamma
struct JlPythia8_Nucleus2gamma: public Wrapper {

  JlPythia8_Nucleus2gamma(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::Nucleus2gamma (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:957:7
    jlcxx::TypeWrapper<Pythia8::Nucleus2gamma>  t = jlModule.add_type<Pythia8::Nucleus2gamma>("Pythia8!Nucleus2gamma",
      jlcxx::julia_base_type<Pythia8::PDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Nucleus2gamma>>(new jlcxx::TypeWrapper<Pythia8::Nucleus2gamma>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void Pythia8::Nucleus2gamma::Nucleus2gamma(int, double, double) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:962:3
    t.constructor<int, double, double>(/*finalize=*/true);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::Nucleus2gamma>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_Nucleus2gamma(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_Nucleus2gamma(module));
}
