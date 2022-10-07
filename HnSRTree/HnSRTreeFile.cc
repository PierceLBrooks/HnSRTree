/*
 * HnSRTreeFile.cc
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:27:14
 */

#include "HnSRTree/HnSRTreeFile.hh"
#include "HnSRTree/HnSRTreeFileObj.hh"

/*
 * HnSRTreeFile
 */

const HnSRTreeFile HnSRTreeFile::null;

HnSRTreeFile
new_HnSRTreeFile(const char *path, int dimension, int dataItemSize, const HnProperties &properites)
{
    HnSRTreeFileObj *_obj;

    _obj = new HnSRTreeFileObj(path, dimension, dataItemSize, properites);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnSRTreeFileObj *)NULL;
    }

    return _obj;
}

HnSRTreeFile
new_HnSRTreeFile(const char *path, int dimension, int dataItemSize, HnPointVector &points, HnDataItemVector &dataItems, const HnProperties &properties)
{
    HnSRTreeFileObj *_obj;

    _obj = new HnSRTreeFileObj(path, dimension, dataItemSize, points, dataItems, properties);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnSRTreeFileObj *)NULL;
    }

    return _obj;
}

HnSRTreeFile
new_HnSRTreeFile(const char *path, const char *mode)
{
    HnSRTreeFileObj *_obj;

    _obj = new HnSRTreeFileObj(path, mode);

    if ( _obj->hasConstructorFailed() ) {
        delete _obj;
        return (HnSRTreeFileObj *)NULL;
    }

    return _obj;
}

#define HnClass HnSRTreeFile
#include "HnSRTree/HnClassArray.cc"

