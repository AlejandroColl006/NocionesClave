#include <iostream>
#include <fmt/core.h>

#include "funciones.h"

#include "classes/Estudiante.h"

// ----------- PUNTO 1 ---------------

int g = 20;

int suma(int a, int b) {
    return a + b;
}

void muestraHolaMundoYSuma() {
    std::cout << "Hola Mundo" << std::endl;

    std::cout << "Valor de la g antes de la funcion suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de la g despues de la funcion suma: " << g << std::endl;
}

// ----------- PUNTO 2 ---------------

Estudiante estudiante;

void muestraEstudiante() {
    estudiante.setNombre("Vicente");
    estudiante.setEdad(23);
    estudiante.setGenero("Hombre");
    estudiante.setGrado("Informatica");

    estudiante.mostrarDetalles();
}

// ----------- PUNTO 3 ---------------

void muestraHolaClionUsandoFmt() {
    fmt::print("Hola, {}!", "CLion");
}

// ----------- PUNTO 4 ---------------

void muestraHolaMundoLibreria() {
    //Esta función está en "funciones.h"
    muestraHolaMundo();
}

// ----------- INICIO DEL PROGRAMA ---------------

int main() {
    std::cout << "------------- Punto 1 -------------" << std::endl;
    muestraHolaMundoYSuma();

    std::cout << "------------- Punto 2 -------------" << std::endl;
    muestraEstudiante();

    std::cout << "-------------  Punto 3 -------------" << std::endl;
    muestraHolaClionUsandoFmt();

    std::cout << "-------------  Punto 4 -------------" << std::endl;
    muestraHolaMundoLibreria();

    return 0;
}
