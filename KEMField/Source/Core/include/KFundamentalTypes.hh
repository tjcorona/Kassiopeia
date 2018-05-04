#ifndef KFUNDAMENTALTYPES_DEF
#define KFUNDAMENTALTYPES_DEF

#include "KTypelist.hh"

#include <array>
#include <string>

namespace KEMField
{
  typedef KTYPELIST_14( bool, char, unsigned char, short, unsigned short, int, unsigned int, long, unsigned long, long long, unsigned long long, float, double , std::string ) FundamentalTypes;

  const std::string& FundamentalTypeName(std::size_t i);
}

#endif /* KFUNDAMENTALTYPES_DEF */
