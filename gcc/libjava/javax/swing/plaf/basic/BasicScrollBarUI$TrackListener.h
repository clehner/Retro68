
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicScrollBarUI$TrackListener__
#define __javax_swing_plaf_basic_BasicScrollBarUI$TrackListener__

#pragma interface

#include <java/awt/event/MouseAdapter.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class MouseEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicScrollBarUI;
            class BasicScrollBarUI$TrackListener;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicScrollBarUI$TrackListener : public ::java::awt::event::MouseAdapter
{

public: // actually protected
  BasicScrollBarUI$TrackListener(::javax::swing::plaf::basic::BasicScrollBarUI *);
public:
  virtual void mouseDragged(::java::awt::event::MouseEvent *);
  virtual void mouseMoved(::java::awt::event::MouseEvent *);
  virtual void mousePressed(::java::awt::event::MouseEvent *);
  virtual void mouseReleased(::java::awt::event::MouseEvent *);
public: // actually package-private
  virtual jboolean shouldScroll(jint);
public: // actually protected
  jint __attribute__((aligned(__alignof__( ::java::awt::event::MouseAdapter)))) currentMouseX;
  jint currentMouseY;
  jint offset;
public: // actually package-private
  ::javax::swing::plaf::basic::BasicScrollBarUI * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicScrollBarUI$TrackListener__