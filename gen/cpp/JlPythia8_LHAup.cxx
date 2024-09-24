// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::LHAup> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::LHAup> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::LHAup
// signature to use in the veto file: Pythia8::LHAup
struct JlPythia8_LHAup: public Wrapper {

  JlPythia8_LHAup(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::LHAup (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:78:7
    jlcxx::TypeWrapper<Pythia8::LHAup>  t = jlModule.add_type<Pythia8::LHAup>("Pythia8!LHAup");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::LHAup>>(new jlcxx::TypeWrapper<Pythia8::LHAup>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;

    DEBUG_MSG("Adding wrapper for void Pythia8::LHAup::setPtr(Pythia8::Info *) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::LHAup::setPtr(Pythia8::Info *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:86:8
    t.method("setPtr", static_cast<void (Pythia8::LHAup::*)(Pythia8::Info *) >(&Pythia8::LHAup::setPtr));

    DEBUG_MSG("Adding wrapper for void Pythia8::LHAup::newEventFile(const char *) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::LHAup::newEventFile(const char *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:90:16
    t.method("newEventFile", static_cast<void (Pythia8::LHAup::*)(const char *) >(&Pythia8::LHAup::newEventFile));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAup::fileFound() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAup::fileFound()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:91:16
    t.method("fileFound", static_cast<bool (Pythia8::LHAup::*)() >(&Pythia8::LHAup::fileFound));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAup::useExternal() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAup::useExternal()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:92:16
    t.method("useExternal", static_cast<bool (Pythia8::LHAup::*)() >(&Pythia8::LHAup::useExternal));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAup::setInit() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAup::setInit()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:97:16
    t.method("setInit", static_cast<bool (Pythia8::LHAup::*)() >(&Pythia8::LHAup::setInit));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::idBeamA() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::idBeamA()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:100:10
    t.method("idBeamA", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::idBeamA));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::idBeamB() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::idBeamB()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:101:10
    t.method("idBeamB", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::idBeamB));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::eBeamA() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::eBeamA()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:102:10
    t.method("eBeamA", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::eBeamA));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::eBeamB() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::eBeamB()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:103:10
    t.method("eBeamB", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::eBeamB));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::pdfGroupBeamA() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::pdfGroupBeamA()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:104:10
    t.method("pdfGroupBeamA", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::pdfGroupBeamA));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::pdfGroupBeamB() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::pdfGroupBeamB()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:105:10
    t.method("pdfGroupBeamB", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::pdfGroupBeamB));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::pdfSetBeamA() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::pdfSetBeamA()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:106:10
    t.method("pdfSetBeamA", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::pdfSetBeamA));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::pdfSetBeamB() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::pdfSetBeamB()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:107:10
    t.method("pdfSetBeamB", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::pdfSetBeamB));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::strategy() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::strategy()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:110:10
    t.method("strategy", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::strategy));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::sizeProc() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::sizeProc()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:113:10
    t.method("sizeProc", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::sizeProc));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::idProcess(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::idProcess(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:114:10
    t.method("idProcess", static_cast<int (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::idProcess));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::xSec(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::xSec(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:115:10
    t.method("xSec", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::xSec));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::xErr(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::xErr(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:116:10
    t.method("xErr", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::xErr));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::xMax(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::xMax(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:117:10
    t.method("xMax", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::xMax));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::xSecSum() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::xSecSum()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:118:10
    t.method("xSecSum", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::xSecSum));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::xErrSum() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::xErrSum()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:119:10
    t.method("xErrSum", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::xErrSum));

    DEBUG_MSG("Adding wrapper for void Pythia8::LHAup::listInit() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::LHAup::listInit()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:122:10
    t.method("listInit", static_cast<void (Pythia8::LHAup::*)() >(&Pythia8::LHAup::listInit));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAup::setEvent(int) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAup::setEvent(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:131:16
    t.method("setEvent", static_cast<bool (Pythia8::LHAup::*)(int) >(&Pythia8::LHAup::setEvent));
    t.method("setEvent", [](Pythia8::LHAup& a)->bool { return a.setEvent(); });
    t.method("setEvent", [](Pythia8::LHAup* a)->bool { return a->setEvent(); });

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::idProcess() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::idProcess()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:134:10
    t.method("idProcess", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::idProcess));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::weight() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::weight()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:135:10
    t.method("weight", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::weight));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::scale() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::scale()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:136:10
    t.method("scale", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::scale));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::alphaQED() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::alphaQED()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:137:10
    t.method("alphaQED", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::alphaQED));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::alphaQCD() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::alphaQCD()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:138:10
    t.method("alphaQCD", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::alphaQCD));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::sizePart() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::sizePart()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:141:10
    t.method("sizePart", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::sizePart));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::id(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::id(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:142:10
    t.method("id", static_cast<int (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::id));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::status(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::status(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:143:10
    t.method("status", static_cast<int (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::status));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::mother1(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::mother1(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:144:10
    t.method("mother1", static_cast<int (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::mother1));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::mother2(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::mother2(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:145:10
    t.method("mother2", static_cast<int (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::mother2));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::col1(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::col1(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:146:10
    t.method("col1", static_cast<int (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::col1));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::col2(int) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::col2(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:147:10
    t.method("col2", static_cast<int (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::col2));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::px(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::px(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:148:10
    t.method("px", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::px));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::py(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::py(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:149:10
    t.method("py", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::py));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::pz(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::pz(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:150:10
    t.method("pz", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::pz));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::e(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::e(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:151:10
    t.method("e", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::e));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::m(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::m(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:152:10
    t.method("m", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::m));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::tau(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::tau(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:153:10
    t.method("tau", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::tau));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::spin(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::spin(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:154:10
    t.method("spin", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::spin));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::scale(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::scale(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:155:10
    t.method("scale", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::scale));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::id1() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::id1()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:158:10
    t.method("id1", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::id1));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::id2() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::id2()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:159:10
    t.method("id2", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::id2));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::x1() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::x1()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:160:10
    t.method("x1", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::x1));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::x2() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::x2()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:161:10
    t.method("x2", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::x2));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAup::pdfIsSet() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAup::pdfIsSet()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:164:10
    t.method("pdfIsSet", static_cast<bool (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::pdfIsSet));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::id1pdf() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::id1pdf()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:165:10
    t.method("id1pdf", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::id1pdf));

    DEBUG_MSG("Adding wrapper for int Pythia8::LHAup::id2pdf() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::LHAup::id2pdf()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:166:10
    t.method("id2pdf", static_cast<int (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::id2pdf));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::x1pdf() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::x1pdf()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:167:10
    t.method("x1pdf", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::x1pdf));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::x2pdf() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::x2pdf()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:168:10
    t.method("x2pdf", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::x2pdf));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::scalePDF() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::scalePDF()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:169:10
    t.method("scalePDF", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::scalePDF));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::pdf1() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::pdf1()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:170:10
    t.method("pdf1", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::pdf1));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::pdf2() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::pdf2()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:171:10
    t.method("pdf2", static_cast<double (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::pdf2));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAup::scaleShowersIsSet() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAup::scaleShowersIsSet()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:174:10
    t.method("scaleShowersIsSet", static_cast<bool (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::scaleShowersIsSet));

    DEBUG_MSG("Adding wrapper for double Pythia8::LHAup::scaleShowers(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::LHAup::scaleShowers(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:175:10
    t.method("scaleShowers", static_cast<double (Pythia8::LHAup::*)(int)  const>(&Pythia8::LHAup::scaleShowers));

    DEBUG_MSG("Adding wrapper for void Pythia8::LHAup::listEvent() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::LHAup::listEvent()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:178:10
    t.method("listEvent", static_cast<void (Pythia8::LHAup::*)() >(&Pythia8::LHAup::listEvent));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAup::skipEvent(int) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAup::skipEvent(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:182:16
    t.method("skipEvent", static_cast<bool (Pythia8::LHAup::*)(int) >(&Pythia8::LHAup::skipEvent));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAup::openLHEF(std::string) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAup::openLHEF(std::string)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:187:16
    t.method("openLHEF", static_cast<bool (Pythia8::LHAup::*)(std::string) >(&Pythia8::LHAup::openLHEF));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAup::closeLHEF(bool) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAup::closeLHEF(bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:188:16
    t.method("closeLHEF", static_cast<bool (Pythia8::LHAup::*)(bool) >(&Pythia8::LHAup::closeLHEF));
    t.method("closeLHEF", [](Pythia8::LHAup& a)->bool { return a.closeLHEF(); });
    t.method("closeLHEF", [](Pythia8::LHAup* a)->bool { return a->closeLHEF(); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAup::initLHEF() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAup::initLHEF()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:189:10
    t.method("initLHEF", static_cast<bool (Pythia8::LHAup::*)() >(&Pythia8::LHAup::initLHEF));

    DEBUG_MSG("Adding wrapper for bool Pythia8::LHAup::eventLHEF(bool) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::LHAup::eventLHEF(bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:190:10
    t.method("eventLHEF", static_cast<bool (Pythia8::LHAup::*)(bool) >(&Pythia8::LHAup::eventLHEF));
    t.method("eventLHEF", [](Pythia8::LHAup& a)->bool { return a.eventLHEF(); });
    t.method("eventLHEF", [](Pythia8::LHAup* a)->bool { return a->eventLHEF(); });

    DEBUG_MSG("Adding wrapper for std::string Pythia8::LHAup::getFileName() (" __HERE__ ")");
    // signature to use in the veto list: std::string Pythia8::LHAup::getFileName()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/LesHouches.h:193:10
    t.method("getFileName", static_cast<std::string (Pythia8::LHAup::*)()  const>(&Pythia8::LHAup::getFileName));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::LHAup>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_LHAup(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_LHAup(module));
}
