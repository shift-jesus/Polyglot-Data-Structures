#include <iostream>
#include <vector>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    double promedio;
};

int main() {
    std::vector<Estudiante> lista = {
        {"Jesus", 20, 4.5},
        {"Maria", 22, 3.8},
        {"Jose", 21, 4.2}
    };

    lista[2].promedio = 4.8;

    std::cout << "--- Estudiantes en C++ ---" << std::endl;
    for (const auto& est : lista) {
        std::cout << "Nombre: " << est.nombre << ", Edad: " << est.edad << ", Promedio: " << est.promedio << std::endl;
    }
    return 0;
}