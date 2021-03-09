cmake_minimum_required(VERSION 3.17)
project(treasurehuntproject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(treasurehuntproject
        encryption_level.c
        ITProject.c
        level2main.c
        README.md)
