cmake_minimum_required(VERSION 3.6)
project(Lab)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Person.cpp Person.h ItSpecialist.cpp ItSpecialist.h Manager.cpp Manager.h Employee.cpp Employee.h)
add_executable(Lab ${SOURCE_FILES})