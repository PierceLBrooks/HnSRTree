/*
 * HnSRTreeLeaf.cc
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:27:14
 */

#include "HnSRTree/HnSRTreeLeaf.hh"
#include "HnSRTree/HnSRTreeLeafObj.hh"

/*
 * HnSRTreeLeaf
 */

const HnSRTreeLeaf HnSRTreeLeaf::null;

HnSRTreeLeaf
new_HnSRTreeLeaf(const HnSRTreeInfo &info, long offset)
{
    HnSRTreeLeafObj *_obj;

    _obj = new HnSRTreeLeafObj(info, offset);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnSRTreeLeafObj *)NULL;
    }

    return _obj;
}

HnSRTreeLeaf
new_HnSRTreeLeaf(const HnSRTreeInfo &info, const HnSRTreeBlock &block)
{
    HnSRTreeLeafObj *_obj;

    _obj = new HnSRTreeLeafObj(info, block);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnSRTreeLeafObj *)NULL;
    }

    return _obj;
}

#define HnClass HnSRTreeLeaf
#include "HnSRTree/HnClassArray.cc"
