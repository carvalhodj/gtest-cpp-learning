project(google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(google_tests_run HelloTest.cpp)
target_link_libraries(google_tests_run gtest gtest_main Operations_lib)