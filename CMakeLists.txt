cmake_minimum_required(VERSION 3.29)
project(CLion)

set(CMAKE_CXX_STANDARD 20)

add_executable(CLion src/1_principales_caracteristicas_cpp/main.cpp
        src/2_programacion_orientada_a_objetos/Persona.cpp
        src/2_programacion_orientada_a_objetos/Persona.h
        src/2_programacion_orientada_a_objetos/Estudiante.cpp
        src/2_programacion_orientada_a_objetos/Estudiante.h
        src/2_programacion_orientada_a_objetos/main.cpp)
