cmake_minimum_required(VERSION 3.6)
project(Lab)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Node.cpp Node.h Node1D.cpp Node1D.h Node2D.cpp Node2D.h Node3D.cpp Node3D.h Element.cpp Element.h main.cpp)
add_executable(Lab ${SOURCE_FILES})