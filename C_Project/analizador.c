#include <stdio.h>
#include <stdlib.h>

// 1. Definición del Struct para almacenar resultados
typedef struct {
    double min;
    double max;
    double promedio;
} Estadistica;

// Función para ordenar (Bubble Sort simple)
void ordenar(double arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {
    FILE *archivoIn = fopen("numeros.txt", "r");
    if (!archivoIn) return 1;

    double numeros[100];
    int contador = 0;
    double suma = 0;

    // 2. Leer números y almacenar en arreglo
    while (fscanf(archivoIn, "%lf", &numeros[contador]) != EOF) {
        suma += numeros[contador];
        contador++;
    }
    fclose(archivoIn);

    // 3. Calcular estadísticas usando el Struct
    Estadistica res;
    res.min = numeros[0];
    res.max = numeros[0];
    for (int i = 0; i < contador; i++) {
        if (numeros[i] < res.min) res.min = numeros[i];
        if (numeros[i] > res.max) res.max = numeros[i];
    }
    res.promedio = suma / contador;

    // 4. Ordenar y guardar
    ordenar(numeros, contador);
    FILE *archivoOut = fopen("resultado_c.txt", "w");
    fprintf(archivoOut, "Min: %.2f, Max: %.2f, Prom: %.2f\nSorted: ", res.min, res.max, res.promedio);
    for (int i = 0; i < contador; i++) fprintf(archivoOut, "%.2f ", numeros[i]);
    fclose(archivoOut);

    return 0;
}