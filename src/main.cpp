#include <iostream>
#include <fmt/core.h>

#include "funciones.h"
#include "matematicas.h"

#include "classes/Estudiante.h"
#define PI 3.14159 //Punto 5
#define AREA_CIRCULO(r) (PI * (r) * (r)) //Punto 5

// ----------- PUNTO 1 ---------------

int g = 20;

int sumaSimple(int a, int b) {
    return a + b;
}

void muestraHolaMundoYSuma() {
    std::cout << "Hola Mundo" << std::endl;

    std::cout << "Valor de la g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << sumaSimple(5, g) << std::endl;
    std::cout << "Valor de la g después de la función suma: " << g << std::endl;
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
    fmt::print("Hola, {}!\n", "CLion");
}

// ----------- PUNTO 4 ---------------

void muestraHolaMundoLibreriaDinamica() {
    //Esta función está en "funciones.h"
    muestraHolaMundo();
}

void muestraRestaLibreriaEstatica() {
    //Esta función está en "matematicas.h"
    int a = 25;
    int b = 2;
    int resultado = resta(a, b);
    std::cout << "El resultado de restar " << a << "-" << b << "=" << resultado << std::endl;
}

// ----------- PUNTO 5 ---------------

void muestraAreaCirculo() {
    //r = radio del círculo
    int r = 2;
    float A = AREA_CIRCULO(r);
    std::cout << "El area del circulo de radio es " << r << " y el area es " << A << std::endl;
}

// ----------- INICIO DEL PROGRAMA ---------------

int main() {
    std::cout << "------------- Punto 1 -------------" << std::endl;
    muestraHolaMundoYSuma();

    std::cout << "------------- Punto 2 -------------" << std::endl;
    muestraEstudiante();

    std::cout << "------------- Punto 3 -------------" << std::endl;
    muestraHolaClionUsandoFmt();

    std::cout << "------------- Punto 4 -------------" << std::endl;
    muestraHolaMundoLibreriaDinamica();
    muestraRestaLibreriaEstatica();

    std::cout << "------------- Punto 5 -------------" << std::endl;
    muestraAreaCirculo();

    return 0;
}
