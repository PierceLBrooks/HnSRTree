/*
 * HnRect.cc
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:27:08
 */

#include "HnSRTree/HnRect.hh"
#include "HnSRTree/HnRectObj.hh"

/*
 * HnRect
 */

const HnRect HnRect::null;

HnRect
new_HnRect(int dimension)
{
    HnRectObj *_obj;

    _obj = new HnRectObj(dimension);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnRectObj *)NULL;
    }

    return _obj;
}

HnRect
new_HnRect(int dimension, HnBlockStream &blockStream)
{
    HnRectObj *_obj;

    _obj = new HnRectObj(dimension, blockStream);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnRectObj *)NULL;
    }

    return _obj;
}

HnRect
new_HnRect(const HnRect &rect)
{
    HnRectObj *_obj;

    _obj = new HnRectObj(rect);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnRectObj *)NULL;
    }

    return _obj;
}

#define HnClass HnRect
#include "HnSRTree/HnClassArray.cpp"

