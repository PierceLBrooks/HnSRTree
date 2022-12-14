/*
 * HnSRTreeInfo.cc
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:27:14
 */

#include "HnSRTree/HnSRTreeInfo.hh"
#include "HnSRTree/HnSRTreeInfoObj.hh"

/*
 * HnSRTreeInfo
 */

const HnSRTreeInfo HnSRTreeInfo::null;

HnSRTreeInfo
new_HnSRTreeInfo(HnBlockStream blockStream)
{
    HnSRTreeInfoObj *_obj;

    _obj = new HnSRTreeInfoObj(blockStream);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnSRTreeInfoObj *)NULL;
    }

    return _obj;
}

HnSRTreeInfo
new_HnSRTreeInfo(int dimension, int dataItemSize, long fileSize, long freeOffset, long rootOffset, int height, int blockSize, int splitFactor, int reinsertFactor, HnSRTreeInfo::StaticAlgorithm staticAlgorithm, HnSRTreeInfo::NonLeafFloatType nonLeafFloatType, HnSRTreeInfo::NeighborAlgorithm neighborAlgorithm)
{
    HnSRTreeInfoObj *_obj;

    _obj = new HnSRTreeInfoObj(dimension, dataItemSize, fileSize, freeOffset, rootOffset, height, blockSize, splitFactor, reinsertFactor, staticAlgorithm, nonLeafFloatType, neighborAlgorithm);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnSRTreeInfoObj *)NULL;
    }

    return _obj;
}

#define HnClass HnSRTreeInfo
#include "HnSRTree/HnClassArray.cc"

