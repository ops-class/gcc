
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_GtkTextFieldPeer__
#define __gnu_java_awt_peer_gtk_GtkTextFieldPeer__

#pragma interface

#include <gnu/java/awt/peer/gtk/GtkComponentPeer.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class GtkTextFieldPeer;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class AWTEvent;
        class Dimension;
        class Rectangle;
        class TextField;
      namespace im
      {
          class InputMethodRequests;
      }
    }
  }
}

class gnu::java::awt::peer::gtk::GtkTextFieldPeer : public ::gnu::java::awt::peer::gtk::GtkComponentPeer
{

public: // actually package-private
  virtual void create(jint);
  virtual void gtkWidgetSetBackground(jint, jint, jint);
  virtual void gtkWidgetSetForeground(jint, jint, jint);
public:
  virtual void connectSignals();
  virtual jint getCaretPosition();
  virtual void setCaretPosition(jint);
  virtual jint getSelectionStart();
  virtual jint getSelectionEnd();
  virtual ::java::lang::String * getText();
  virtual void select(jint, jint);
  virtual void setEditable(jboolean);
  virtual void setText(::java::lang::String *);
  virtual jint getIndexAtPoint(jint, jint);
  virtual ::java::awt::Rectangle * getCharacterBounds(jint);
  virtual jlong filterEvents(jlong);
public: // actually package-private
  virtual void create();
  virtual jint gtkEntryGetBorderWidth();
public:
  GtkTextFieldPeer(::java::awt::TextField *);
  virtual ::java::awt::Dimension * getMinimumSize(jint);
  virtual ::java::awt::Dimension * getPreferredSize(jint);
  virtual void setEchoChar(jchar);
  virtual ::java::awt::Dimension * minimumSize(jint);
  virtual ::java::awt::Dimension * preferredSize(jint);
  virtual void setEchoCharacter(jchar);
  virtual void handleEvent(::java::awt::AWTEvent *);
  virtual ::java::awt::im::InputMethodRequests * getInputMethodRequests();
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_GtkTextFieldPeer__
