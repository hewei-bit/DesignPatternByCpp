cmake_minimum_required(VERSION 3.0) 

project(OberservePatternpro)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

SET(SRC_LIST
    AllyCenter.cpp
)

include_directories(${CMAKE_SOURCE_DIR}/2.Code)

add_executable(StrategyPattern main.cpp ${SRC_LIST})

# TARGET_LINK_LIBRARIES(test_ThreadPool pthread) 