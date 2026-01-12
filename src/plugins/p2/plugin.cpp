#include <iostream>
#include "plugin_interface.h"

extern "C" {
    PLUGIN_API const char* get_name() {
        return "Plugin2";
    }

    PLUGIN_API int get_version() {
        return 2;
    }

    PLUGIN_API void initialize() {
        std::cout << "Plugin2 initialized" << std::endl;
    }

    PLUGIN_API void plugin_shutdown() {
        std::cout << "Plugin2 shutdown" << std::endl;
    }
}
