/*
 * libiec61850_platform_includes.h
 */

#ifndef LIBIEC61850_PLATFORM_INCLUDES_H_
#define LIBIEC61850_PLATFORM_INCLUDES_H_

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#ifdef WIN32
#include ".\platform\win32\stdint.h"
#include ".\platform\win32\stdbool.h"
#else
#include <stdbool.h>
#include <stdint.h>
#endif

#ifdef _WIN32
#ifdef BUILD_DLL
  #define API __declspec(dllexport)
#else
  #define API __declspec(dllimport)
#endif

/* Define calling convention in one place, for convenience. */
#define STDCALL __cdecl
#else
#define API
#define STDCALL
#endif

#endif /* LIBIEC61850_PLATFORM_INCLUDES_H_ */
