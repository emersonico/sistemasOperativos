#ifndef CUADRADO_H
#define CUADRADO_H

#include "Figura.h"

class Cuadrado : public Figura
{
private:
    double lado;

public:
    Cuadrado();
    Cuadrado(string, double);
    void calcularArea() override;
    void calcularPerimetro() override;
    string mostrarDimensiones() override;
};
#endif
