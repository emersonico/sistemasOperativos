/*Find the greater of the three numbers.
2242232-2724, Orejuela Albornoz
2340816-2724, Albornoz Suárez
2343025-2724, Silva Zuñiga
*/

#include <stdio.h> //Biblioteca estándar de entrada y salida en C.

int main() {
    int numero1, numero2, numero3; // Definición de variables.

    printf("Digitar el primer número: "); // Ingreso de los números.
    scanf("%d", &numero1);
    printf("Digitar el segundo número: ");
    scanf("%d", &numero2);
    printf("Digitar el tercer número: ");
    scanf("%d", &numero3);

    if(numero1 >= numero2 && numero1 >= numero3){   //EStructura condicional para determinar el numero mayor
        printf("El mayor número es: %d\n", numero1);
    } else if(numero2 >= numero1 && numero2 >= numero3){
        printf("El mayor número es: %d\n", numero2);
    } else{
        printf("El mayor número es: %d\n", numero3);
    }
    return 0;
}

