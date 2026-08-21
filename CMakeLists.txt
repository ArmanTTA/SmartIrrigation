cmake_minimum_required(VERSION 3.29)
project(SmartIrrigation)

set(CMAKE_CXX_STANDARD 26)

add_executable(SmartIrrigation main.cpp
        phase1.h
        phase1.cpp)
