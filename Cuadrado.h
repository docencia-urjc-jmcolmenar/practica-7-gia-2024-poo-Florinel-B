//
// Created by florin on 26/04/24.
//

#ifndef PRACTICA_7_GIA_2024_POO_FLORINEL_B_CUADRADO_H
#define PRACTICA_7_GIA_2024_POO_FLORINEL_B_CUADRADO_H


#include "Triangulo.h"
#include <math.h>

class Cuadrado : public Triangulo{
public:
    Cuadrado(int tam);
    int area(){
        this->numlados = 4;
        int tamanyo = pow(lado,2);
        return tamanyo;
    };

};

#endif //PRACTICA_7_GIA_2024_POO_FLORINEL_B_CUADRADO_H
