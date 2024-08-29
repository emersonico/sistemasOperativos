/*Write a program to display number 1 to 10 in octal, decimal and hexadecimal system.
2242232-2724, Orejuela Albornoz
2340816-2724, Albornoz Suárez
2343025-2724, Silva Zuñiga*/



#include <stdio.h>

int main() {
    //Encabezado
    printf("Número\t Decimal  Octal\t Hexadecimal\n");
    printf("------------------------------------------\n");

    //Bucle para iterar de 1 a 10
    for (int i = 1; i <= 10; i++) {
        //Imprimir el número en diferentes formatos
        //%d imprime el número en formato decimal
        //%o imprime el número en formato octal
        //%x imprime el número en formato hexadecimal
        printf("\t%d\t\t%d\t\t%o\t\t%X\n", i, i, i, i);
    }

    return 0;
}
