cmake_minimum_required(VERSION 3.29)
project(linkedlist)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_in_depth
        LinkedList.cpp
        LinkedList.h
        ../../pointer/指针数组.c
        ../../pointer/指针的指针.c)
