#ifndef PLUGIN_INTERFACE_H
#define PLUGIN_INTERFACE_H

#ifdef _WIN32
    #ifdef PLUGIN_EXPORTS
        #define PLUGIN_API __declspec(dllexport)
    #else
        #define PLUGIN_API __declspec(dllimport)
    #endif
#else
    #ifdef PLUGIN_EXPORTS
        #define PLUGIN_API __attribute__((visibility("default")))
    #else
        #define PLUGIN_API
    #endif
#endif

extern "C" {
    PLUGIN_API const char* get_name();
    PLUGIN_API int get_version();
    PLUGIN_API void initialize();
    PLUGIN_API void plugin_shutdown();
}

#endif
