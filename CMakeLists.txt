cmake_minimum_required(VERSION 3.29)
project(cpp_in_depth)

set(CMAKE_CXX_STANDARD 14)

include_directories(datastructures/linkedlist)

add_executable(cpp_in_depth
        datastructures/linkedlist/LinkedList.cpp
        datastructures/linkedlist/LinkedList.h)
