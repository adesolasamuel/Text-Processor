cmake_minimum_required(VERSION 3.24)
project(Text_Processor)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Text_Processor
        main.cpp
        TextProcessor.cpp
        TextProcessor.h)
