/*
 * HnSRTreeLeaf.hh
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:27:14
 */

#ifndef _HnSRTreeLeaf_hh
#define _HnSRTreeLeaf_hh

#ifndef _HNSRTIMP
#ifdef _MSC_VER
#define _HNSRTIMP _declspec(dllimport)
#else
#define _HNSRTIMP
#endif
#endif

#include "HnSRTree/HnPointer.hh"

#include "HnSRTree/HnDataItem.hh"
#include "HnSRTree/HnPoint.hh"
#include "HnSRTree/HnSphere.hh"
#include "HnSRTree/HnRect.hh"
#include "HnSRTree/HnSRTreeInfo.hh"
#include "HnSRTree/HnSRTreeBlock.hh"
#include "HnSRTree/HnSRTreeCluster.hh"
#include "HnSRTree/HnSRTreeNode.hh"
#ifndef _MSC_VER
#include <unistd.h>
#endif

/*
 * HnSRTreeLeaf
 */

class HnSRTreeLeafObj;

class _HNSRTIMP HnSRTreeLeaf: public HnPointer {
private:
    friend class HnSRTreeLeafObj;
    HnSRTreeLeaf(const HnSRTreeLeafObj *ptr) {
	HnPointer::assign((HnObject *)ptr);
    }
    HnSRTreeLeafObj *getObject(void) const {
	return (HnSRTreeLeafObj *)HnPointer::getObject();
    }
public:
    static const HnSRTreeLeaf null;
    HnSRTreeLeaf(void) {}
public:
    friend _HNSRTIMP HnSRTreeLeaf
    new_HnSRTreeLeaf(const HnSRTreeInfo &info, long offset);
    friend _HNSRTIMP HnSRTreeLeaf
    new_HnSRTreeLeaf(const HnSRTreeInfo &info, const HnSRTreeBlock &block);

    int getDimension(void) const;
    int getDataItemSize(void) const;
    int getBlockSize(void) const;
    long getOffset(void) const;
    int getCount(void) const;
    int getContentSize(void) const;
    HnBool isFull(void) const;

    void addElement(const HnPoint &point, const HnDataItem &dataItem);

    void removeElementAt(int index);

    HnPoint getCentroid(void) const;
    HnSRTreeCluster getCluster(void) const;

    HnPoint &getPointAt(int index) const;
    HnDataItem &getDataItemAt(int index) const;

    HnSRTreeBlock toBlock(void) const;

    HnString toString(void) const;

    static int getMaxCount(const HnSRTreeInfo &info);
};

_HNSRTIMP HnSRTreeLeaf
    new_HnSRTreeLeaf(const HnSRTreeInfo &info, long offset);
_HNSRTIMP HnSRTreeLeaf
    new_HnSRTreeLeaf(const HnSRTreeInfo &info, const HnSRTreeBlock &block);

#include "HnSRTree/HnString.hh"

#define HnClass HnSRTreeLeaf
#include "HnSRTree/HnClassArray.hh"

#include "HnSRTree/HnSRTreeLeafObj.hh"

inline int
HnSRTreeLeaf::getDimension(void) const
{
    return getObject()->getDimension();
}

inline int
HnSRTreeLeaf::getDataItemSize(void) const
{
    return getObject()->getDataItemSize();
}

inline int
HnSRTreeLeaf::getBlockSize(void) const
{
    return getObject()->getBlockSize();
}

inline long
HnSRTreeLeaf::getOffset(void) const
{
    return getObject()->getOffset();
}

inline int
HnSRTreeLeaf::getCount(void) const
{
    return getObject()->getCount();
}

inline int
HnSRTreeLeaf::getContentSize(void) const
{
    return getObject()->getContentSize();
}

inline HnBool
HnSRTreeLeaf::isFull(void) const
{
    return getObject()->isFull();
}

inline void
HnSRTreeLeaf::addElement(const HnPoint &point, const HnDataItem &dataItem)
{
    getObject()->addElement(point, dataItem);
}

inline void
HnSRTreeLeaf::removeElementAt(int index)
{
    getObject()->removeElementAt(index);
}

inline HnPoint
HnSRTreeLeaf::getCentroid(void) const
{
    return getObject()->getCentroid();
}

inline HnSRTreeCluster
HnSRTreeLeaf::getCluster(void) const
{
    return getObject()->getCluster();
}

inline HnPoint &
HnSRTreeLeaf::getPointAt(int index) const
{
    return getObject()->getPointAt(index);
}

inline HnDataItem &
HnSRTreeLeaf::getDataItemAt(int index) const
{
    return getObject()->getDataItemAt(index);
}

inline HnSRTreeBlock
HnSRTreeLeaf::toBlock(void) const
{
    return getObject()->toBlock();
}

inline HnString
HnSRTreeLeaf::toString(void) const {
    if ( isInvalid() ) {
	return "HnSRTreeLeaf::null";
    }
    else {
	return getObject()->toString();
    }
}

inline int
HnSRTreeLeaf::getMaxCount(const HnSRTreeInfo &info)
{
    return HnSRTreeLeafObj::getMaxCount(info);
}


#endif /* _HnSRTreeLeaf_hh */