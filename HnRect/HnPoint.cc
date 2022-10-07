/*
 * HnPoint.cc
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:27:08
 */

#include "HnSRTree/HnPoint.hh"
#include "HnSRTree/HnPointObj.hh"

/*
 * HnPoint
 */

const HnPoint HnPoint::null;

HnPoint
new_HnPoint(int dimension)
{
    HnPointObj *_obj;

    _obj = new HnPointObj(dimension);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnPointObj *)NULL;
    }

    return _obj;
}

HnPoint
new_HnPoint(int dimension, HnBlockStream &blockStream)
{
    HnPointObj *_obj;

    _obj = new HnPointObj(dimension, blockStream);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnPointObj *)NULL;
    }

    return _obj;
}

HnPoint
new_HnPoint(const HnPoint &point)
{
    HnPointObj *_obj;

    _obj = new HnPointObj(point);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnPointObj *)NULL;
    }

    return _obj;
}

#define HnClass HnPoint
#include "HnSRTree/HnClassArray.cc"

