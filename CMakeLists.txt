cmake_minimum_required(VERSION 3.24)
project(yadro)

set(CMAKE_CXX_STANDARD 17)

add_executable(yadro main.cpp tape.cpp tape.h sort.cpp sort.h ITape.cpp ITape.h)
