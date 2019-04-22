cmake_minimum_required (VERSION 2.6)

project (MainBinary)


# The version number.
set (MainBinary_VERSION_MAJOR 1)
set (MainBinary_VERSION_MINOR 0)


# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/main.h.in"
  "${PROJECT_BINARY_DIR}/main.h"
)

# add the binary tree to the search path for include files
# so that we will find *.h
include_directories("${PROJECT_BINARY_DIR}")


# add the executable
add_executable(MainBinary main.cpp)
