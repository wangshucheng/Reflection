cmake_minimum_required(VERSION 3.21)
project(TestCMake VERSION 0.1.0)
message("CMAKE_PROJECT_VERSION = ${CMAKE_PROJECT_VERSION}")

set(CMAKE_CXX_STANDARD 17)

add_executable(TestCMake main.cpp)
