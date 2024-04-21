cmake_minimum_required(VERSION 3.28)
project(vars_escopo C)

set(CMAKE_C_STANDARD 11)

add_executable(vars_escopo hello.c
        vars.c complex.c)
