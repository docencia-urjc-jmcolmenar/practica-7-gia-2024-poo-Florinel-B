//
// Created by florin on 26/04/24.
//

#ifndef PRACTICA_7_GIA_2024_POO_FLORINEL_B_PENTAGONO_H
#define PRACTICA_7_GIA_2024_POO_FLORINEL_B_PENTAGONO_H


#include "Triangulo.h"

class Pentagono : public Triangulo{
public:
    Pentagono(int tam);
    double apotema();
    double area(){
        this->numlados = 5;
        double ar=(perimetro()*apotema())/2;
        return ar;
    }
};


#endif //PRACTICA_7_GIA_2024_POO_FLORINEL_B_PENTAGONO_H
