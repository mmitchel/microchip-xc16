
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_java2d_Segment__
#define __gnu_java_awt_java2d_Segment__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace java2d
        {
            class Segment;
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
          class Point2D;
      }
    }
  }
}

class gnu::java::awt::java2d::Segment : public ::java::lang::Object
{

public:
  Segment();
  virtual void add(::gnu::java::awt::java2d::Segment *);
  virtual void reverseAll();
  virtual ::java::lang::String * toString();
public: // actually protected
  virtual JArray< jdouble > * normal(jdouble, jdouble, jdouble, jdouble);
public:
  virtual void reverse() = 0;
  virtual JArray< ::gnu::java::awt::java2d::Segment * > * getDisplacedSegments(jdouble) = 0;
  virtual JArray< jdouble > * cp1() = 0;
  virtual JArray< jdouble > * cp2() = 0;
  ::java::awt::geom::Point2D * __attribute__((aligned(__alignof__( ::java::lang::Object)))) P1;
  ::java::awt::geom::Point2D * P2;
  ::gnu::java::awt::java2d::Segment * first;
  ::gnu::java::awt::java2d::Segment * next;
  ::gnu::java::awt::java2d::Segment * last;
public: // actually protected
  jdouble radius;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_java2d_Segment__
