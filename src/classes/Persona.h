//
// Created by Alex on 19/10/2024.
//

#ifndef PERSONA_H
#define PERSONA_H

#include <string>


class Persona {
    std::string nombre;
    int edad;
    std::string genero;

public:
    void setNombre(const std::string &nombre);

    std::string getNombre();

    void setEdad(int edad);

    int getEdad();

    void setGenero(const std::string &genero);

    std::string getGenero();
};


#endif //PERSONA_H
