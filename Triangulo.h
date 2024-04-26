//
// Created by florin on 26/04/24.
//

#ifndef PRACTICA_7_GIA_2024_POO_FLORINEL_B_TRIANGULO_H
#define PRACTICA_7_GIA_2024_POO_FLORINEL_B_TRIANGULO_H


class Triangulo {

protected:
    double lado;
    short int numlados = 3;
public :
    Triangulo(int tam);
    double area();
    double perimetro();
};


#endif //PRACTICA_7_GIA_2024_POO_FLORINEL_B_TRIANGULO_H
