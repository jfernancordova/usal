cmake_minimum_required(VERSION 3.14)
project(usal)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(cmake-build-debug)
include_directories(Programming)

add_executable(usal
        Programming/introduction.c)
