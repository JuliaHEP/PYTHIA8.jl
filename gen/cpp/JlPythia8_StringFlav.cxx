// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::StringFlav> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::StringFlav> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::StringFlav
// signature to use in the veto file: Pythia8::StringFlav
struct JlPythia8_StringFlav: public Wrapper {

  JlPythia8_StringFlav(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::StringFlav (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/FragmentationFlavZpT.h:84:7
    jlcxx::TypeWrapper<Pythia8::StringFlav>  t = jlModule.add_type<Pythia8::StringFlav>("Pythia8!StringFlav");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::StringFlav>>(new jlcxx::TypeWrapper<Pythia8::StringFlav>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::StringFlav>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_StringFlav(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_StringFlav(module));
}
