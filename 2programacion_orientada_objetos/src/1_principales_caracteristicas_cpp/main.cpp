#include <iostream>
#include <vector>
int g =20;
int suma(int a, int b) {
    return a+b;
}

int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "Valor de la g antes de la funcion suma: " << g << std::endl;
    std::cout << "La suma es: " << suma (5,g) <<std::endl;
    std::cout << "Valor de la g despues de la funcion suma: " << g << std::endl;
    return 0;
}

