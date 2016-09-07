
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_spec_RC2ParameterSpec__
#define __javax_crypto_spec_RC2ParameterSpec__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace crypto
    {
      namespace spec
      {
          class RC2ParameterSpec;
      }
    }
  }
}

class javax::crypto::spec::RC2ParameterSpec : public ::java::lang::Object
{

public:
  RC2ParameterSpec(jint);
  RC2ParameterSpec(jint, JArray< jbyte > *);
  RC2ParameterSpec(jint, JArray< jbyte > *, jint);
  virtual jint getEffectiveKeyBits();
  virtual JArray< jbyte > * getIV();
  virtual jboolean equals(::java::lang::Object *);
  virtual jint hashCode();
private:
  static const jint RC2_IV_LENGTH = 8;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) effectiveKeyBits;
  JArray< jbyte > * iv;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_crypto_spec_RC2ParameterSpec__
