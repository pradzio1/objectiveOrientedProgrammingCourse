cmake_minimum_required(VERSION 3.6)
project(Lab1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Employee.cpp Employee.h ItSpecialist.cpp ItSpecialist.h Manager.cpp Manager.h)
add_executable(Lab1 ${SOURCE_FILES})