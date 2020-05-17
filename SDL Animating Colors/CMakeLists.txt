cmake_minimum_required (VERSION 3.8)

project(SDLAnimatingColors)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(SDLAnimatingColors Main.cpp "Screen.cpp")
target_link_libraries(SDLAnimatingColors ${SDL2_LIBRARIES})

add_custom_command(TARGET SDLAnimatingColors POST_BUILD        # Adds a post-build event to MyTest
    COMMAND ${CMAKE_COMMAND} -E copy_if_different    # which executes "cmake - E copy_if_different..."
        "${SDL2_LIB_DIRS}/SDL2.dll"                  # <--this is in-file
        $<TARGET_FILE_DIR:SDLAnimatingColors>)                # <--this is out-file path
