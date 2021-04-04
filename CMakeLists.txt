cmake_minimum_required(VERSION 3.14)
project(CS3353-ALGOS-MIDTERM)
set (EXE_NAME midterm)

set(CMAKE_CXX_STANDARD 17)

# set(CMAKE_BUILD_TYPE Debug)

if (NOT CMAKE_BUILD_TYPE)
  set (CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS "-g -Wall -Wextra")

add_executable(${EXE_NAME} ./src/RedBlackTree.cpp ./src/main.cpp)