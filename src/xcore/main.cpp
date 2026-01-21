#include "catch2/catch.hpp"
#include "ftxui/dom/elements.hpp"
#include "ftxui/screen/screen.hpp"
#include "plugin_interface.h"
#include "json/json.hpp"
#include <Windows.h>
#include <iostream>
#include <libloaderapi.h>
#include <winnt.h>


#include "field.h"

int main() {

  // auto p1=LoadLibrary(TEXT("plugins/p1.dll"));
  // if(p1!=NULL) {
  //     auto get_name=(const char* (*)())GetProcAddress(p1, "get_name");
  //     if(get_name) {
  //         std::cout << "Plugin1 name: " << get_name() << std::endl;
  //     }else{
  //         std::cout << "get_name not found" << std::endl;
  //     }
  // }else{
  //     std::cout << "Plugin1 load failed" << std::endl;
  // }

  using namespace ftxui;
  Element documentation = hbox({
      text("left") | border,
      text("middle") | border|flex,
      text("right") | border,
  });
  auto screen=Screen::Create(Dimension::Full(),Dimension::Fit(documentation));
  Render(screen,documentation);
  screen.Print();
  return 0;
}

// TEST_CASE("T1"){
//         nlohmann::json j={
//         {"name", "Plugin1"},
//         {"version", 1}
//     };
//     REQUIRE(j["name"]=="Plugin1");
// }