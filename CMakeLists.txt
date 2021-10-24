cmake_minimum_required(VERSION 3.20)
project(avs_plants_02)

set(CMAKE_CXX_STANDARD 17)

# Source files list
set(SOURCE_FILES
        # Headers
        bush.h
        flower.h
        tree.h
        plant.h
        container.h

        # Sources
        bush.cpp
        flower.cpp
        tree.cpp
        plant.cpp
        container.cpp
        main.cpp
        )
add_executable(avs_plants_01 ${SOURCE_FILES})
