/*
 * HnSRTreeReinsert.hh
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:27:14
 */

#ifndef _HnSRTreeReinsert_hh
#define _HnSRTreeReinsert_hh

#ifndef _HNSRTIMP
#ifdef _MSC_VER
#define _HNSRTIMP _declspec(dllexport)
#else
#define _HNSRTIMP
#endif
#endif

#include "HnSRTree/HnPointer.hh"

#ifndef _MSC_VER
#include <unistd.h>
#include <sys/types.h>
#endif
#include "HnSRTree/HnPoint.hh"
#include "HnSRTree/HnDataItem.hh"

/*
 * HnSRTreeReinsert
 */

class HnSRTreeReinsertObj;

class _HNSRTIMP HnSRTreeReinsert: public HnPointer {
private:
    friend class HnSRTreeReinsertObj;
    HnSRTreeReinsert(const HnSRTreeReinsertObj *ptr) {
	HnPointer::assign((HnObject *)ptr);
    }
    HnSRTreeReinsertObj *getObject(void) const {
	return (HnSRTreeReinsertObj *)HnPointer::getObject();
    }
public:
    static const HnSRTreeReinsert null;
    HnSRTreeReinsert(void) {}
public:
    enum Type { POINT, BLOCK };

    friend _HNSRTIMP HnSRTreeReinsert
    new_HnSRTreeReinsert(const HnPoint &point, const HnDataItem &dataItem);
    friend _HNSRTIMP HnSRTreeReinsert
    new_HnSRTreeReinsert(long offset, int level);
    HnSRTreeReinsert::Type getType(void) const;
    const HnPoint &getPoint(void) const;
    const HnDataItem &getDataItem(void) const;
    long getOffset(void) const;
    int getLevel(void) const;
};

_HNSRTIMP HnSRTreeReinsert
    new_HnSRTreeReinsert(const HnPoint &point, const HnDataItem &dataItem);
_HNSRTIMP HnSRTreeReinsert
    new_HnSRTreeReinsert(long offset, int level);

#include "HnSRTree/HnString.hh"

#define HnClass HnSRTreeReinsert
#include "HnSRTree/HnClassArray.hh"

#include "HnSRTree/HnSRTreeReinsertObj.hh"

inline HnSRTreeReinsert::Type
HnSRTreeReinsert::getType(void) const
{
    return getObject()->getType();
}

inline const HnPoint &
HnSRTreeReinsert::getPoint(void) const
{
    return getObject()->getPoint();
}

inline const HnDataItem &
HnSRTreeReinsert::getDataItem(void) const
{
    return getObject()->getDataItem();
}

inline long
HnSRTreeReinsert::getOffset(void) const
{
    return getObject()->getOffset();
}

inline int
HnSRTreeReinsert::getLevel(void) const
{
    return getObject()->getLevel();
}


#endif /* _HnSRTreeReinsert_hh */
