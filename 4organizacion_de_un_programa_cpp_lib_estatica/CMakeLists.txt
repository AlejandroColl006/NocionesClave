cmake_minimum_required(VERSION 3.29)
project(4organizacion_de_un_programa_cpp_estatica)

set(CMAKE_CXX_STANDARD 20)

add_library(funciones STATIC src/funciones.cpp)

add_executable(4organizacion_de_un_programa_cpp_estatica src/main.cpp
        src/funciones.cpp
        src/funciones.h
)
target_link_libraries(4organizacion_de_un_programa_cpp_estatica PRIVATE funciones)
