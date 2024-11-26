cmake_minimum_required(VERSION 3.13)  # CMake version check
project(c-cpp-rust-in-depth)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 20)            # Enable c++20 standard


enable_testing()

add_executable(new_target test_package/src/hello_test.cpp)
find_package(GTest REQUIRED)
target_link_libraries(new_target GTest::gtest GTest::gtest_main)