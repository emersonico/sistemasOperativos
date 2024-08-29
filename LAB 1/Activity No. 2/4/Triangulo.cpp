#include "Triangulo.h"

Triangulo::Triangulo() : Figura(), base(0), altura(0), lado1(0), lado2(0) {}

Triangulo::Triangulo(string colo, int _base, int _altura, int _lado1, int _lado2) : Figura(colo), base(_base), altura(_altura), lado1(_lado1), lado2(_lado2) {}

void Triangulo::calcularArea()
{
    area = (base * altura) / 2.0;
}

void Triangulo::calcularPerimetro()
{
    perimetro = base + lado1 + lado2;
}

string Triangulo::mostrarDimensiones()
{
    return "Color: " + color + "\nBase: " + to_string(base) + "\nAltura: " + to_string(altura) + "\nLado1: " + to_string(lado1) + "\nLado2: " + to_string(lado2) + "\nPerímetro: " + to_string(perimetro) + "\nÁrea: " + to_string(area) + "\n";
}