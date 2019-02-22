cmake_minimum_required(VERSION 3.13)
project(RaizesPol C)

set(CMAKE_C_STANDARD 99)

add_executable(RaizesPol main.c)

target_link_libraries(RaizesPol m)
