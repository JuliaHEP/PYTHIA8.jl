// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::ParticleData> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::ParticleData> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::ParticleData
// signature to use in the veto file: Pythia8::ParticleData
struct JlPythia8_ParticleData: public Wrapper {

  JlPythia8_ParticleData(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::ParticleData (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/ParticleData.h:422:7
    jlcxx::TypeWrapper<Pythia8::ParticleData>  t = jlModule.add_type<Pythia8::ParticleData>("Pythia8!ParticleData");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ParticleData>>(new jlcxx::TypeWrapper<Pythia8::ParticleData>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::ParticleData>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_ParticleData(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_ParticleData(module));
}