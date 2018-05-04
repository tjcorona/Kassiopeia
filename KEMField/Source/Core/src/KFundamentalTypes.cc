#include "KFundamentalTypes.hh"

namespace KEMField
{
  const std::string& FundamentalTypeName(std::size_t i)
  {
    static const std::string FundamentalTypeNames[14] = {"bool","char","unsigned char","short","unsigned short","int","unsigned int","long","unsigned long","long long","unsigned long long","float","double","std::string"};
    return FundamentalTypeNames[i];
  }
}
