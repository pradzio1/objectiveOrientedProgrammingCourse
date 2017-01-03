cmake_minimum_required(VERSION 3.6)
project(Lab)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Person.cpp Person.h Worker.cpp Worker.h Manager.cpp Manager.h File.cpp File.h View.cpp View.h)
add_executable(Lab ${SOURCE_FILES})