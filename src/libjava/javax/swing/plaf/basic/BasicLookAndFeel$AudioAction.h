
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicLookAndFeel$AudioAction__
#define __javax_swing_plaf_basic_BasicLookAndFeel$AudioAction__

#pragma interface

#include <javax/swing/AbstractAction.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class ActionEvent;
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
            class BasicLookAndFeel;
            class BasicLookAndFeel$AudioAction;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicLookAndFeel$AudioAction : public ::javax::swing::AbstractAction
{

public: // actually package-private
  BasicLookAndFeel$AudioAction(::javax::swing::plaf::basic::BasicLookAndFeel *, ::java::lang::Object *);
public:
  virtual void actionPerformed(::java::awt::event::ActionEvent *);
public: // actually package-private
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::javax::swing::AbstractAction)))) key;
  ::javax::swing::plaf::basic::BasicLookAndFeel * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicLookAndFeel$AudioAction__
