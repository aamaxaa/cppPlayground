cmake_minimum_required(VERSION 3.0)
project(cppPlay)
add_executable(play main.cpp Matrix.cpp)
include_directories(cppPlay ${CMAKE_SOURCE_DIR})