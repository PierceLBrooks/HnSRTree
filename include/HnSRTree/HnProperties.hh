/*
 * HnProperties.hh
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:26:43
 */

#ifndef _HnProperties_hh
#define _HnProperties_hh

#ifndef _HNSRTIMP
#ifdef _MSC_VER
#define _HNSRTIMP _declspec(dllexport)
#else
#define _HNSRTIMP
#endif
#endif

#include "HnSRTree/HnPointer.hh"

/*
 * HnProperties
 */

class HnPropertiesObj;

class _HNSRTIMP HnProperties: public HnPointer {
private:
    friend class HnPropertiesObj;
    HnProperties(const HnPropertiesObj *ptr) {
	HnPointer::assign((HnObject *)ptr);
    }
    HnPropertiesObj *getObject(void) const {
	return (HnPropertiesObj *)HnPointer::getObject();
    }
public:
    static const HnProperties null;
    HnProperties(void) {}
public:
    friend _HNSRTIMP HnProperties
    new_HnProperties(void);
    
    friend _HNSRTIMP HnProperties
    new_HnProperties(const HnProperties &defaults);

    HnString getProperty(const HnString &key) const;
    HnString getProperty(const HnString &key, const HnString &defaultValue);

    HnString setProperty(const HnString &key, const HnString &value);
    HnString removeProperty(const HnString &key);

    int size(void) const;
    HnString getKeyAt(int index) const;
    HnString getValueAt(int index) const;

    void load(const char *buffer);
    HnString save(void) const;
    void print(void) const;
};

_HNSRTIMP HnProperties
    new_HnProperties(void);
_HNSRTIMP HnProperties
    new_HnProperties(const HnProperties &defaults);

#include "HnSRTree/HnString.hh"

#define HnClass HnProperties
#include "HnSRTree/HnClassArray.hh"

#include "HnSRTree/HnPropertiesObj.hh"

inline HnString
HnProperties::getProperty(const HnString &key) const
{
    return getObject()->getProperty(key);
}

inline HnString
HnProperties::getProperty(const HnString &key, const HnString &defaultValue)
{
    return getObject()->getProperty(key, defaultValue);
}

inline HnString
HnProperties::setProperty(const HnString &key, const HnString &value)
{
    return getObject()->setProperty(key, value);
}

inline HnString
HnProperties::removeProperty(const HnString &key)
{
    return getObject()->removeProperty(key);
}

inline int
HnProperties::size(void) const
{
    return getObject()->size();
}

inline HnString
HnProperties::getKeyAt(int index) const
{
    return getObject()->getKeyAt(index);
}

inline HnString
HnProperties::getValueAt(int index) const
{
    return getObject()->getValueAt(index);
}

inline void
HnProperties::load(const char *buffer)
{
    getObject()->load(buffer);
}

inline HnString
HnProperties::save(void) const
{
    return getObject()->save();
}

inline void
HnProperties::print(void) const
{
    getObject()->print();
}


#endif /* _HnProperties_hh */
