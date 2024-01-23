# Specify the minimum version of CMake
cmake_minimum_required(VERSION 3.16)

#Project's name
project(SimpleCalc)

#Set the C standard you want to use
set(CMAKE_C_STANDARD 99)

#set(LIBRARY_NAME SimpleCalc)
set(EXECUTABLE_NAME SimpleCalc)

add_subdirectory(src)
#add_subdirectory(include)