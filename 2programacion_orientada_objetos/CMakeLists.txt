cmake_minimum_required(VERSION 3.29)
project(CLion)

set(CMAKE_CXX_STANDARD 20)

add_executable(CLion
        src/Persona.cpp
        src/Persona.h
        src/Estudiante.cpp
        src/Estudiante.h
        src/main.cpp)
