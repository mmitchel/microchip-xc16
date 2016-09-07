
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_im_InputContext__
#define __java_awt_im_InputContext__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class AWTEvent;
        class Component;
      namespace im
      {
          class InputContext;
        namespace spi
        {
            class InputMethod;
        }
      }
    }
  }
}

class java::awt::im::InputContext : public ::java::lang::Object
{

public: // actually protected
  InputContext();
public:
  static ::java::awt::im::InputContext * getInstance();
  virtual jboolean selectInputMethod(::java::util::Locale *);
  virtual ::java::util::Locale * getLocale();
  virtual void setCharacterSubsets(JArray< ::java::lang::Character$Subset * > *);
  virtual void setCompositionEnabled(jboolean);
  virtual jboolean isCompositionEnabled();
  virtual void reconvert();
  virtual void dispatchEvent(::java::awt::AWTEvent *);
  virtual void removeNotify(::java::awt::Component *);
  virtual void endComposition();
  virtual void dispose();
  virtual ::java::lang::Object * getInputMethodControlObject();
private:
  static ::java::util::ArrayList * descriptors;
  ::java::awt::im::spi::InputMethod * __attribute__((aligned(__alignof__( ::java::lang::Object)))) im;
  ::java::util::HashMap * recent;
  JArray< ::java::lang::Character$Subset * > * subsets;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_im_InputContext__
