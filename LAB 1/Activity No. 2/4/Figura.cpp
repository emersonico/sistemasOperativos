#include "Figura.h"

Figura::Figura() : color(""), area(0), perimetro(0) {}

Figura::Figura(string colo) : color(colo), area(0), perimetro(0) {}

void Figura::calcularArea()
{
    cout << "Calculo del área de la figura geométrica." << endl;
}

void Figura::calcularPerimetro()
{
    cout << "Calculo del perímetro de la figura geométrica." << endl;
}

string Figura::mostrarDimensiones()
{
    return "Color: " + color + "\nPerímetro: " + to_string(perimetro) + "\nÁrea: " + to_string(area) + "\n";
}