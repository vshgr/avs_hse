cmake_minimum_required(VERSION 3.20)
project(avs_threads)

set(CMAKE_CXX_STANDARD 17)

add_executable(avs_threads main.cpp random.cpp random.h shooter.cpp shooter.h)
