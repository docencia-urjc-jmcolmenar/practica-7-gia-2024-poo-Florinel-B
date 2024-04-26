#include <iostream>
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Pentagono.h"
#include "Hexagono.h"

int main() {
    const int lado = 5;

    Triangulo *t = new Triangulo(lado);
    std::cout << "Triángulo de lado " << lado << std::endl;
    std::cout << "El área del triángulo es: " << t->area() << std::endl;
    std::cout << "El perímetro del triángulo es: " << t->perimetro() << std::endl << std::endl;
    delete t;


    Cuadrado *c = new Cuadrado(lado);
    std::cout << "Cuadrado de lado " << lado << std::endl;
    std::cout << "El área del cuadrado es: " << c->area() << std::endl;
    std::cout << "El perímetro del cuadrado es: " << c->perimetro() << std::endl << std::endl;
    delete c;


    Pentagono *p = new Pentagono(lado);
    std::cout << "Pentágono de lado " << lado << std::endl;
    std::cout << "El área del pentágono es: " << p->area() << std::endl;
    std::cout << "El perímetro del pentágono es: " << p->perimetro() << std::endl << std::endl;
    delete p;

    Hexagono *h = new Hexagono(lado);
    std::cout << "Hexágono de lado " << lado << std::endl;
    std::cout << "El área del hexágono es: " << h->area() << std::endl;
    std::cout << "El perímetro del hexágono es: " << h->perimetro() << std::endl;
    delete h;

    return 0;
}
