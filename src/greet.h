#pragma once

#ifdef WIN32
  #define GREET_EXPORT __declspec(dllexport)
#else
  #define GREET_EXPORT
#endif

HELLO_EXPORT void greet();
