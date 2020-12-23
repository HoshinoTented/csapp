cmake_minimum_required(VERSION 3.17)
project(csapp C)

set(CMAKE_C_STANDARD 99)

add_executable(csapp main.c)
target_include_directories(csapp PRIVATE src)
add_executable(prac-3.43 src/prac-3.43.c)
add_executable(prac-3.44 src/prac-3.44.c)
add_executable(prac-3.45 src/prac-3.45.c)
add_executable(prac-3.46 src/prac-3.46.c)
add_executable(test-3.49 src/prac-3.49.c)
add_executable(test-3.50 src/prac-3.50.c)