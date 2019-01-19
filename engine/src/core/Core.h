#pragma once

#include "pcl.h"

#ifdef HZ_PLATFORM_WINDOWS
    #ifdef HZ_BUILD_DLL
        #define HAZEL_API __declspec(dllexport)
    #else
        #define HAZEL_API __declspec(dllimport)
    #endif
#else
    #ifdef HZ_BUILD_DLL
        #define HAZEL_API __attribute__((visibility("default")))
    #else
        #define HAZEL_API __attribute__((visibility("default")))
    #endif
#endif

#ifdef ENABLE_ASSERTS
    #define CORE_ASSERT(x, ...) { if (!(x)) { LOG_ERROR("Asserting failed: {0}", __VA_ARGS__); __debugbreak();}}
#else
    #define CORE_ASSERT(X, ...)
#endif

#define BIT(x) (1 << x)