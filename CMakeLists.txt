cmake_minimum_required(VERSION 3.27)
project(Zoo.c C)

set(CMAKE_C_STANDARD 11)

add_executable(Zoo.c main.c
        Zoo.c
        Bear.h
        Bear.c
        Penguin.h
        Penguin.c
        Lion.h
        Lion.c
        Employee.h
        Employee.c
        Animal.h
        Animal.c
        Zoo.h
        Cage.c
        def.h
        def.h
        list.h
        list.c
        General.h
        General.c)
