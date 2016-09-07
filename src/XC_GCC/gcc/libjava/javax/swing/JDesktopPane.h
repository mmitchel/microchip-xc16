
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JDesktopPane__
#define __javax_swing_JDesktopPane__

#pragma interface

#include <javax/swing/JLayeredPane.h>
#include <gcj/array.h>

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
    namespace accessibility
    {
        class AccessibleContext;
    }
    namespace swing
    {
        class DesktopManager;
        class JDesktopPane;
        class JInternalFrame;
      namespace plaf
      {
          class DesktopPaneUI;
      }
    }
  }
}

class javax::swing::JDesktopPane : public ::javax::swing::JLayeredPane
{

public:
  JDesktopPane();
  virtual ::javax::swing::plaf::DesktopPaneUI * getUI();
  virtual void setUI(::javax::swing::plaf::DesktopPaneUI *);
  virtual void setDragMode(jint);
  virtual jint getDragMode();
  virtual ::javax::swing::DesktopManager * getDesktopManager();
  virtual void setDesktopManager(::javax::swing::DesktopManager *);
  virtual void updateUI();
  virtual ::java::lang::String * getUIClassID();
  virtual JArray< ::javax::swing::JInternalFrame * > * getAllFrames();
  virtual ::javax::swing::JInternalFrame * getSelectedFrame();
  virtual void setSelectedFrame(::javax::swing::JInternalFrame *);
  virtual JArray< ::javax::swing::JInternalFrame * > * getAllFramesInLayer(jint);
  virtual jboolean isOpaque();
public: // actually protected
  virtual ::java::lang::String * paramString();
private:
  static JArray< ::javax::swing::JInternalFrame * > * getFramesFromComponents(JArray< ::java::awt::Component * > *);
public:
  virtual ::javax::accessibility::AccessibleContext * getAccessibleContext();
public: // actually package-private
  virtual void setUIProperty(::java::lang::String *, ::java::lang::Object *);
private:
  static const jlong serialVersionUID = 766333777224038726LL;
public:
  static const jint LIVE_DRAG_MODE = 0;
  static const jint OUTLINE_DRAG_MODE = 1;
private:
  ::javax::swing::JInternalFrame * __attribute__((aligned(__alignof__( ::javax::swing::JLayeredPane)))) selectedFrame;
public: // actually package-private
  ::javax::swing::DesktopManager * desktopManager;
private:
  jint dragMode;
  jboolean clientDragModeSet;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JDesktopPane__
