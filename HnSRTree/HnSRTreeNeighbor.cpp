/*
 * HnSRTreeNeighbor.cc
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:27:14
 */

#include "HnSRTree/HnSRTreeNeighbor.hh"
#include "HnSRTree/HnSRTreeNeighborObj.hh"

/*
 * HnSRTreeNeighbor
 */

const HnSRTreeNeighbor HnSRTreeNeighbor::null;

HnSRTreeNeighbor
new_HnSRTreeNeighbor(const HnPoint &point, const HnDataItem &dataItem, double distance)
{
    HnSRTreeNeighborObj *_obj;

    _obj = new HnSRTreeNeighborObj(point, dataItem, distance);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnSRTreeNeighborObj *)NULL;
    }

    return _obj;
}

HnSRTreeNeighbor
new_HnSRTreeNeighbor(long offset, double distance)
{
    HnSRTreeNeighborObj *_obj;

    _obj = new HnSRTreeNeighborObj(offset, distance);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnSRTreeNeighborObj *)NULL;
    }

    return _obj;
}

#define HnClass HnSRTreeNeighbor
#include "HnSRTree/HnClassArray.cpp"

