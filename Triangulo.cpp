//
// Created by florin on 26/04/24.
//

#include <math.h>
#include "Triangulo.h"

Triangulo::Triangulo(int tam) {
    lado = tam;
}

double Triangulo::area() {
    double tamanyo = (sqrt(3)/4)*pow(lado,2);
    return tamanyo;
}

double Triangulo::perimetro() {
    double tam = lado * numlados;
    return tam;
}