cmake_minimum_required(VERSION 3.16)

project(optimisations LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# optimisation flags
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -march=native")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")

add_executable(optimisations
    src/main.cpp
)