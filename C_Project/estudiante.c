#include <stdio.h>
#include <string.h>

// Declaración del struct Estudiante en C usando typedef
typedef struct {
    char nombre[50];
    int edad;
    double promedio;
} Estudiante;

int main() {
    // Inicialización de un arreglo de structs
    Estudiante estudiantes[3] = {
        {"Juan Perez", 20, 8.5},
        {"Ana Gomez", 22, 9.2},
        {"Luis Hernandez", 21, 7.8}
    };

    // Recorrido e impresión de los datos iniciales
    printf("Datos iniciales de los estudiantes:\n");
    for (int i = 0; i < 3; i++) {
        printf("  Nombre: %s, Edad: %d, Promedio: %.2f\n",
               estudiantes[i].nombre, estudiantes[i].edad, estudiantes[i].promedio);
    }

    // Modificación del promedio del tercer estudiante
    printf("\nModificando el promedio del tercer estudiante...\n");
    estudiantes[2].promedio = 8.1;

    // Impresión de los datos actualizados
    printf("\nDatos actualizados de los estudiantes:\n");
    for (int i = 0; i < 3; i++) {
        printf("  Nombre: %s, Edad: %d, Promedio: %.2f\n",
               estudiantes[i].nombre, estudiantes[i].edad, estudiantes[i].promedio);
    }

    /*
    Explicación de la diferencia:
    En C, es una práctica común usar `typedef struct {...} NombreTipo;` para crear un alias (`NombreTipo`)
    del tipo `struct NombreStruct`. Esto permite declarar variables simplemente como `NombreTipo var;`
    en lugar de `struct NombreStruct var;`. Sin `typedef`, sería necesario escribir la palabra clave `struct`
    cada vez que se quiera referenciar el tipo.
    */

    return 0;
}
