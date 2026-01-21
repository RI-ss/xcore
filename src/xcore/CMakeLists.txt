cmake_minimum_required(VERSION 3.16)
# project(core VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(xcore main.cpp field.h)

target_compile_definitions(xcore PRIVATE NOMINMAX)

target_include_directories(xcore PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../../third_party)
target_include_directories(xcore PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../plugins)
install(TARGETS xcore DESTINATION .)



include(FetchContent)
FetchContent_Declare(ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/FTXUI
  GIT_TAG v6.1.9  # 替换为版本、标签或提交哈希
)
FetchContent_MakeAvailable(ftxui)
target_link_libraries(xcore
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component
)
 
 

set_target_properties(xcore PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/bin
    RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin
)