# Specify the minimum version of CMake
cmake_minimum_required(VERSION 3.16)

#Project's name
project(SimpleCalc)

#Set the C standard you want to use
set(CMAKE_C_STANDARD 99)

include_directories(include)

add_subdirectory(src)

# Alternatively, to include all source files in src directory
# file(GLOB SOURCES "src/*.c")
# add_executable(simplecalc ${SOURCES})

# If you have a subdirectory for additional CMakeLists.txt, use add_subdirectory
# add_subdirectory(src)

# Specify libraries to link if required
# target_link_libraries(simplecalc my_library)



