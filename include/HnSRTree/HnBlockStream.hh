/*
 * HnBlockStream.hh
 *
 * DO NOT EDIT THIS FILE!
 *
 * This file is automatically generated by obj2ptr.
 * 2010/03/09 03:26:43
 */

#ifndef _HnBlockStream_hh
#define _HnBlockStream_hh

#ifndef _HNSRTIMP
#ifdef _MSC_VER
#define _HNSRTIMP _declspec(dllimport)
#else
#define _HNSRTIMP
#endif
#endif

#include "HnSRTree/HnPointer.hh"

/*
 * HnBlockStream
 */

class HnBlockStreamObj;

class _HNSRTIMP HnBlockStream: public HnPointer {
private:
    friend class HnBlockStreamObj;
    HnBlockStream(const HnBlockStreamObj *ptr) {
	HnPointer::assign((HnObject *)ptr);
    }
    HnBlockStreamObj *getObject(void) const {
	return (HnBlockStreamObj *)HnPointer::getObject();
    }
public:
    static const HnBlockStream null;
    HnBlockStream(void) {}
public:
#ifdef _MSC_VER
    static const int CHAR_SIZE;
    static const int SHORT_SIZE;
    static const int INT_SIZE;
    static const int LONG_SIZE;
    static const int FLOAT_SIZE;
    static const int DOUBLE_SIZE;
#else
    static const int CHAR_SIZE = sizeof(char);
    static const int SHORT_SIZE = sizeof(short);
    static const int INT_SIZE = sizeof(int);
    static const int LONG_SIZE = sizeof(long);
    static const int FLOAT_SIZE = sizeof(float);
    static const int DOUBLE_SIZE = sizeof(double);
#endif


    friend _HNSRTIMP HnBlockStream
    new_HnBlockStream(int size);
    friend _HNSRTIMP HnBlockStream
    new_HnBlockStream(const HnBlockStream &parent, int offset, int size);

    /* attributes */
    int getSize(void) const;
    char *toCharArray(void) const;

    /* seek */
    void rewind(void);
    void seek(int newPos);
    void skip(int length);
    int getPosition(void) const;

    /* read */
    char readChar(void);
    short readShort(void);
    int readInt(void);
    long readLong(void);
    float readFloat(void);
    double readDouble(void);
    void readCharArray(char *charArray, int length);

    /* write */
    void writeChar(char value);
    void writeShort(short value);
    void writeInt(int value);
    void writeLong(long value);
    void writeFloat(float value);
    void writeDouble(double value);
    void writeCharArray(const char *charArray, int length);
};

_HNSRTIMP HnBlockStream
    new_HnBlockStream(int size);
_HNSRTIMP HnBlockStream
    new_HnBlockStream(const HnBlockStream &parent, int offset, int size);

#include "HnSRTree/HnString.hh"

#define HnClass HnBlockStream
#include "HnSRTree/HnClassArray.hh"

#include "HnSRTree/HnBlockStreamObj.hh"

inline int
HnBlockStream::getSize(void) const
{
    return getObject()->getSize();
}

inline char *
HnBlockStream::toCharArray(void) const
{
    return getObject()->toCharArray();
}

inline void
HnBlockStream::rewind(void)
{
    getObject()->rewind();
}

inline void
HnBlockStream::seek(int newPos)
{
    getObject()->seek(newPos);
}

inline void
HnBlockStream::skip(int length)
{
    getObject()->skip(length);
}

inline int
HnBlockStream::getPosition(void) const
{
    return getObject()->getPosition();
}

inline char
HnBlockStream::readChar(void)
{
    return getObject()->readChar();
}

inline short
HnBlockStream::readShort(void)
{
    return getObject()->readShort();
}

inline int
HnBlockStream::readInt(void)
{
    return getObject()->readInt();
}

inline long
HnBlockStream::readLong(void)
{
    return getObject()->readLong();
}

inline float
HnBlockStream::readFloat(void)
{
    return getObject()->readFloat();
}

inline double
HnBlockStream::readDouble(void)
{
    return getObject()->readDouble();
}

inline void
HnBlockStream::readCharArray(char *charArray, int length)
{
    getObject()->readCharArray(charArray, length);
}

inline void
HnBlockStream::writeChar(char value)
{
    getObject()->writeChar(value);
}

inline void
HnBlockStream::writeShort(short value)
{
    getObject()->writeShort(value);
}

inline void
HnBlockStream::writeInt(int value)
{
    getObject()->writeInt(value);
}

inline void
HnBlockStream::writeLong(long value)
{
    getObject()->writeLong(value);
}

inline void
HnBlockStream::writeFloat(float value)
{
    getObject()->writeFloat(value);
}

inline void
HnBlockStream::writeDouble(double value)
{
    getObject()->writeDouble(value);
}

inline void
HnBlockStream::writeCharArray(const char *charArray, int length)
{
    getObject()->writeCharArray(charArray, length);
}


#endif /* _HnBlockStream_hh */