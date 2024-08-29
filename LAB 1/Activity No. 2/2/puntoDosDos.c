/*Write a C program that receives and processes grades for the Operating Systems (SO) course using structures.
2242232-2724, Orejuela Albornoz
2340816-2724, Albornoz Suárez
2343025-2724, Silva Zuñiga*/


 // Biblioteca estándar de entrada y salida en C
#include <stdio.h>
// Estructura para almacenar la información del estudiante
struct Estudiante { 
    char nombre[30];
    int nota;
};

int main() {
    int cantidad, i;
    float promedio = 0.0;
    int notaMaxima = -1; //Variable inicializada con un valor menor que cualquier calificación posible como referencia.
    int notaMinima = 6; //Variable inicializada con un valor mayor que cualquier calificación posible como referencia.

    //Solicitar al usuario el número de estudiantes
    printf("Ingrese el número de estudiantes en el curso: ");
    scanf("%d", &cantidad);

    // Array de estructuras Estudiante
    struct Estudiante estudiantes[cantidad];

    // Ciclo for para ingresar información de los estudiantes
    for(i = 0; i < cantidad; i++) {
        printf("Ingrese el nombre del estudiante %d: ", i + 1);
        scanf("%s", estudiantes[i].nombre);
        printf("Ingrese la calificación de %s: ", estudiantes[i].nombre);
        scanf("%d", &estudiantes[i].nota);

        //Suma de calificaciones para el promedio
        promedio += estudiantes[i].nota;

        //Calificación más alta
        if(estudiantes[i].nota > notaMaxima) {
            notaMaxima = estudiantes[i].nota;
        }

        //Calificación más baja
        if(estudiantes[i].nota < notaMinima) {
            notaMinima = estudiantes[i].nota;
        }
    }

 //Cálculo del promedio de las calificaciones
    promedio /= cantidad;

 //Resultados
    printf("\nReporte de calificaciones:\n");
    printf("Promedio de calificaciones: %.2f\n", promedio);
//Ciclo for para mostrar las calificaciones de los estudiantes
    for (i = 0; i < cantidad; i++) {
        printf("Estudiante: %s, Calificación: %d\n", estudiantes[i].nombre, estudiantes[i].nota);
    }
    printf("Calificación más alta: %d\n", notaMaxima);
    printf("Calificación más baja: %d\n", notaMinima);
    return 0;
}

