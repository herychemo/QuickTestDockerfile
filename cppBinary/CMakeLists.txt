cmake_minimum_required (VERSION 2.6)

# Define project
project (MainBinary)

# The version number.
set (MainBinary_VERSION_MAJOR 1)
set (MainBinary_VERSION_MINOR 0)


# place binaries and libraries according to GNU standards
include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

# we use this to get code coverage
if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
endif()


# define lib and include directories
link_directories(/usr/local/lib/ /usr/src/ /usr/lib/)
include_directories(/usr/local/include/ /usr/src/ /usr/lib/)



# configure a header file to pass some of the CMake settings to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/src/main.h.in"
  "${PROJECT_BINARY_DIR}/main.h"
)


# add the binary tree to the search path for include files
# so that we will find *.h
include_directories("${PROJECT_BINARY_DIR}")



# Binary Sources
add_subdirectory(src)


# Test Sources
enable_testing()
add_subdirectory(test)
