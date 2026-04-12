#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <numeric>

class Analizador {
private:
    std::vector<double> datos;

public:
    void leerArchivo(std::string nombre) {
        std::ifstream file(nombre);
        double val;
        while (file >> val) datos.push_back(val);
    }

    void procesarYGuardar(std::string salida) {
        if (datos.empty()) return;

        double min = *std::min_element(datos.begin(), datos.end());
        double max = *std::max_element(datos.begin(), datos.end());
        double prom = std::accumulate(datos.begin(), datos.end(), 0.0) / datos.size();

        std::sort(datos.begin(), datos.end());

        std::ofstream out(salida);
        out << "ESTADISTICAS DE OBJETO C++\n";
        out << "Max: " << max << " | Min: " << min << " | Prom: " << prom << "\n";
        out << "Datos Ordenados: ";
        for (double d : datos) out << d << " ";
    }
};

int main() {
    Analizador miAnalizador;
    miAnalizador.leerArchivo("numeros.txt");
    miAnalizador.procesarYGuardar("resultado_cpp.txt");
    return 0;
}