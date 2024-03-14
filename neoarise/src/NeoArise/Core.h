#pragma once

#ifdef NA_PLATFORM_WINDOWS
    #ifdef NA_BUILD_DLL
        #define NEOARISE_API __declspec(dllexport)
    #else
        #define NEOARISE_API __declspec(dllimport)
    #endif
#else
    #error NeoArise only supports Windows!
#endif
