#pragma once

#ifdef PLATFORM_WINDOWS
    #ifdef BUILD_DLL
        #define SHIVA_API __declspec(dllexport)
    #else
        #define SHIVA_API __declspec(dllimport)
    #endif
#else
    #define SHIVA_API
#endif