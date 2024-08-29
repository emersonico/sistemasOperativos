#include "Circulo.h"

Circulo::Circulo() : Figura(), radio(0) {}

Circulo::Circulo(string col, double radi) : Figura(col), radio(radi) {}

void Circulo::calcularArea()
{
    area = 3.1416 * radio * radio;
}

void Circulo::calcularPerimetro()
{
    perimetro = 2 * 3.1416 * radio;
}

string Circulo::mostrarDimensiones()
{
    return "Color: " + color + "\nRadio: " + to_string(radio) + "\nPerímetro: " + to_string(perimetro) + "\nÁrea: " + to_string(area) + "\n";
}