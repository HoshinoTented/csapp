cmake_minimum_required(VERSION 3.17)
project(csapp C)

set(CMAKE_C_STANDARD 99)

add_executable(csapp main.c)
target_include_directories(csapp PRIVATE src)
