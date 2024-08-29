#ifndef FIGURA_H
#define FIGURA_H
#include <string>
#include <iostream>
using namespace std;

class Figura
{
protected:
    string color;
    double area;
    double perimetro;

public:
    Figura();
    Figura(string);
    virtual void calcularArea();
    virtual void calcularPerimetro();
    virtual string mostrarDimensiones();
    virtual ~Figura() {}  // Destructor virtual para evitar leaks de memoria
};
#endif