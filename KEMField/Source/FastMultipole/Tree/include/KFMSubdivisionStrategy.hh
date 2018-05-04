#ifndef KFMSubdivisionStrategy_HH__
#define KFMSubdivisionStrategy_HH__

#include "KFMTreeExport.hh"

namespace KEMField
{

struct KFMSubdivisionStrategy
{
    static KFMTREE_EXPORT const unsigned int Aggressive;
    static KFMTREE_EXPORT const unsigned int Balanced;
    static KFMTREE_EXPORT const unsigned int Guided;
};

}

#endif /* end of include guard: KFMSubdivisionStrategy_HH__ */
