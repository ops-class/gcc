
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_ServerHandshake$RSA_PSKExchange__
#define __gnu_javax_net_ssl_provider_ServerHandshake$RSA_PSKExchange__

#pragma interface

#include <gnu/javax/net/ssl/provider/DelegatedTask.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class ServerHandshake;
              class ServerHandshake$RSA_PSKExchange;
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace crypto
    {
        class SecretKey;
    }
  }
}

class gnu::javax::net::ssl::provider::ServerHandshake$RSA_PSKExchange : public ::gnu::javax::net::ssl::provider::DelegatedTask
{

public: // actually package-private
  ServerHandshake$RSA_PSKExchange(::gnu::javax::net::ssl::provider::ServerHandshake *, JArray< jbyte > *, ::javax::crypto::SecretKey *);
public:
  virtual void implRun();
private:
  JArray< jbyte > * __attribute__((aligned(__alignof__( ::gnu::javax::net::ssl::provider::DelegatedTask)))) encryptedPreMasterSecret;
  ::javax::crypto::SecretKey * psKey;
public: // actually package-private
  ::gnu::javax::net::ssl::provider::ServerHandshake * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_ServerHandshake$RSA_PSKExchange__
