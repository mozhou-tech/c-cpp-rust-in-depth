cmake_minimum_required(VERSION 3.15)
project(PackageTest CXX)
set(CMAKE_CXX_STANDARD 20)


INCLUDE(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
add_executable(example src/hello_test.cpp)
find_package(GTest REQUIRED)

TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${CONAN_LIBS})
enable_testing()

add_test(build/hello_unittest src/hello_test.cpp)
