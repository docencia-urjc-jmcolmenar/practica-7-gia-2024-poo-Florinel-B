//
// Created by florin on 26/04/24.
//

#include "Pentagono.h"

Pentagono ::Pentagono(int tam) : Triangulo(tam) {
    this->lado = tam;
}
double Pentagono ::apotema() {
    double apotema = lado/1.45;
    return apotema;
}