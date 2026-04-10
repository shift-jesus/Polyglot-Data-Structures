#include <stdio.h>
#include <string.h>

// Definición de la estructura
typedef struct {
    char nombre[50];
    // Campo que es una matriz: [Materias][Cortes]
    float notas[3][3];
} Estudiante;

// Función para mostrar la información (Simulando un método)
void mostrarRecord(Estudiante e) {
    printf("\nNotas de %s:\n", e.nombre);
    for (int i = 0; i < 3; i++) {
        printf("Materia %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("[%.1f] ", e.notas[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // 1. Arreglo de objetos (Instancias de la estructura)
    Estudiante curso[2];

    // 2. Inicialización de datos
    strcpy(curso[0].nombre, "Jesus");
    strcpy(curso[1].nombre, "Jose");

    // Inicializar matrices en 0.0
    for(int k=0; k<2; k++) {
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) curso[k].notas[i][j] = 0.0f;
        }
    }

    // 3. Asignación de notas en la matriz interna
    // Jesus: Materia 1, Corte 1
    curso[0].notas[0][0] = 4.5;
    // Jose: Materia 3, Corte 2
    curso[1].notas[2][1] = 3.9;

    // 4. Recorrido del arreglo de estructuras
    printf("--- REGISTRO ACADEMICO UNITARIO ---\n");
    for (int i = 0; i < 2; i++) {
        mostrarRecord(curso[i]);
    }

    return 0;
}