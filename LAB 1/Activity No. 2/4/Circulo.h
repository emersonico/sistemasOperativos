#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo : public Figura
{
private:
    double radio;

public:
    Circulo();
    Circulo(string, double);
    void calcularArea() override;
    void calcularPerimetro() override;
    string mostrarDimensiones() override;
};
#endif