// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::ProtonPoint> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::ProtonPoint> : std::false_type { };
template<> struct SuperType<Pythia8::ProtonPoint> { typedef Pythia8::PDF type; };
}

// Class generating the wrapper for type Pythia8::ProtonPoint
// signature to use in the veto file: Pythia8::ProtonPoint
struct JlPythia8_ProtonPoint: public Wrapper {

  JlPythia8_ProtonPoint(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::ProtonPoint (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:468:7
    jlcxx::TypeWrapper<Pythia8::ProtonPoint>  t = jlModule.add_type<Pythia8::ProtonPoint>("Pythia8!ProtonPoint",
      jlcxx::julia_base_type<Pythia8::PDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ProtonPoint>>(new jlcxx::TypeWrapper<Pythia8::ProtonPoint>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::ProtonPoint::ProtonPoint(int, Pythia8::Logger *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:473:3
    t.constructor<int>(/*finalize=*/true);
    t.constructor<int, Pythia8::Logger *>(/*finalize=*/true);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ProtonPoint>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_ProtonPoint(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_ProtonPoint(module));
}