
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_swing_text_html_CombinedAttributes__
#define __gnu_javax_swing_text_html_CombinedAttributes__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace swing
      {
        namespace text
        {
          namespace html
          {
              class CombinedAttributes;
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class AttributeSet;
      }
    }
  }
}

class gnu::javax::swing::text::html::CombinedAttributes : public ::java::lang::Object
{

public:
  static ::javax::swing::text::AttributeSet * combine(::javax::swing::text::AttributeSet *, ::javax::swing::text::AttributeSet *);
private:
  CombinedAttributes(::javax::swing::text::AttributeSet *, ::javax::swing::text::AttributeSet *);
public:
  virtual jboolean containsAttribute(::java::lang::Object *, ::java::lang::Object *);
  virtual jboolean containsAttributes(::javax::swing::text::AttributeSet *);
  virtual ::javax::swing::text::AttributeSet * copyAttributes();
  virtual ::java::lang::Object * getAttribute(::java::lang::Object *);
  virtual jint getAttributeCount();
  virtual ::java::util::Enumeration * getAttributeNames();
  virtual ::javax::swing::text::AttributeSet * getResolveParent();
  virtual jboolean isDefined(::java::lang::Object *);
  virtual jboolean isEqual(::javax::swing::text::AttributeSet *);
public: // actually package-private
  ::javax::swing::text::AttributeSet * __attribute__((aligned(__alignof__( ::java::lang::Object)))) a;
  ::javax::swing::text::AttributeSet * b;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_swing_text_html_CombinedAttributes__
