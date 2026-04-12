#include <stdio.h>
#include <stdlib.h>

typedef struct Estudiante {
    char* nombre;
    int edad;
    double promedio;
    void (*mostrar)(struct Estudiante*);
} Estudiante;

void mostrarInfo(Estudiante* e) {
    printf("Estudiante: %s | Edad: %d | Promedio: %.2f\n", e->nombre, e->edad, e->promedio);
}

void setPromedio(Estudiante* e, double nuevoPromedio) {
    e->promedio = nuevoPromedio;
}

int main() {
    Estudiante e1 = {"Jesus", 20, 4.5, mostrarInfo};
    Estudiante e2 = {"Maria", 22, 3.8, mostrarInfo};
    Estudiante e3 = {"Jose", 21, 4.2, mostrarInfo};

    Estudiante lista[3] = {e1, e2, e3};

    setPromedio(&lista[2], 4.8);

    printf("--- Simulacion de Objetos en C ---\n");
    for (int i = 0; i < 3; i++) {
        lista[i].mostrar(&lista[i]);
    }

    return 0;
}