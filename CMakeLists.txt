cmake_minimum_required(VERSION 3.20)
project(EstructurasDeDatos)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -g -fsanitize=address,undefined")
add_executable(test_array_dinamico array_dinamico/test_array_dinamico.cpp)

   
