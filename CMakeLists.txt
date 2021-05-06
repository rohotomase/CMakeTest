# CMakeList.txt : CMake project for CMakeTest, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeTest")

include ("cmake/gtest.cmake")
include (GoogleTest)

# Add source to this project's executable.
add_executable (CMakeTest "CMakeTest.cpp" "CMakeTest.h")
target_link_libraries(CMakeTest PRIVATE gtest_main)
enable_testing()
gtest_discover_tests(CMakeTest)
