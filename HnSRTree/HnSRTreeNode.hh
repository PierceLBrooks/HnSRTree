/*
 * HnSRTreeNode.hh
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:27:14
 */

#ifndef _HnSRTreeNode_hh
#define _HnSRTreeNode_hh

#ifndef _HNSRTIMP
#ifdef _MSC_VER
#define _HNSRTIMP _declspec(dllimport)
#else
#define _HNSRTIMP
#endif
#endif

#include "HnSRTree/HnPointer.hh"

#include "HnSRTree/HnFTlongArray.hh"
#include "HnSRTree/HnSRTreeInfo.hh"
#include "HnSRTree/HnSRTreeBlock.hh"
#include "HnSRTree/HnSRTreeCluster.hh"
#ifndef _MSC_VER
#include <unistd.h>
#endif

/*
 * HnSRTreeNode
 */

class HnSRTreeNodeObj;

class _HNSRTIMP HnSRTreeNode: public HnPointer {
private:
    friend class HnSRTreeNodeObj;
    HnSRTreeNode(const HnSRTreeNodeObj *ptr) {
	HnPointer::assign((HnObject *)ptr);
    }
    HnSRTreeNodeObj *getObject(void) const {
	return (HnSRTreeNodeObj *)HnPointer::getObject();
    }
public:
    static const HnSRTreeNode null;
    HnSRTreeNode(void) {}
public:
    friend _HNSRTIMP HnSRTreeNode
    new_HnSRTreeNode(const HnSRTreeInfo &info, long offset);
    friend _HNSRTIMP HnSRTreeNode
    new_HnSRTreeNode(const HnSRTreeInfo &info, const HnSRTreeBlock &block);

    int getDimension(void) const;
    int getBlockSize(void) const;
    long getOffset(void) const;
    int getCount(void) const;
    int getContentSize(void) const;
    HnBool isFull(void) const;

    void addElement(const HnSRTreeCluster &cluster, long offset);
    void removeElementAt(int index);
    void setElementAt(const HnSRTreeCluster &cluster, long offset,
		      int index);
    void setClusterAt(const HnSRTreeCluster &cluster, int index);

    HnPoint getCentroid(void) const;
    HnSRTreeCluster getCluster(void) const;

    HnSRTreeCluster &getClusterAt(int index) const;
    long getOffsetAt(int index) const;

    HnSRTreeBlock toBlock(void) const;

    HnString toString(void) const;

    static int getMaxCount(const HnSRTreeInfo &info);
};

_HNSRTIMP HnSRTreeNode
    new_HnSRTreeNode(const HnSRTreeInfo &info, long offset);
_HNSRTIMP HnSRTreeNode
    new_HnSRTreeNode(const HnSRTreeInfo &info, const HnSRTreeBlock &block);

#include "HnSRTree/HnString.hh"

#define HnClass HnSRTreeNode
#include "HnSRTree/HnClassArray.hh"

#include "HnSRTree/HnSRTreeNodeObj.hh"

inline int
HnSRTreeNode::getDimension(void) const
{
    return getObject()->getDimension();
}

inline int
HnSRTreeNode::getBlockSize(void) const
{
    return getObject()->getBlockSize();
}

inline long
HnSRTreeNode::getOffset(void) const
{
    return getObject()->getOffset();
}

inline int
HnSRTreeNode::getCount(void) const
{
    return getObject()->getCount();
}

inline int
HnSRTreeNode::getContentSize(void) const
{
    return getObject()->getContentSize();
}

inline HnBool
HnSRTreeNode::isFull(void) const
{
    return getObject()->isFull();
}

inline void
HnSRTreeNode::addElement(const HnSRTreeCluster &cluster, long offset)
{
    getObject()->addElement(cluster, offset);
}

inline void
HnSRTreeNode::removeElementAt(int index)
{
    getObject()->removeElementAt(index);
}

inline void
HnSRTreeNode::setElementAt(const HnSRTreeCluster &cluster, long offset, int index)
{
    getObject()->setElementAt(cluster, offset, index);
}

inline void
HnSRTreeNode::setClusterAt(const HnSRTreeCluster &cluster, int index)
{
    getObject()->setClusterAt(cluster, index);
}

inline HnPoint
HnSRTreeNode::getCentroid(void) const
{
    return getObject()->getCentroid();
}

inline HnSRTreeCluster
HnSRTreeNode::getCluster(void) const
{
    return getObject()->getCluster();
}

inline HnSRTreeCluster &
HnSRTreeNode::getClusterAt(int index) const
{
    return getObject()->getClusterAt(index);
}

inline long
HnSRTreeNode::getOffsetAt(int index) const
{
    return getObject()->getOffsetAt(index);
}

inline HnSRTreeBlock
HnSRTreeNode::toBlock(void) const
{
    return getObject()->toBlock();
}

inline HnString
HnSRTreeNode::toString(void) const {
    if ( isInvalid() ) {
	return "HnSRTreeNode::null";
    }
    else {
	return getObject()->toString();
    }
}

inline int
HnSRTreeNode::getMaxCount(const HnSRTreeInfo &info)
{
    return HnSRTreeNodeObj::getMaxCount(info);
}


#endif /* _HnSRTreeNode_hh */
