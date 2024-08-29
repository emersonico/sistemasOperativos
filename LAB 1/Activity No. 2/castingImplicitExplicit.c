/*Write a program in c to type casting implicit explicit
2242232-2724, Orejuela Albornoz
2340816-2724, Albornoz Suárez
2343025-2724, Silva Zuñiga*/

//Biblioteca estándar para ingreso y salida de datos
#include <stdio.h>
//Definicion de variables a transformar
int main() {
    int intVar;
    float floatVar;
    double doubleVar;

    //Ingreso número entero
    printf("Ingrese un número entero: ");
    scanf("%d", &intVar);

    //Ingreso dato tipo float
    printf("Ingrese un número tipo float: ");
    scanf("%f", &floatVar);

    //Conversión implícita de int a double
    doubleVar= intVar;
    printf("Conversión implícita (int a double): %d a %.2f\n", intVar, doubleVar);

    //Conversión implícita de float a double
    doubleVar= floatVar;
    printf("Conversión implícita (float a double): %.2f a %.2f\n", floatVar, doubleVar);

    //Conversión explícita de float a int
    intVar= (int)floatVar;
    printf("Conversión explícita (float a int): %.2f a %d\n", floatVar, intVar);

    return 0;
}
