cmake_minimum_required(VERSION 3.13)
project(Triangulos C)

set(CMAKE_C_STANDARD 99)

add_executable(Triangulos main.c)

target_link_libraries(Triangulos m)