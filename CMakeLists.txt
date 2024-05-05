cmake_minimum_required(VERSION 3.28)
project(gameboy C)

set(CMAKE_C_STANDARD 11)

include_directories(C:\\gbdk\\include)
link_directories(C:\\gbdk\\lib)

add_executable(gameboy main.c)
