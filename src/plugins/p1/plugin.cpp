#include <iostream>
#include "plugin_interface.h"

extern "C" {
    PLUGIN_API const char* get_name() {
        return "Plugin1";
    }

    PLUGIN_API int get_version() {
        return 1;
    }

    PLUGIN_API void initialize() {
        std::cout << "Plugin1 initialized" << std::endl;
    }

    PLUGIN_API void plugin_shutdown() {
        std::cout << "Plugin1 shutdown" << std::endl;
    }
}
