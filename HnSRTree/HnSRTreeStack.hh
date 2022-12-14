/*
 * HnSRTreeStack.hh
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:27:14
 */

#ifndef _HnSRTreeStack_hh
#define _HnSRTreeStack_hh

#ifndef _HNSRTIMP
#ifdef _MSC_VER
#define _HNSRTIMP _declspec(dllexport)
#else
#define _HNSRTIMP
#endif
#endif

#include "HnSRTree/HnPointer.hh"

#include "HnSRTree/HnSRTreeNode.hh"
#include "HnSRTree/HnSRTreeLeaf.hh"

/*
 * HnSRTreeStack
 */

class HnSRTreeStackObj;

class _HNSRTIMP HnSRTreeStack: public HnPointer {
private:
    friend class HnSRTreeStackObj;
    HnSRTreeStack(const HnSRTreeStackObj *ptr) {
	HnPointer::assign((HnObject *)ptr);
    }
    HnSRTreeStackObj *getObject(void) const {
	return (HnSRTreeStackObj *)HnPointer::getObject();
    }
public:
    static const HnSRTreeStack null;
    HnSRTreeStack(void) {}
public:
    friend _HNSRTIMP HnSRTreeStack
    new_HnSRTreeStack(void);

    void push(const HnSRTreeNode &node, int cursor);
    void push(const HnSRTreeLeaf &leaf, int cursor);
    void push(const HnSRTreeNode &node);
    void push(const HnSRTreeLeaf &leaf);
    void pop(void);
    void advance(void);

    int getDepth(void) const;

    int getCursor(void) const;
    HnBool hasMore(void) const;

    HnBool isTopNode(void) const;
    HnBool isTopLeaf(void) const;


    const HnSRTreeNode &getTopNode(void) const;
    const HnSRTreeLeaf &getTopLeaf(void) const;
};

_HNSRTIMP HnSRTreeStack
    new_HnSRTreeStack(void);

#include "HnSRTree/HnString.hh"

#define HnClass HnSRTreeStack
#include "HnSRTree/HnClassArray.hh"

#include "HnSRTree/HnSRTreeStackObj.hh"

inline void
HnSRTreeStack::push(const HnSRTreeNode &node, int cursor)
{
    getObject()->push(node, cursor);
}

inline void
HnSRTreeStack::push(const HnSRTreeLeaf &leaf, int cursor)
{
    getObject()->push(leaf, cursor);
}

inline void
HnSRTreeStack::push(const HnSRTreeNode &node)
{
    getObject()->push(node);
}

inline void
HnSRTreeStack::push(const HnSRTreeLeaf &leaf)
{
    getObject()->push(leaf);
}

inline void
HnSRTreeStack::pop(void)
{
    getObject()->pop();
}

inline void
HnSRTreeStack::advance(void)
{
    getObject()->advance();
}

inline int
HnSRTreeStack::getDepth(void) const
{
    return getObject()->getDepth();
}

inline int
HnSRTreeStack::getCursor(void) const
{
    return getObject()->getCursor();
}

inline HnBool
HnSRTreeStack::hasMore(void) const
{
    return getObject()->hasMore();
}

inline HnBool
HnSRTreeStack::isTopNode(void) const
{
    return getObject()->isTopNode();
}

inline HnBool
HnSRTreeStack::isTopLeaf(void) const
{
    return getObject()->isTopLeaf();
}

inline const HnSRTreeNode &
HnSRTreeStack::getTopNode(void) const
{
    return getObject()->getTopNode();
}

inline const HnSRTreeLeaf &
HnSRTreeStack::getTopLeaf(void) const
{
    return getObject()->getTopLeaf();
}


#endif /* _HnSRTreeStack_hh */
