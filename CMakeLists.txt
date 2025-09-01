cmake_minimum_required(VERSION 3.10)
project(GravityGame)

set(CMAKE_CXX_STANDARD 17)

find_package(SDL3 REQUIRED)
find_package(SDL3_image REQUIRED)

add_executable(gravity_game src/main.cpp
        src/physics.h
        src/entity.h
        src/structs.h
        src/input.h)

target_link_libraries(gravity_game
    SDL3::SDL3
    SDL3_image::SDL3_image
)
