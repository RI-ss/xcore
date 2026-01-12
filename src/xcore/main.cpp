#include <iostream>
#include <libloaderapi.h>
#include <plugin_interface.h>
#include <Windows.h>
#include <winnt.h>
int main() {
    std::cout << "Hello World from xcore" << std::endl;
    
    auto p1=LoadLibrary(TEXT("plugins/p1.dll"));
    if(p1!=NULL) {
        auto get_name=(const char* (*)())GetProcAddress(p1, "get_name");
        if(get_name) {
            std::cout << "Plugin1 name: " << get_name() << std::endl;
        }else{
            std::cout << "get_name not found" << std::endl;
        }
    }else{
        std::cout << "Plugin1 load failed" << std::endl;
    }
    

    return 0;
}
