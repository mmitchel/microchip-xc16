
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_BadBinaryOpValueExpException__
#define __javax_management_BadBinaryOpValueExpException__

#pragma interface

#include <java/lang/Exception.h>
extern "Java"
{
  namespace javax
  {
    namespace management
    {
        class BadBinaryOpValueExpException;
        class ValueExp;
    }
  }
}

class javax::management::BadBinaryOpValueExpException : public ::java::lang::Exception
{

public:
  BadBinaryOpValueExpException(::javax::management::ValueExp *);
  virtual ::javax::management::ValueExp * getExp();
  virtual ::java::lang::String * toString();
private:
  static const jlong serialVersionUID = 5068475589449021227LL;
  ::javax::management::ValueExp * __attribute__((aligned(__alignof__( ::java::lang::Exception)))) exp;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_management_BadBinaryOpValueExpException__
