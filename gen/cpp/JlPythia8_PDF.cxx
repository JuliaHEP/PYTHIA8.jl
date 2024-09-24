// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::PDF> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::PDF> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::PDF
// signature to use in the veto file: Pythia8::PDF
struct JlPythia8_PDF: public Wrapper {

  JlPythia8_PDF(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::PDF (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:49:7
    jlcxx::TypeWrapper<Pythia8::PDF>  t = jlModule.add_type<Pythia8::PDF>("Pythia8!PDF");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PDF>>(new jlcxx::TypeWrapper<Pythia8::PDF>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for bool Pythia8::PDF::init(int, std::string, int, Pythia8::Logger *) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PDF::init(int, std::string, int, Pythia8::Logger *)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:64:16
    t.method("init", static_cast<bool (Pythia8::PDF::*)(int, std::string, int, Pythia8::Logger *) >(&Pythia8::PDF::init));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PDF::isSetup() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PDF::isSetup()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:67:8
    t.method("isSetup", static_cast<bool (Pythia8::PDF::*)() >(&Pythia8::PDF::isSetup));

    DEBUG_MSG("Adding wrapper for void Pythia8::PDF::setBeamID(int) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PDF::setBeamID(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:70:16
    t.method("setBeamID", static_cast<void (Pythia8::PDF::*)(int) >(&Pythia8::PDF::setBeamID));

    DEBUG_MSG("Adding wrapper for void Pythia8::PDF::resetValenceContent() (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PDF::resetValenceContent()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:75:8
    t.method("resetValenceContent", static_cast<void (Pythia8::PDF::*)() >(&Pythia8::PDF::resetValenceContent));

    DEBUG_MSG("Adding wrapper for void Pythia8::PDF::setValenceContent(int, int, int) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PDF::setValenceContent(int, int, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:76:8
    t.method("setValenceContent", static_cast<void (Pythia8::PDF::*)(int, int, int) >(&Pythia8::PDF::setValenceContent));

    DEBUG_MSG("Adding wrapper for void Pythia8::PDF::setExtrapolate(bool) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PDF::setExtrapolate(bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:80:16
    t.method("setExtrapolate", static_cast<void (Pythia8::PDF::*)(bool) >(&Pythia8::PDF::setExtrapolate));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::xf(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::xf(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:83:10
    t.method("xf", static_cast<double (Pythia8::PDF::*)(int, double, double) >(&Pythia8::PDF::xf));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::xfVal(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::xfVal(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:86:10
    t.method("xfVal", static_cast<double (Pythia8::PDF::*)(int, double, double) >(&Pythia8::PDF::xfVal));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::xfSea(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::xfSea(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:87:10
    t.method("xfSea", static_cast<double (Pythia8::PDF::*)(int, double, double) >(&Pythia8::PDF::xfSea));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PDF::insideBounds(double, double) (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PDF::insideBounds(double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:90:16
    t.method("insideBounds", static_cast<bool (Pythia8::PDF::*)(double, double) >(&Pythia8::PDF::insideBounds));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::alphaS(double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::alphaS(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:93:18
    t.method("alphaS", static_cast<double (Pythia8::PDF::*)(double) >(&Pythia8::PDF::alphaS));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::mQuarkPDF(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::mQuarkPDF(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:96:18
    t.method("mQuarkPDF", static_cast<double (Pythia8::PDF::*)(int) >(&Pythia8::PDF::mQuarkPDF));

    DEBUG_MSG("Adding wrapper for int Pythia8::PDF::nMembers() (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::PDF::nMembers()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:99:15
    t.method("nMembers", static_cast<int (Pythia8::PDF::*)() >(&Pythia8::PDF::nMembers));

    DEBUG_MSG("Adding wrapper for void Pythia8::PDF::calcPDFEnvelope(int, double, double, int) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PDF::calcPDFEnvelope(int, double, double, int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:110:16
    t.method("calcPDFEnvelope", static_cast<void (Pythia8::PDF::*)(int, double, double, int) >(&Pythia8::PDF::calcPDFEnvelope));

    DEBUG_MSG("Adding wrapper for Pythia8::PDF::PDFEnvelope Pythia8::PDF::getPDFEnvelope() (" __HERE__ ")");
    // signature to use in the veto list: Pythia8::PDF::PDFEnvelope Pythia8::PDF::getPDFEnvelope()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:113:23
    t.method("getPDFEnvelope", static_cast<Pythia8::PDF::PDFEnvelope (Pythia8::PDF::*)() >(&Pythia8::PDF::getPDFEnvelope));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::gammaPDFxDependence(int, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::gammaPDFxDependence(int, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:116:18
    t.method("gammaPDFxDependence", static_cast<double (Pythia8::PDF::*)(int, double) >(&Pythia8::PDF::gammaPDFxDependence));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::gammaPDFRefScale(int) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::gammaPDFRefScale(int)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:119:18
    t.method("gammaPDFRefScale", static_cast<double (Pythia8::PDF::*)(int) >(&Pythia8::PDF::gammaPDFRefScale));

    DEBUG_MSG("Adding wrapper for int Pythia8::PDF::sampleGammaValFlavor(double) (" __HERE__ ")");
    // signature to use in the veto list: int Pythia8::PDF::sampleGammaValFlavor(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:122:15
    t.method("sampleGammaValFlavor", static_cast<int (Pythia8::PDF::*)(double) >(&Pythia8::PDF::sampleGammaValFlavor));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::xfIntegratedTotal(double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::xfIntegratedTotal(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:125:18
    t.method("xfIntegratedTotal", static_cast<double (Pythia8::PDF::*)(double) >(&Pythia8::PDF::xfIntegratedTotal));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::xGamma() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::xGamma()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:128:18
    t.method("xGamma", static_cast<double (Pythia8::PDF::*)() >(&Pythia8::PDF::xGamma));

    DEBUG_MSG("Adding wrapper for void Pythia8::PDF::xPom(double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PDF::xPom(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:131:16
    t.method("xPom", static_cast<void (Pythia8::PDF::*)(double) >(&Pythia8::PDF::xPom));
    t.method("xPom", [](Pythia8::PDF& a)->void { a.xPom(); });
    t.method("xPom", [](Pythia8::PDF* a)->void { a->xPom(); });

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::xfFlux(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::xfFlux(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:134:18
    t.method("xfFlux", static_cast<double (Pythia8::PDF::*)(int, double, double) >(&Pythia8::PDF::xfFlux));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::xfApprox(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::xfApprox(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:135:18
    t.method("xfApprox", static_cast<double (Pythia8::PDF::*)(int, double, double) >(&Pythia8::PDF::xfApprox));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::xfGamma(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::xfGamma(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:136:18
    t.method("xfGamma", static_cast<double (Pythia8::PDF::*)(int, double, double) >(&Pythia8::PDF::xfGamma));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::intFluxApprox() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::intFluxApprox()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:137:18
    t.method("intFluxApprox", static_cast<double (Pythia8::PDF::*)() >(&Pythia8::PDF::intFluxApprox));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PDF::hasApproxGammaFlux() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PDF::hasApproxGammaFlux()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:138:16
    t.method("hasApproxGammaFlux", static_cast<bool (Pythia8::PDF::*)() >(&Pythia8::PDF::hasApproxGammaFlux));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::getXmin() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::getXmin()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:141:18
    t.method("getXmin", static_cast<double (Pythia8::PDF::*)() >(&Pythia8::PDF::getXmin));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::getXhadr() (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::getXhadr()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:142:18
    t.method("getXhadr", static_cast<double (Pythia8::PDF::*)() >(&Pythia8::PDF::getXhadr));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::sampleXgamma(double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::sampleXgamma(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:143:18
    t.method("sampleXgamma", static_cast<double (Pythia8::PDF::*)(double) >(&Pythia8::PDF::sampleXgamma));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::sampleQ2gamma(double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::sampleQ2gamma(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:144:18
    t.method("sampleQ2gamma", static_cast<double (Pythia8::PDF::*)(double) >(&Pythia8::PDF::sampleQ2gamma));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::fluxQ2dependence(double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::fluxQ2dependence(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:145:18
    t.method("fluxQ2dependence", static_cast<double (Pythia8::PDF::*)(double) >(&Pythia8::PDF::fluxQ2dependence));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::xfMax(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::xfMax(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:148:18
    t.method("xfMax", static_cast<double (Pythia8::PDF::*)(int, double, double) >(&Pythia8::PDF::xfMax));

    DEBUG_MSG("Adding wrapper for double Pythia8::PDF::xfSame(int, double, double) (" __HERE__ ")");
    // signature to use in the veto list: double Pythia8::PDF::xfSame(int, double, double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:151:18
    t.method("xfSame", static_cast<double (Pythia8::PDF::*)(int, double, double) >(&Pythia8::PDF::xfSame));

    DEBUG_MSG("Adding wrapper for void Pythia8::PDF::setVMDscale(double) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PDF::setVMDscale(double)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:154:16
    t.method("setVMDscale", static_cast<void (Pythia8::PDF::*)(double) >(&Pythia8::PDF::setVMDscale));
    t.method("setVMDscale", [](Pythia8::PDF& a)->void { a.setVMDscale(); });
    t.method("setVMDscale", [](Pythia8::PDF* a)->void { a->setVMDscale(); });

    DEBUG_MSG("Adding wrapper for bool Pythia8::PDF::sSymmetric() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PDF::sSymmetric()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:157:8
    t.method("sSymmetric", static_cast<bool (Pythia8::PDF::*)()  const>(&Pythia8::PDF::sSymmetric));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PDF::cSymmetric() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PDF::cSymmetric()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:158:8
    t.method("cSymmetric", static_cast<bool (Pythia8::PDF::*)()  const>(&Pythia8::PDF::cSymmetric));

    DEBUG_MSG("Adding wrapper for bool Pythia8::PDF::bSymmetric() (" __HERE__ ")");
    // signature to use in the veto list: bool Pythia8::PDF::bSymmetric()
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:159:8
    t.method("bSymmetric", static_cast<bool (Pythia8::PDF::*)()  const>(&Pythia8::PDF::bSymmetric));

    DEBUG_MSG("Adding wrapper for void Pythia8::PDF::sSymmetric(bool) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PDF::sSymmetric(bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:162:8
    t.method("sSymmetric", static_cast<void (Pythia8::PDF::*)(bool) >(&Pythia8::PDF::sSymmetric));

    DEBUG_MSG("Adding wrapper for void Pythia8::PDF::cSymmetric(bool) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PDF::cSymmetric(bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:163:8
    t.method("cSymmetric", static_cast<void (Pythia8::PDF::*)(bool) >(&Pythia8::PDF::cSymmetric));

    DEBUG_MSG("Adding wrapper for void Pythia8::PDF::bSymmetric(bool) (" __HERE__ ")");
    // signature to use in the veto list: void Pythia8::PDF::bSymmetric(bool)
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:164:8
    t.method("bSymmetric", static_cast<void (Pythia8::PDF::*)(bool) >(&Pythia8::PDF::bSymmetric));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::PDF>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_PDF(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_PDF(module));
}
