/*
 * HnTimes.cc
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:26:43
 */

#include "HnSRTree/HnTimes.hh"
#include "HnSRTree/HnTimesObj.hh"

/*
 * HnTimes
 */

const HnTimes HnTimes::null;

HnTimes
new_HnTimes(void)
{
    HnTimesObj *_obj;

    _obj = new HnTimesObj();

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnTimesObj *)NULL;
    }

    return _obj;
}

#define HnClass HnTimes
#include "HnSRTree/HnClassArray.cpp"

