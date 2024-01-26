
#include <dlfcn.h>
#include <iostream>
#include "simple_class.hpp"

using namespace std;

int main(int argc, char **argv)
{
  /* on Linux, use "./myclass.so" */
  void* handle = dlopen("myclass.so", RTLD_LAZY);

  SimpleClass* (*create)();
  void (*destroy)(SimpleClass*);

  create = (SimpleClass* (*)())dlsym(handle, "create_object");
  destroy = (void (*)(SimpleClass*))dlsym(handle, "destroy_object");

  SimpleClass* myClass = (SimpleClass*)create();
  myClass->set_name("gerrit");
  destroy( myClass );
}