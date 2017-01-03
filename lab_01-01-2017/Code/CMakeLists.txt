cmake_minimum_required(VERSION 3.6)
project(Code)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Student.cpp Student.h MyException.cpp MyException.h)
add_executable(Code ${SOURCE_FILES})