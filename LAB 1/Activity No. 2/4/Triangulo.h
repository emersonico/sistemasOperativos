#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Figura.h"

class Triangulo : public Figura
{
private:
    int base, altura, lado1, lado2;

public:
    Triangulo();
    Triangulo(string, int, int, int, int);
    void calcularArea() override;
    void calcularPerimetro() override;
    string mostrarDimensiones() override;
};
#endif