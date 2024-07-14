cmake_minimum_required(VERSION 3.28.1)
project(hello)

set(CMAKE_CXX_STANDARD 17)

add_executable(hello main.cpp)

# Arithmetic Lib
include_directories(arithmetic_libs)
add_subdirectory(arithmetic_libs)
target_link_libraries(hello Operations_lib)

# Google Test Framework Dir
add_subdirectory(google_tests)
