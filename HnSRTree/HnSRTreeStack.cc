/*
 * HnSRTreeStack.cc
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:27:14
 */

#include "HnSRTree/HnSRTreeStack.hh"
#include "HnSRTree/HnSRTreeStackObj.hh"

/*
 * HnSRTreeStack
 */

const HnSRTreeStack HnSRTreeStack::null;

HnSRTreeStack
new_HnSRTreeStack(void)
{
    HnSRTreeStackObj *_obj;

    _obj = new HnSRTreeStackObj();

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnSRTreeStackObj *)NULL;
    }

    return _obj;
}

#define HnClass HnSRTreeStack
#include "HnSRTree/HnClassArray.cc"

