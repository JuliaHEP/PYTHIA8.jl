// this file was auto-generated by wrapit v1.3.1-dirty
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::SingleCell> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::SingleCell> : std::false_type { };
}

// Class generating the wrapper for type Pythia8::SingleCell
// signature to use in the veto file: Pythia8::SingleCell
struct JlPythia8_SingleCell: public Wrapper {

  JlPythia8_SingleCell(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::SingleCell (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:258:7
    jlcxx::TypeWrapper<Pythia8::SingleCell>  t = jlModule.add_type<Pythia8::SingleCell>("Pythia8!SingleCell");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SingleCell>>(new jlcxx::TypeWrapper<Pythia8::SingleCell>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void Pythia8::SingleCell::SingleCell(int, double, double, double, int) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:263:3
    t.constructor<int>(/*finalize=*/true);
    t.constructor<int, double>(/*finalize=*/true);
    t.constructor<int, double, double>(/*finalize=*/true);
    t.constructor<int, double, double, double>(/*finalize=*/true);
    t.constructor<int, double, double, double, int>(/*finalize=*/true);

    DEBUG_MSG("Adding iCell methods  to provide read access to the field iCell (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:270:10
    // signature to use in the veto list: Pythia8::SingleCell::iCell
    t.method("iCell", [](const Pythia8::SingleCell& a) -> int { return a.iCell; });
    t.method("iCell", [](Pythia8::SingleCell& a) -> int { return a.iCell; });
    t.method("iCell", [](const Pythia8::SingleCell* a) -> int { return a->iCell; });
    t.method("iCell", [](Pythia8::SingleCell* a) -> int { return a->iCell; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:270:10
    // signature to use in the veto list: Pythia8::SingleCell::iCell
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding iCell! methods to provide write access to the field iCell (" __HERE__ ")");
    t.method("iCell!", [](Pythia8::SingleCell& a, int val) -> int { return a.iCell = val; });

    DEBUG_MSG("Adding iCell! methods to provide write access to the field iCell (" __HERE__ ")");
    t.method("iCell!", [](Pythia8::SingleCell* a, int val) -> int { return a->iCell = val; });

    DEBUG_MSG("Adding etaCell methods  to provide read access to the field etaCell (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:271:10
    // signature to use in the veto list: Pythia8::SingleCell::etaCell
    t.method("etaCell", [](const Pythia8::SingleCell& a) -> double { return a.etaCell; });
    t.method("etaCell", [](Pythia8::SingleCell& a) -> double { return a.etaCell; });
    t.method("etaCell", [](const Pythia8::SingleCell* a) -> double { return a->etaCell; });
    t.method("etaCell", [](Pythia8::SingleCell* a) -> double { return a->etaCell; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:271:10
    // signature to use in the veto list: Pythia8::SingleCell::etaCell
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding etaCell! methods to provide write access to the field etaCell (" __HERE__ ")");
    t.method("etaCell!", [](Pythia8::SingleCell& a, double val) -> double { return a.etaCell = val; });

    DEBUG_MSG("Adding etaCell! methods to provide write access to the field etaCell (" __HERE__ ")");
    t.method("etaCell!", [](Pythia8::SingleCell* a, double val) -> double { return a->etaCell = val; });

    DEBUG_MSG("Adding phiCell methods  to provide read access to the field phiCell (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:271:19
    // signature to use in the veto list: Pythia8::SingleCell::phiCell
    t.method("phiCell", [](const Pythia8::SingleCell& a) -> double { return a.phiCell; });
    t.method("phiCell", [](Pythia8::SingleCell& a) -> double { return a.phiCell; });
    t.method("phiCell", [](const Pythia8::SingleCell* a) -> double { return a->phiCell; });
    t.method("phiCell", [](Pythia8::SingleCell* a) -> double { return a->phiCell; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:271:19
    // signature to use in the veto list: Pythia8::SingleCell::phiCell
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding phiCell! methods to provide write access to the field phiCell (" __HERE__ ")");
    t.method("phiCell!", [](Pythia8::SingleCell& a, double val) -> double { return a.phiCell = val; });

    DEBUG_MSG("Adding phiCell! methods to provide write access to the field phiCell (" __HERE__ ")");
    t.method("phiCell!", [](Pythia8::SingleCell* a, double val) -> double { return a->phiCell = val; });

    DEBUG_MSG("Adding eTcell methods  to provide read access to the field eTcell (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:271:28
    // signature to use in the veto list: Pythia8::SingleCell::eTcell
    t.method("eTcell", [](const Pythia8::SingleCell& a) -> double { return a.eTcell; });
    t.method("eTcell", [](Pythia8::SingleCell& a) -> double { return a.eTcell; });
    t.method("eTcell", [](const Pythia8::SingleCell* a) -> double { return a->eTcell; });
    t.method("eTcell", [](Pythia8::SingleCell* a) -> double { return a->eTcell; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:271:28
    // signature to use in the veto list: Pythia8::SingleCell::eTcell
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding eTcell! methods to provide write access to the field eTcell (" __HERE__ ")");
    t.method("eTcell!", [](Pythia8::SingleCell& a, double val) -> double { return a.eTcell = val; });

    DEBUG_MSG("Adding eTcell! methods to provide write access to the field eTcell (" __HERE__ ")");
    t.method("eTcell!", [](Pythia8::SingleCell* a, double val) -> double { return a->eTcell = val; });

    DEBUG_MSG("Adding multiplicity methods  to provide read access to the field multiplicity (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:272:10
    // signature to use in the veto list: Pythia8::SingleCell::multiplicity
    t.method("multiplicity", [](const Pythia8::SingleCell& a) -> int { return a.multiplicity; });
    t.method("multiplicity", [](Pythia8::SingleCell& a) -> int { return a.multiplicity; });
    t.method("multiplicity", [](const Pythia8::SingleCell* a) -> int { return a->multiplicity; });
    t.method("multiplicity", [](Pythia8::SingleCell* a) -> int { return a->multiplicity; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:272:10
    // signature to use in the veto list: Pythia8::SingleCell::multiplicity
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding multiplicity! methods to provide write access to the field multiplicity (" __HERE__ ")");
    t.method("multiplicity!", [](Pythia8::SingleCell& a, int val) -> int { return a.multiplicity = val; });

    DEBUG_MSG("Adding multiplicity! methods to provide write access to the field multiplicity (" __HERE__ ")");
    t.method("multiplicity!", [](Pythia8::SingleCell* a, int val) -> int { return a->multiplicity = val; });

    DEBUG_MSG("Adding canBeSeed methods  to provide read access to the field canBeSeed (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:273:10
    // signature to use in the veto list: Pythia8::SingleCell::canBeSeed
    t.method("canBeSeed", [](const Pythia8::SingleCell& a) -> bool { return a.canBeSeed; });
    t.method("canBeSeed", [](Pythia8::SingleCell& a) -> bool { return a.canBeSeed; });
    t.method("canBeSeed", [](const Pythia8::SingleCell* a) -> bool { return a->canBeSeed; });
    t.method("canBeSeed", [](Pythia8::SingleCell* a) -> bool { return a->canBeSeed; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:273:10
    // signature to use in the veto list: Pythia8::SingleCell::canBeSeed
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding canBeSeed! methods to provide write access to the field canBeSeed (" __HERE__ ")");
    t.method("canBeSeed!", [](Pythia8::SingleCell& a, bool val) -> bool { return a.canBeSeed = val; });

    DEBUG_MSG("Adding canBeSeed! methods to provide write access to the field canBeSeed (" __HERE__ ")");
    t.method("canBeSeed!", [](Pythia8::SingleCell* a, bool val) -> bool { return a->canBeSeed = val; });

    DEBUG_MSG("Adding isUsed methods  to provide read access to the field isUsed (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:273:21
    // signature to use in the veto list: Pythia8::SingleCell::isUsed
    t.method("isUsed", [](const Pythia8::SingleCell& a) -> bool { return a.isUsed; });
    t.method("isUsed", [](Pythia8::SingleCell& a) -> bool { return a.isUsed; });
    t.method("isUsed", [](const Pythia8::SingleCell* a) -> bool { return a->isUsed; });
    t.method("isUsed", [](Pythia8::SingleCell* a) -> bool { return a->isUsed; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:273:21
    // signature to use in the veto list: Pythia8::SingleCell::isUsed
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding isUsed! methods to provide write access to the field isUsed (" __HERE__ ")");
    t.method("isUsed!", [](Pythia8::SingleCell& a, bool val) -> bool { return a.isUsed = val; });

    DEBUG_MSG("Adding isUsed! methods to provide write access to the field isUsed (" __HERE__ ")");
    t.method("isUsed!", [](Pythia8::SingleCell* a, bool val) -> bool { return a->isUsed = val; });

    DEBUG_MSG("Adding isAssigned methods  to provide read access to the field isAssigned (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:273:29
    // signature to use in the veto list: Pythia8::SingleCell::isAssigned
    t.method("isAssigned", [](const Pythia8::SingleCell& a) -> bool { return a.isAssigned; });
    t.method("isAssigned", [](Pythia8::SingleCell& a) -> bool { return a.isAssigned; });
    t.method("isAssigned", [](const Pythia8::SingleCell* a) -> bool { return a->isAssigned; });
    t.method("isAssigned", [](Pythia8::SingleCell* a) -> bool { return a->isAssigned; });
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/Analysis.h:273:29
    // signature to use in the veto list: Pythia8::SingleCell::isAssigned
    // with ! suffix to veto the setter only.
    DEBUG_MSG("Adding isAssigned! methods to provide write access to the field isAssigned (" __HERE__ ")");
    t.method("isAssigned!", [](Pythia8::SingleCell& a, bool val) -> bool { return a.isAssigned = val; });

    DEBUG_MSG("Adding isAssigned! methods to provide write access to the field isAssigned (" __HERE__ ")");
    t.method("isAssigned!", [](Pythia8::SingleCell* a, bool val) -> bool { return a->isAssigned = val; });
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::SingleCell>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_SingleCell(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_SingleCell(module));
}
