cmake_minimum_required (VERSION 3.8)

#link_directories(${CMAKE_ROOT_SOURCE_DIR})
#include_directories(${CMAKE_ROOT_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR})


set(APP_EXE TestLibrary)
project(${APP_EXE})
#add_library(animal STATIC Cat.cpp)
add_executable(${APP_EXE} TestLibrary.cpp)

target_link_libraries(${APP_EXE} animal)