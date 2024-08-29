#include <iostream>
using namespace std;
#include "Figura.h"
#include "Circulo.h"
#include "Triangulo.h"
#include "Cuadrado.h"

int main()
{
    Figura *arregloFiguras[4];
    arregloFiguras[0] = new Figura("Roja");
    arregloFiguras[1] = new Circulo("Azul", 4.5);
    arregloFiguras[2] = new Triangulo("Amarillo", 4, 5, 5, 5);
    arregloFiguras[3] = new Cuadrado("Verde", 3.0);  // Añadir el cuadrado

    string acum = "";
    for (int i = 0; i < 4; i++)
    {
        arregloFiguras[i]->calcularArea();
        arregloFiguras[i]->calcularPerimetro();
        acum += arregloFiguras[i]->mostrarDimensiones();
    }
    cout << "Las dimensiones del arreglo son:\n" << acum << endl;

    return 0;
}
