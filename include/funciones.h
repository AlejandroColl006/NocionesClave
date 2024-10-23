//
// Created by Alex on 19/10/2024.
//

#ifndef FUNCIONES_H
#define FUNCIONES_H

#ifdef NOCIONESCLAVE_LIB_EXPORT
    #define NOCIONESCLAVE_API __declspec(dllexport)
#else
    #define NOCIONESCLAVE_API __declspec(dllimport)
#endif

void muestraHolaMundo();

#endif //FUNCIONES_H
