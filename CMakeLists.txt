cmake_minimum_required(VERSION 3.16)
project(xcore VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)



if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    add_compile_definitions(_M_X64=100 _WIN64 _AMD64_)
else()
    add_compile_definitions(_M_IX86=600 _X86_)
endif()

add_subdirectory(src/xcore)
add_subdirectory(src/plugins/p1)
add_subdirectory(src/plugins/p2)
