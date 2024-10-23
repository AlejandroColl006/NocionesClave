#include <iostream>
#include <fmt/core.h>

#include "classes/Estudiante.h"

// ----------- PUNTO 1 ---------------

int g =20;
int suma(int a, int b) {
    return a+b;
}

void muestraHolaMundo() {
    std::cout << "Hola Mundo" << std::endl;

    std::cout << "Valor de la g antes de la funcion suma: " << g << std::endl;
    std::cout << "La suma es: " << suma (5,g) <<std::endl;
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

void muestraHolaClionUsandoFmt(){
    fmt::print("Hola, {}!", "CLion");
}

// ----------- INICIO DEL PROGRAMA ---------------

int main() {
    //Punto 1
    muestraHolaMundo();
    //Punto 2
    muestraEstudiante();
    //Punto 3
    return 0;
}
