//#include "KEMCout.hh"

#include "KDataDisplay.hh"

#include <iostream>

namespace KEMField
{
#ifdef KEMFIELD_SILENT
  __declspec(dllexport) KDataDisplay<KNullStream> cout;
#else
#ifdef KEMFIELD_USE_KMESSAGE
  __declspec(dllexport) KDataDisplay<KMessage_KEMField> cout;
#else
  __declspec(dllexport) KDataDisplay<std::ostream> cout;
#endif
#endif
}

namespace
{
  static bool EnableDebugOutput()
  {
#ifdef KEMFIELD_USE_KMESSAGE
    // applications should set this themselves if that's what they need.
    // katrin::KMessageTable::GetInstance().SetTerminalVerbosity(katrin::eDebug);
#endif
    return true;
  }

//  bool __attribute__((__unused__)) fEnableDebugOutput = EnableDebugOutput();
  bool fEnableDebugOutput = EnableDebugOutput();
}
