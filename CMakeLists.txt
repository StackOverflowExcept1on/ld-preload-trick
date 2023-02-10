cmake_minimum_required(VERSION 3.11)
project(ld-preload-trick)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(demo)
add_subdirectory(hook)
