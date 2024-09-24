// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::LHEF3FromPythia8> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::LHEF3FromPythia8> : std::false_type { };
template<> struct SuperType<Pythia8::LHEF3FromPythia8> { typedef Pythia8::LHAup type; };
}

// Class generating the wrapper for type Pythia8::LHEF3FromPythia8
// signature to use in the veto file: Pythia8::LHEF3FromPythia8
struct JlPythia8_LHEF3FromPythia8: public Wrapper {

  JlPythia8_LHEF3FromPythia8(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::LHEF3FromPythia8 (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:519:7
    jlcxx::TypeWrapper<Pythia8::LHEF3FromPythia8>  t = jlModule.add_type<Pythia8::LHEF3FromPythia8>("Pythia8!LHEF3FromPythia8",
      jlcxx::julia_base_type<Pythia8::LHAup>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::LHEF3FromPythia8>>(new jlcxx::TypeWrapper<Pythia8::LHEF3FromPythia8>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void Pythia8::LHEF3FromPythia8::LHEF3FromPythia8(Pythia8::Event *, const Pythia8::Info *, int, bool) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:524:3
    t.constructor<Pythia8::Event *, const Pythia8::Info *>(/*finalize=*/true);
    t.constructor<Pythia8::Event *, const Pythia8::Info *, int>(/*finalize=*/true);
    t.constructor<Pythia8::Event *, const Pythia8::Info *, int, bool>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHEF3FromPythia8::setInit() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHEF3FromPythia8::setInit()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:532:8
    t.method("setInit", static_cast<bool (Pythia8::LHEF3FromPythia8::*)() >(&Pythia8::LHEF3FromPythia8::setInit));

    DEBUG_MSG("Adding wrapper for void Pythia8::LHEF3FromPythia8::setEventPtr(Pythia8::Event *) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::LHEF3FromPythia8::setEventPtr(Pythia8::Event *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:535:8
    t.method("setEventPtr", static_cast<void (Pythia8::LHEF3FromPythia8::*)(Pythia8::Event *) >(&Pythia8::LHEF3FromPythia8::setEventPtr));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHEF3FromPythia8::setEvent(int) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHEF3FromPythia8::setEvent(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:536:8
    t.method("setEvent", static_cast<bool (Pythia8::LHEF3FromPythia8::*)(int) >(&Pythia8::LHEF3FromPythia8::setEvent));
    t.method("setEvent", [](Pythia8::LHEF3FromPythia8& a)->bool { return a.setEvent(); });
    t.method("setEvent", [](Pythia8::LHEF3FromPythia8* a)->bool { return a->setEvent(); });

    DEBUG_MSG("Adding wrapper for std::string Pythia8::LHEF3FromPythia8::getEventString() (" __HERE__ ")");
    // signature to use in the veto list: std::string Pythia8::LHEF3FromPythia8::getEventString()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:537:10
    t.method("getEventString", static_cast<std::string (Pythia8::LHEF3FromPythia8::*)() >(&Pythia8::LHEF3FromPythia8::getEventString));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHEF3FromPythia8::openLHEF(std::string) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHEF3FromPythia8::openLHEF(std::string)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:540:8
    t.method("openLHEF", static_cast<bool (Pythia8::LHEF3FromPythia8::*)(std::string) >(&Pythia8::LHEF3FromPythia8::openLHEF));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHEF3FromPythia8::closeLHEF(bool) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHEF3FromPythia8::closeLHEF(bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:543:8
    t.method("closeLHEF", static_cast<bool (Pythia8::LHEF3FromPythia8::*)(bool) >(&Pythia8::LHEF3FromPythia8::closeLHEF));
    t.method("closeLHEF", [](Pythia8::LHEF3FromPythia8& a)->bool { return a.closeLHEF(); });
    t.method("closeLHEF", [](Pythia8::LHEF3FromPythia8* a)->bool { return a->closeLHEF(); });

    DEBUG_MSG("Adding heprup methods  to provide read access to the field heprup (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:546:10
    // signature to use in the veto list: Pythia8::LHEF3FromPythia8::heprup
    t.method("heprup", [](const Pythia8::LHEF3FromPythia8& a) -> const Pythia8::HEPRUP& { return a.heprup; });
    t.method("heprup", [](Pythia8::LHEF3FromPythia8& a) -> Pythia8::HEPRUP& { return a.heprup; });
    t.method("heprup", [](const Pythia8::LHEF3FromPythia8* a) -> const Pythia8::HEPRUP& { return a->heprup; });
    t.method("heprup", [](Pythia8::LHEF3FromPythia8* a) -> Pythia8::HEPRUP& { return a->heprup; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:546:10
    // signature to use in the veto list: Pythia8::LHEF3FromPythia8::heprup
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding heprup! methods to provide write access to the field heprup (" __HERE__ ")");
    t.method("heprup!", [](Pythia8::LHEF3FromPythia8& a, const Pythia8::HEPRUP& val) -> Pythia8::HEPRUP& { return a.heprup = val; });

    DEBUG_MSG("Adding heprup! methods to provide write access to the field heprup (" __HERE__ ")");
    t.method("heprup!", [](Pythia8::LHEF3FromPythia8* a, const Pythia8::HEPRUP& val) -> Pythia8::HEPRUP& { return a->heprup = val; });

    DEBUG_MSG("Adding hepeup methods  to provide read access to the field hepeup (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:547:10
    // signature to use in the veto list: Pythia8::LHEF3FromPythia8::hepeup
    t.method("hepeup", [](const Pythia8::LHEF3FromPythia8& a) -> const Pythia8::HEPEUP& { return a.hepeup; });
    t.method("hepeup", [](Pythia8::LHEF3FromPythia8& a) -> Pythia8::HEPEUP& { return a.hepeup; });
    t.method("hepeup", [](const Pythia8::LHEF3FromPythia8* a) -> const Pythia8::HEPEUP& { return a->hepeup; });
    t.method("hepeup", [](Pythia8::LHEF3FromPythia8* a) -> Pythia8::HEPEUP& { return a->hepeup; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:547:10
    // signature to use in the veto list: Pythia8::LHEF3FromPythia8::hepeup
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding hepeup! methods to provide write access to the field hepeup (" __HERE__ ")");
    t.method("hepeup!", [](Pythia8::LHEF3FromPythia8& a, const Pythia8::HEPEUP& val) -> Pythia8::HEPEUP& { return a.hepeup = val; });

    DEBUG_MSG("Adding hepeup! methods to provide write access to the field hepeup (" __HERE__ ")");
    t.method("hepeup!", [](Pythia8::LHEF3FromPythia8* a, const Pythia8::HEPEUP& val) -> Pythia8::HEPEUP& { return a->hepeup = val; });

    DEBUG_MSG("Adding eventPtr methods  to provide read access to the field eventPtr (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:550:10
    // signature to use in the veto list: Pythia8::LHEF3FromPythia8::eventPtr
    t.method("eventPtr", [](const Pythia8::LHEF3FromPythia8& a) -> Pythia8::Event * { return a.eventPtr; });
    t.method("eventPtr", [](Pythia8::LHEF3FromPythia8& a) -> Pythia8::Event * { return a.eventPtr; });
    t.method("eventPtr", [](const Pythia8::LHEF3FromPythia8* a) -> Pythia8::Event * { return a->eventPtr; });
    t.method("eventPtr", [](Pythia8::LHEF3FromPythia8* a) -> Pythia8::Event * { return a->eventPtr; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:550:10
    // signature to use in the veto list: Pythia8::LHEF3FromPythia8::eventPtr
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding eventPtr! methods to provide write access to the field eventPtr (" __HERE__ ")");
    t.method("eventPtr!", [](Pythia8::LHEF3FromPythia8& a, Pythia8::Event * val) -> Pythia8::Event * { return a.eventPtr = val; });

    DEBUG_MSG("Adding eventPtr! methods to provide write access to the field eventPtr (" __HERE__ ")");
    t.method("eventPtr!", [](Pythia8::LHEF3FromPythia8* a, Pythia8::Event * val) -> Pythia8::Event * { return a->eventPtr = val; });

    DEBUG_MSG("Adding infoPtr methods  to provide read access to the field infoPtr (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:553:15
    // signature to use in the veto list: Pythia8::LHEF3FromPythia8::infoPtr
    t.method("infoPtr", [](const Pythia8::LHEF3FromPythia8& a) -> const Pythia8::Info * { return a.infoPtr; });
    t.method("infoPtr", [](const Pythia8::LHEF3FromPythia8* a) -> const Pythia8::Info * { return a->infoPtr; });

    DEBUG_MSG("Adding particleDataPtr methods  to provide read access to the field particleDataPtr (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:555:17
    // signature to use in the veto list: Pythia8::LHEF3FromPythia8::particleDataPtr
    t.method("particleDataPtr", [](const Pythia8::LHEF3FromPythia8& a) -> Pythia8::ParticleData * { return a.particleDataPtr; });
    t.method("particleDataPtr", [](Pythia8::LHEF3FromPythia8& a) -> Pythia8::ParticleData * { return a.particleDataPtr; });
    t.method("particleDataPtr", [](const Pythia8::LHEF3FromPythia8* a) -> Pythia8::ParticleData * { return a->particleDataPtr; });
    t.method("particleDataPtr", [](Pythia8::LHEF3FromPythia8* a) -> Pythia8::ParticleData * { return a->particleDataPtr; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:555:17
    // signature to use in the veto list: Pythia8::LHEF3FromPythia8::particleDataPtr
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding particleDataPtr! methods to provide write access to the field particleDataPtr (" __HERE__ ")");
    t.method("particleDataPtr!", [](Pythia8::LHEF3FromPythia8& a, Pythia8::ParticleData * val) -> Pythia8::ParticleData * { return a.particleDataPtr = val; });

    DEBUG_MSG("Adding particleDataPtr! methods to provide write access to the field particleDataPtr (" __HERE__ ")");
    t.method("particleDataPtr!", [](Pythia8::LHEF3FromPythia8* a, Pythia8::ParticleData * val) -> Pythia8::ParticleData * { return a->particleDataPtr = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::LHEF3FromPythia8>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_LHEF3FromPythia8(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_LHEF3FromPythia8(module));
}
