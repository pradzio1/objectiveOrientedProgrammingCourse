cmake_minimum_required(VERSION 3.6)
project(Lab2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Element.cpp Element.h Node.cpp Node.h Node1D.cpp Node1D.h Node2D.cpp Node2D.h Node3D.cpp Node3D.h)
add_executable(Lab2 ${SOURCE_FILES})