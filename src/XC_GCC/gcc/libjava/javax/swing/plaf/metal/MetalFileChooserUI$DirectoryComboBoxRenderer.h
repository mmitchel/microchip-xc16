
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxRenderer__
#define __javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxRenderer__

#pragma interface

#include <javax/swing/DefaultListCellRenderer.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JFileChooser;
        class JList;
      namespace plaf
      {
        namespace metal
        {
            class MetalFileChooserUI;
            class MetalFileChooserUI$DirectoryComboBoxRenderer;
            class MetalFileChooserUI$IndentIcon;
        }
      }
    }
  }
}

class javax::swing::plaf::metal::MetalFileChooserUI$DirectoryComboBoxRenderer : public ::javax::swing::DefaultListCellRenderer
{

public:
  MetalFileChooserUI$DirectoryComboBoxRenderer(::javax::swing::plaf::metal::MetalFileChooserUI *, ::javax::swing::JFileChooser *);
  virtual ::java::awt::Component * getListCellRendererComponent(::javax::swing::JList *, ::java::lang::Object *, jint, jboolean, jboolean);
private:
  ::javax::swing::plaf::metal::MetalFileChooserUI$IndentIcon * __attribute__((aligned(__alignof__( ::javax::swing::DefaultListCellRenderer)))) indentIcon;
public: // actually package-private
  ::javax::swing::plaf::metal::MetalFileChooserUI * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_metal_MetalFileChooserUI$DirectoryComboBoxRenderer__
