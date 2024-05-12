cmake_minimum_required(VERSION 3.24)
project(yadro)

set(CMAKE_CXX_STANDARD 17)

add_executable(yadro main.cpp src/tape.cpp src/tape.h src/sort.cpp src/sort.h src/ITape.cpp include/ITape.h)
