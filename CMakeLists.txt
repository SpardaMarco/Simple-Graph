cmake_minimum_required(VERSION 3.25)
project(Simple-Graph)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Simple-Graph
        vertex.cpp
        vertex.h graph.cpp graph.h edge.cpp edge.h main.cpp)
