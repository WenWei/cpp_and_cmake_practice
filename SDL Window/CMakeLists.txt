cmake_minimum_required (VERSION 3.8)

project(SDLWindow)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(SDLWindow Main.cpp)
target_link_libraries(SDLWindow ${SDL2_LIBRARIES})

add_custom_command(TARGET SDLWindow POST_BUILD        # Adds a post-build event to MyTest
    COMMAND ${CMAKE_COMMAND} -E copy_if_different    # which executes "cmake - E copy_if_different..."
        "${SDL2_LIB_DIRS}/SDL2.dll"                  # <--this is in-file
        $<TARGET_FILE_DIR:SDLWindow>)                # <--this is out-file path
