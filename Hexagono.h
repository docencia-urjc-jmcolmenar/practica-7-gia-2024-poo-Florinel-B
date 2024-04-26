//
// Created by florin on 26/04/24.
//

#ifndef PRACTICA_7_GIA_2024_POO_FLORINEL_B_HEXAGONO_H
#define PRACTICA_7_GIA_2024_POO_FLORINEL_B_HEXAGONO_H


#include "Pentagono.h"

class Hexagono : public Pentagono {
public:
    double apotema(){
        double ap= lado/1.15;
        return ap;
    }
    Hexagono(int tam);
    double area(){
        double ar=(perimetro()*apotema())/2;
        return ar;
    };
};


#endif //PRACTICA_7_GIA_2024_POO_FLORINEL_B_HEXAGONO_H
