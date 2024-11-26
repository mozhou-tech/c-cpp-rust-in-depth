cmake_minimum_required(VERSION 3.13)  # CMake version check
project(c-cpp-rust-in-depth)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 20)            # Enable c++20 standard

# Initialize Conan #############################################################
INCLUDE(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
CONAN_BASIC_SETUP()

enable_testing()

add_executable(new_target test_package/src/hello_test.cpp)
