cmake_minimum_required(VERSION 3.20)
project(avs_plants_01 C)

set(CMAKE_C_STANDARD 99)
# Source files list
set(SOURCE_FILES
        # Headers
        bush.h
        flower.h
        tree.h
        plant.h
        container.h

        # Sources
        bush.c
        flower.c
        tree.c
        plant.c
        container.c
        main.c
        )
add_executable(avs_plants_01 ${SOURCE_FILES})
