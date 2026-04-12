#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int edad;
    double promedio;
} Estudiante;

int main() {
    Estudiante estudiantes[3] = {
        {"Juan Perez", 20, 8.5},
        {"Ana Gomez", 22, 9.2},
        {"Luis Hernandez", 21, 7.8}
    };

    printf("Datos iniciales de los estudiantes:\n");
    for (int i = 0; i < 3; i++) {
        printf("  Nombre: %s, Edad: %d, Promedio: %.2f\n",
               estudiantes[i].nombre, estudiantes[i].edad, estudiantes[i].promedio);
    }

    printf("\nModificando el promedio del tercer estudiante...\n");
    estudiantes[2].promedio = 8.1;

    printf("\nDatos actualizados de los estudiantes:\n");
    for (int i = 0; i < 3; i++) {
        printf("  Nombre: %s, Edad: %d, Promedio: %.2f\n",
               estudiantes[i].nombre, estudiantes[i].edad, estudiantes[i].promedio);
    }


    return 0;
}
