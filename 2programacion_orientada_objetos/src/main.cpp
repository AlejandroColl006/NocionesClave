#include "Estudiante.h"

Estudiante estudiante;

int main() {
    estudiante.setNombre("Vicente");
    estudiante.setEdad(23);
    estudiante.setGenero("Hombre");
    estudiante.setGrado("Informatica");

    estudiante.mostrarDetalles();

    return 0;
}

