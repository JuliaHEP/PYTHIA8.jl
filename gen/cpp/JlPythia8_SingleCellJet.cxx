// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::SingleCellJet> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::SingleCellJet> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::SingleCellJet
// signature to use in the veto file: Pythia8::SingleCellJet
struct JlPythia8_SingleCellJet: public Wrapper {

  JlPythia8_SingleCellJet(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::SingleCellJet (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:282:7
    jlcxx::TypeWrapper<Pythia8::SingleCellJet>  t = jlModule.add_type<Pythia8::SingleCellJet>("Pythia8!SingleCellJet");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SingleCellJet>>(new jlcxx::TypeWrapper<Pythia8::SingleCellJet>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::SingleCellJet::SingleCellJet(double, double, double, double, double, int, Pythia8::Vec4) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:287:3
    t.constructor<double>(/*finalize=*/true);
    t.constructor<double, double>(/*finalize=*/true);
    t.constructor<double, double, double>(/*finalize=*/true);
    t.constructor<double, double, double, double>(/*finalize=*/true);
    t.constructor<double, double, double, double, double>(/*finalize=*/true);
    t.constructor<double, double, double, double, double, int>(/*finalize=*/true);
    t.constructor<double, double, double, double, double, int, Pythia8::Vec4>(/*finalize=*/true);

    DEBUG_MSG("Adding eTjet methods  to provide read access to the field eTjet (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:296:10
    // signature to use in the veto list: Pythia8::SingleCellJet::eTjet
    t.method("eTjet", [](const Pythia8::SingleCellJet& a) -> double { return a.eTjet; });
    t.method("eTjet", [](Pythia8::SingleCellJet& a) -> double { return a.eTjet; });
    t.method("eTjet", [](const Pythia8::SingleCellJet* a) -> double { return a->eTjet; });
    t.method("eTjet", [](Pythia8::SingleCellJet* a) -> double { return a->eTjet; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:296:10
    // signature to use in the veto list: Pythia8::SingleCellJet::eTjet
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding eTjet! methods to provide write access to the field eTjet (" __HERE__ ")");
    t.method("eTjet!", [](Pythia8::SingleCellJet& a, double val) -> double { return a.eTjet = val; });

    DEBUG_MSG("Adding eTjet! methods to provide write access to the field eTjet (" __HERE__ ")");
    t.method("eTjet!", [](Pythia8::SingleCellJet* a, double val) -> double { return a->eTjet = val; });

    DEBUG_MSG("Adding etaCenter methods  to provide read access to the field etaCenter (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:296:17
    // signature to use in the veto list: Pythia8::SingleCellJet::etaCenter
    t.method("etaCenter", [](const Pythia8::SingleCellJet& a) -> double { return a.etaCenter; });
    t.method("etaCenter", [](Pythia8::SingleCellJet& a) -> double { return a.etaCenter; });
    t.method("etaCenter", [](const Pythia8::SingleCellJet* a) -> double { return a->etaCenter; });
    t.method("etaCenter", [](Pythia8::SingleCellJet* a) -> double { return a->etaCenter; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:296:17
    // signature to use in the veto list: Pythia8::SingleCellJet::etaCenter
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding etaCenter! methods to provide write access to the field etaCenter (" __HERE__ ")");
    t.method("etaCenter!", [](Pythia8::SingleCellJet& a, double val) -> double { return a.etaCenter = val; });

    DEBUG_MSG("Adding etaCenter! methods to provide write access to the field etaCenter (" __HERE__ ")");
    t.method("etaCenter!", [](Pythia8::SingleCellJet* a, double val) -> double { return a->etaCenter = val; });

    DEBUG_MSG("Adding phiCenter methods  to provide read access to the field phiCenter (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:296:28
    // signature to use in the veto list: Pythia8::SingleCellJet::phiCenter
    t.method("phiCenter", [](const Pythia8::SingleCellJet& a) -> double { return a.phiCenter; });
    t.method("phiCenter", [](Pythia8::SingleCellJet& a) -> double { return a.phiCenter; });
    t.method("phiCenter", [](const Pythia8::SingleCellJet* a) -> double { return a->phiCenter; });
    t.method("phiCenter", [](Pythia8::SingleCellJet* a) -> double { return a->phiCenter; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:296:28
    // signature to use in the veto list: Pythia8::SingleCellJet::phiCenter
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding phiCenter! methods to provide write access to the field phiCenter (" __HERE__ ")");
    t.method("phiCenter!", [](Pythia8::SingleCellJet& a, double val) -> double { return a.phiCenter = val; });

    DEBUG_MSG("Adding phiCenter! methods to provide write access to the field phiCenter (" __HERE__ ")");
    t.method("phiCenter!", [](Pythia8::SingleCellJet* a, double val) -> double { return a->phiCenter = val; });

    DEBUG_MSG("Adding etaWeighted methods  to provide read access to the field etaWeighted (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:296:39
    // signature to use in the veto list: Pythia8::SingleCellJet::etaWeighted
    t.method("etaWeighted", [](const Pythia8::SingleCellJet& a) -> double { return a.etaWeighted; });
    t.method("etaWeighted", [](Pythia8::SingleCellJet& a) -> double { return a.etaWeighted; });
    t.method("etaWeighted", [](const Pythia8::SingleCellJet* a) -> double { return a->etaWeighted; });
    t.method("etaWeighted", [](Pythia8::SingleCellJet* a) -> double { return a->etaWeighted; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:296:39
    // signature to use in the veto list: Pythia8::SingleCellJet::etaWeighted
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding etaWeighted! methods to provide write access to the field etaWeighted (" __HERE__ ")");
    t.method("etaWeighted!", [](Pythia8::SingleCellJet& a, double val) -> double { return a.etaWeighted = val; });

    DEBUG_MSG("Adding etaWeighted! methods to provide write access to the field etaWeighted (" __HERE__ ")");
    t.method("etaWeighted!", [](Pythia8::SingleCellJet* a, double val) -> double { return a->etaWeighted = val; });

    DEBUG_MSG("Adding phiWeighted methods  to provide read access to the field phiWeighted (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:296:52
    // signature to use in the veto list: Pythia8::SingleCellJet::phiWeighted
    t.method("phiWeighted", [](const Pythia8::SingleCellJet& a) -> double { return a.phiWeighted; });
    t.method("phiWeighted", [](Pythia8::SingleCellJet& a) -> double { return a.phiWeighted; });
    t.method("phiWeighted", [](const Pythia8::SingleCellJet* a) -> double { return a->phiWeighted; });
    t.method("phiWeighted", [](Pythia8::SingleCellJet* a) -> double { return a->phiWeighted; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:296:52
    // signature to use in the veto list: Pythia8::SingleCellJet::phiWeighted
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding phiWeighted! methods to provide write access to the field phiWeighted (" __HERE__ ")");
    t.method("phiWeighted!", [](Pythia8::SingleCellJet& a, double val) -> double { return a.phiWeighted = val; });

    DEBUG_MSG("Adding phiWeighted! methods to provide write access to the field phiWeighted (" __HERE__ ")");
    t.method("phiWeighted!", [](Pythia8::SingleCellJet* a, double val) -> double { return a->phiWeighted = val; });

    DEBUG_MSG("Adding multiplicity methods  to provide read access to the field multiplicity (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:297:10
    // signature to use in the veto list: Pythia8::SingleCellJet::multiplicity
    t.method("multiplicity", [](const Pythia8::SingleCellJet& a) -> int { return a.multiplicity; });
    t.method("multiplicity", [](Pythia8::SingleCellJet& a) -> int { return a.multiplicity; });
    t.method("multiplicity", [](const Pythia8::SingleCellJet* a) -> int { return a->multiplicity; });
    t.method("multiplicity", [](Pythia8::SingleCellJet* a) -> int { return a->multiplicity; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:297:10
    // signature to use in the veto list: Pythia8::SingleCellJet::multiplicity
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding multiplicity! methods to provide write access to the field multiplicity (" __HERE__ ")");
    t.method("multiplicity!", [](Pythia8::SingleCellJet& a, int val) -> int { return a.multiplicity = val; });

    DEBUG_MSG("Adding multiplicity! methods to provide write access to the field multiplicity (" __HERE__ ")");
    t.method("multiplicity!", [](Pythia8::SingleCellJet* a, int val) -> int { return a->multiplicity = val; });

    DEBUG_MSG("Adding pMassive methods  to provide read access to the field pMassive (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:298:10
    // signature to use in the veto list: Pythia8::SingleCellJet::pMassive
    t.method("pMassive", [](const Pythia8::SingleCellJet& a) -> const Pythia8::Vec4& { return a.pMassive; });
    t.method("pMassive", [](Pythia8::SingleCellJet& a) -> Pythia8::Vec4& { return a.pMassive; });
    t.method("pMassive", [](const Pythia8::SingleCellJet* a) -> const Pythia8::Vec4& { return a->pMassive; });
    t.method("pMassive", [](Pythia8::SingleCellJet* a) -> Pythia8::Vec4& { return a->pMassive; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:298:10
    // signature to use in the veto list: Pythia8::SingleCellJet::pMassive
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding pMassive! methods to provide write access to the field pMassive (" __HERE__ ")");
    t.method("pMassive!", [](Pythia8::SingleCellJet& a, const Pythia8::Vec4& val) -> Pythia8::Vec4& { return a.pMassive = val; });

    DEBUG_MSG("Adding pMassive! methods to provide write access to the field pMassive (" __HERE__ ")");
    t.method("pMassive!", [](Pythia8::SingleCellJet* a, const Pythia8::Vec4& val) -> Pythia8::Vec4& { return a->pMassive = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SingleCellJet>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_SingleCellJet(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_SingleCellJet(module));
}
