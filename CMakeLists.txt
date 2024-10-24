cmake_minimum_required(VERSION 3.29)
project(nocionesClaves)

set(CMAKE_CXX_STANDARD 20)

#Añadir el código que usaremos
add_executable(nocionesClaves src/main.cpp
        src/classes/Estudiante.cpp
        src/classes/Persona.cpp
        src/main.cpp
        include/funciones.h
        include/matematicas.h)

# Bajar y usar librería FMT --- PUNTO 3

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)

include_directories(${PROJECT_SOURCE_DIR}/include)

target_link_libraries(nocionesClaves
        # librería FMT --- PUNTO 3
        PRIVATE fmt::fmt
        # librerías dinámicas y estáticas --- PUNTO 4
        ${PROJECT_SOURCE_DIR}/lib/gcc/libNocionesClaveLibDinamica.dll.a #Compilada con GCC
        ${PROJECT_SOURCE_DIR}/lib/gcc/libNocionesClaveLibEstatica.a #Compilada con GCC
        ${PROJECT_SOURCE_DIR}/lib/msvc/NocionesClaveLibDinamica.lib #Compilada con MSVC
        ${PROJECT_SOURCE_DIR}/lib/msvc/NocionesClaveLibEstatica.lib #Compilada con MSVC
)

add_custom_command(TARGET nocionesClaves POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${PROJECT_SOURCE_DIR}/lib/gcc/libNocionesClaveLibDinamica.dll $<TARGET_FILE_DIR:nocionesClaves> #Compilada con
)

add_custom_command(TARGET nocionesClaves POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${PROJECT_SOURCE_DIR}/lib/msvc/NocionesClaveLibDinamica.dll $<TARGET_FILE_DIR:nocionesClaves> #Compilada con MSVC
)
