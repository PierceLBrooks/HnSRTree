/*
 * HnRect.hh
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2022/10/07 16:31:21
 */

#ifndef _HnRect_hh
#define _HnRect_hh

#ifndef _HNSRTIMP
#ifdef _MSC_VER
#define _HNSRTIMP _declspec(dllexport)
#else
#define _HNSRTIMP
#endif
#endif

#include "HnSRTree/HnPointer.hh"

#include "HnSRTree/HnBlockStream.hh"
#include "HnSRTree/HnPoint.hh"
#include "HnSRTree/HnRange.hh"
#include "HnSRTree/HnSphere.hh"
class HnRectArray;

/*
 * HnRect
 */

class HnRectObj;

class _HNSRTIMP HnRect: public HnPointer {
private:
    friend class HnRectObj;
    HnRect(const HnRectObj *ptr) {
	HnPointer::assign((HnObject *)ptr);
    }
    HnRectObj *getObject(void) const {
	return (HnRectObj *)HnPointer::getObject();
    }
public:
    static const HnRect null;
    HnRect(void) {}
public:
    friend _HNSRTIMP HnRect
    new_HnRect(int dimension);
    friend _HNSRTIMP HnRect
    new_HnRect(int dimension, HnBlockStream &blockStream);
    friend _HNSRTIMP HnRect
    new_HnRect(const HnRect &rect);

    /* attributes */
    int getDimension(void) const;
    const HnRange &getRangeAt(int index) const;
    void setRangeAt(double min, double max, int index);
    void setRangeAt(const HnRange &range, int index);
    HnRange *getRanges(void) const;

    /* HnBlockStream */
    void writeTo(HnBlockStream &blockStream) const;
    static int getSizeInBlockStream(int dimension);

    /* utilities */
    HnBool equals(const HnRect &rect) const;
    HnBool overlaps(const HnRect &rect) const;
    HnBool overlaps(const HnSphere &sphere) const;
    HnBool includes(const HnRect &rect) const;
    HnBool includes(const HnPoint &point) const;

    double getMaxWidth(void) const;
    double getMargin(void) const;
    HnPoint getCenterPoint(void) const;

    HnRect getOverlappingRect(const HnRect &rect) const;
    HnRect getBoundingRect(const HnRect &rect) const;

    double getDiagonal(void) const;
    double getVolume(void) const;

    HnPoint getNearestPoint(const HnPoint &point) const;
    HnPoint getFarthestPoint(const HnPoint &point) const;

    double getMinDistance(const HnPoint &point) const;
    double getMinDistance(const HnPoint &point,
			  HnPoint *nearestPoint_return) const;
    double getMaxDistance(const HnPoint &point) const;
    double getMaxDistance(const HnPoint &point,
			  HnPoint *farthestPoint_return) const;

    double getLowerBoundMinDistance(const HnPoint &point) const;
    double getLowerBoundMinDistance(const HnPoint &point,
				    HnPoint *nearestPoint_return) const;
    double getUpperBoundMaxDistance(const HnPoint &point) const;
    double getUpperBoundMaxDistance(const HnPoint &point,
				    HnPoint *farthestPoint_return) const;

    HnString toString(void) const;

    /* class methods */
    static HnRect getBoundingRect(const HnPointArray &points);
    static HnRect getBoundingRect(const HnSphereArray &spheres);
    static HnRect getBoundingRect(const HnRectArray &rects);
};

_HNSRTIMP HnRect
    new_HnRect(int dimension);
_HNSRTIMP HnRect
    new_HnRect(int dimension, HnBlockStream &blockStream);
_HNSRTIMP HnRect
    new_HnRect(const HnRect &rect);

#include "HnSRTree/HnString.hh"

#define HnClass HnRect
#include "HnSRTree/HnClassArray.hh"

#include "HnSRTree/HnRectObj.hh"

inline int
HnRect::getDimension(void) const
{
    return getObject()->getDimension();
}

inline const HnRange &
HnRect::getRangeAt(int index) const
{
    return getObject()->getRangeAt(index);
}

inline void
HnRect::setRangeAt(double min, double max, int index)
{
    getObject()->setRangeAt(min, max, index);
}

inline void
HnRect::setRangeAt(const HnRange &range, int index)
{
    getObject()->setRangeAt(range, index);
}

inline HnRange *
HnRect::getRanges(void) const
{
    return getObject()->getRanges();
}

inline void
HnRect::writeTo(HnBlockStream &blockStream) const
{
    getObject()->writeTo(blockStream);
}

inline int
HnRect::getSizeInBlockStream(int dimension)
{
    return HnRectObj::getSizeInBlockStream(dimension);
}

inline HnBool
HnRect::equals(const HnRect &ptr) const {
    if ( isInvalid() ) {
	if ( ptr.isInvalid() ) {
	    return HnTRUE;
	}
	else {
	    return HnFALSE;
	}
    }
    else {
	if ( ptr.isInvalid() ) {
	    return HnFALSE;
	}
	else {
	    return getObject()->equals(ptr);
	}
    }
}

inline HnBool
HnRect::overlaps(const HnRect &rect) const
{
    return getObject()->overlaps(rect);
}

inline HnBool
HnRect::overlaps(const HnSphere &sphere) const
{
    return getObject()->overlaps(sphere);
}

inline HnBool
HnRect::includes(const HnRect &rect) const
{
    return getObject()->includes(rect);
}

inline HnBool
HnRect::includes(const HnPoint &point) const
{
    return getObject()->includes(point);
}

inline double
HnRect::getMaxWidth(void) const
{
    return getObject()->getMaxWidth();
}

inline double
HnRect::getMargin(void) const
{
    return getObject()->getMargin();
}

inline HnPoint
HnRect::getCenterPoint(void) const
{
    return getObject()->getCenterPoint();
}

inline HnRect
HnRect::getOverlappingRect(const HnRect &rect) const
{
    return getObject()->getOverlappingRect(rect);
}

inline HnRect
HnRect::getBoundingRect(const HnRect &rect) const
{
    return getObject()->getBoundingRect(rect);
}

inline double
HnRect::getDiagonal(void) const
{
    return getObject()->getDiagonal();
}

inline double
HnRect::getVolume(void) const
{
    return getObject()->getVolume();
}

inline HnPoint
HnRect::getNearestPoint(const HnPoint &point) const
{
    return getObject()->getNearestPoint(point);
}

inline HnPoint
HnRect::getFarthestPoint(const HnPoint &point) const
{
    return getObject()->getFarthestPoint(point);
}

inline double
HnRect::getMinDistance(const HnPoint &point) const
{
    return getObject()->getMinDistance(point);
}

inline double
HnRect::getMinDistance(const HnPoint &point, HnPoint *nearestPoint_return) const
{
    return getObject()->getMinDistance(point, nearestPoint_return);
}

inline double
HnRect::getMaxDistance(const HnPoint &point) const
{
    return getObject()->getMaxDistance(point);
}

inline double
HnRect::getMaxDistance(const HnPoint &point, HnPoint *farthestPoint_return) const
{
    return getObject()->getMaxDistance(point, farthestPoint_return);
}

inline double
HnRect::getLowerBoundMinDistance(const HnPoint &point) const
{
    return getObject()->getLowerBoundMinDistance(point);
}

inline double
HnRect::getLowerBoundMinDistance(const HnPoint &point, HnPoint *nearestPoint_return) const
{
    return getObject()->getLowerBoundMinDistance(point, nearestPoint_return);
}

inline double
HnRect::getUpperBoundMaxDistance(const HnPoint &point) const
{
    return getObject()->getUpperBoundMaxDistance(point);
}

inline double
HnRect::getUpperBoundMaxDistance(const HnPoint &point, HnPoint *farthestPoint_return) const
{
    return getObject()->getUpperBoundMaxDistance(point, farthestPoint_return);
}

inline HnString
HnRect::toString(void) const {
    if ( isInvalid() ) {
	return "HnRect::null";
    }
    else {
	return getObject()->toString();
    }
}

inline HnRect
HnRect::getBoundingRect(const HnPointArray &points)
{
    return HnRectObj::getBoundingRect(points);
}

inline HnRect
HnRect::getBoundingRect(const HnSphereArray &spheres)
{
    return HnRectObj::getBoundingRect(spheres);
}

inline HnRect
HnRect::getBoundingRect(const HnRectArray &rects)
{
    return HnRectObj::getBoundingRect(rects);
}


#endif /* _HnRect_hh */
