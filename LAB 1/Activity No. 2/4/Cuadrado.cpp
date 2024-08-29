#include "Cuadrado.h"

Cuadrado::Cuadrado() : Figura(), lado(0) {}

Cuadrado::Cuadrado(string col, double _lado) : Figura(col), lado(_lado) {}

void Cuadrado::calcularArea()
{
    area = lado * lado;
}

void Cuadrado::calcularPerimetro()
{
    perimetro = 4 * lado;
}

string Cuadrado::mostrarDimensiones()
{
    return "Color: " + color + "\nLado: " + to_string(lado) + "\nPerímetro: " + to_string(perimetro) + "\nÁrea: " + to_string(area) + "\n";
}
