cmake_minimum_required(VERSION 3.14)
project(gravity)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(raylib GIT_REPOSITORY https://github.com/raysan5/raylib GIT_TAG 6.2)

FetchContent_MakeAvailable(raylib)

add_executable(gravity main.cpp
        particle.h
        simulation.h)

target_link_libraries(gravity PRIVATE raylib)
