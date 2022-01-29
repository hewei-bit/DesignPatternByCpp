cmake_minimum_required(VERSION 3.0) 

project(TemplateMethodPattern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

include_directories(${CMAKE_SOURCE_DIR}/inc)

add_executable(TemplateMethod main.cpp)