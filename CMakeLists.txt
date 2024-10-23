cmake_minimum_required(VERSION 3.29)
project(nocionesClaves)

set(CMAKE_CXX_STANDARD 20)


#Añadir el código que usaremos
add_executable(nocionesClaves src/main.cpp
        src/classes/Estudiante.cpp
        src/classes/Persona.cpp)

# Bajar y usar librería FMT --- USAREMOS EN EL PUNTO 3

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)
target_link_libraries(nocionesClaves PRIVATE fmt::fmt)
