#include <stdio.h>
#include <stdlib.h>

// Definición de la "Clase" mediante struct
typedef struct Estudiante {
    char* nombre;
    int edad;
    double promedio;
    // Simulacro de método (puntero a función)
    void (*mostrar)(struct Estudiante*);
} Estudiante;

// Función que actúa como el método mostrarInfo
void mostrarInfo(Estudiante* e) {
    printf("Estudiante: %s | Edad: %d | Promedio: %.2f\n", e->nombre, e->edad, e->promedio);
}

// Función para modificar (setPromedio)
void setPromedio(Estudiante* e, double nuevoPromedio) {
    e->promedio = nuevoPromedio;
}

int main() {
    // Inicialización de 3 instancias
    Estudiante e1 = {"Jesus", 20, 4.5, mostrarInfo};
    Estudiante e2 = {"Maria", 22, 3.8, mostrarInfo};
    Estudiante e3 = {"Jose", 21, 4.2, mostrarInfo};

    Estudiante lista[3] = {e1, e2, e3};

    // Modificación mediante función "setter"
    setPromedio(&lista[2], 4.8);

    // Recorrido llamando al "método"
    printf("--- Simulacion de Objetos en C ---\n");
    for (int i = 0; i < 3; i++) {
        lista[i].mostrar(&lista[i]);
    }

    return 0;
}