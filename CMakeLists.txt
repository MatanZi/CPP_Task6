cmake_minimum_required(VERSION 3.10)
project(Task6_CPP)

set(CMAKE_CXX_STANDARD 11)

add_executable(Task6_CPP main.cpp Board.cpp Board.h IllegalCoordinateException.cpp IllegalCoordinateException.h Square.cpp Square.h IllegalCharException.cpp IllegalCharException.h)