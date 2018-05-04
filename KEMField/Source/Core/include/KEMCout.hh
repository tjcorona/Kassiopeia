#ifndef KEMCOUT_DEF
#define KEMCOUT_DEF

#include "KDataDisplay.hh"

#ifdef KEMFIELD_USE_KMESSAGE
#include "KMessageInterface.hh"
#endif

namespace KEMField
{
#ifdef KEMFIELD_SILENT
  __declspec(dllimport) KDataDisplay<KNullStream> cout;
#else
#ifdef KEMFIELD_USE_KMESSAGE
  __declspec(dllimport) KDataDisplay<KMessage_KEMField> cout;
#else
  __declspec(dllimport) KDataDisplay<std::ostream> cout;
#endif
#endif
}

#endif /* KEMCOUT_DEF */
