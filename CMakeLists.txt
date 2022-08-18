cmake_minimum_required(VERSION 3.23)
project(C__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(C__
        conditions.cpp
        float.cpp
        input.cpp
        intro.cpp
        namespace.cpp
        typecasting.cpp)

add_executable(conditions conditions.cpp)
add_executable(switch switch.cpp)
add_executable(loop loop.cpp)