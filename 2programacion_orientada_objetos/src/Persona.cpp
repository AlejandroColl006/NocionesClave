//
// Created by Alex on 19/10/2024.
//

#include "2_programacion_orientada_a_objetos/Persona.h"
void Persona::setNombre(const std::string &nombre) {
    this->nombre = nombre;
}

std::string Persona::getNombre() {
    return nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setGenero(const std::string &genero) {
    this->genero = genero;
}

std::string Persona::getGenero() {
    return genero;
}