
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_BooleanHolder__
#define __org_omg_CORBA_BooleanHolder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class BooleanHolder;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class org::omg::CORBA::BooleanHolder : public ::java::lang::Object
{

public:
  BooleanHolder();
  BooleanHolder(jboolean);
  void _read(::org::omg::CORBA::portable::InputStream *);
  ::org::omg::CORBA::TypeCode * _type();
  void _write(::org::omg::CORBA::portable::OutputStream *);
private:
  static ::org::omg::CORBA::TypeCode * t_boolean;
public:
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_BooleanHolder__
