#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[50];
    float notas[3][3];
} Estudiante;

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
    Estudiante curso[2];

    strcpy(curso[0].nombre, "Jesus");
    strcpy(curso[1].nombre, "Jose");

    for(int k=0; k<2; k++) {
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) curso[k].notas[i][j] = 0.0f;
        }
    }

    curso[0].notas[0][0] = 4.5;
    curso[1].notas[2][1] = 3.9;

    printf("--- REGISTRO ACADEMICO UNITARIO ---\n");
    for (int i = 0; i < 2; i++) {
        mostrarRecord(curso[i]);
    }

    return 0;
}