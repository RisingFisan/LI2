cmake_minimum_required(VERSION 3.13)
project(Exercicio3)

set(CMAKE_C_STANDARD 99)

include_directories(.)

add_executable(Exercicio3
        CMakeLists.txt
        main.c
        nib.c
        nib.h)
