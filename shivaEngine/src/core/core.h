#pragma once

#include "../pch.h"

#ifdef PLATFORM_WINDOWS
    #ifdef BUILD_DLL
        #define SHIVA_API __declspec(dllexport)
    #else
        #define SHIVA_API __declspec(dllimport)
    #endif
#else
    #define SHIVA_API
#endif

#ifdef SHIVA_ENABLE_ASSERTS
    #define CORE_ASSERT(x, ...) { if(!(x)) { LOG_CORE_ERROR("Assertion failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
    #define CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)