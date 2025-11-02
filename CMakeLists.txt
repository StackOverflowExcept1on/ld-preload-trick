cmake_minimum_required(VERSION 3.12)
project(ld-preload-trick)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(demo)
add_subdirectory(hook)
