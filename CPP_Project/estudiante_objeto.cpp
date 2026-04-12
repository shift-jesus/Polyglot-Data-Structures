#include <iostream>
#include <vector>
#include <string>

class Estudiante {
private:
    std::string nombre;
    int edad;
    double promedio;

public:
    Estudiante(std::string n, int e, double p) : nombre(n), edad(e), promedio(p) {}

    void setPromedio(double nuevoPromedio) {
        if (nuevoPromedio >= 0 && nuevoPromedio <= 5.0) {
            promedio = nuevoPromedio;
        }
    }

    void mostrarInfo() const {
        std::cout << "Estudiante: " << nombre
                  << " | Edad: " << edad
                  << " | Promedio: " << promedio << std::endl;
    }
};

int main() {
    std::vector<Estudiante> lista;
    lista.emplace_back("Jesus", 20, 4.5);
    lista.emplace_back("Maria", 22, 3.8);
    lista.emplace_back("Jose", 21, 4.2);

    lista[2].setPromedio(4.8);

    std::cout << "--- Objetos en C++ (Clases) ---" << std::endl;
    for (const auto& est : lista) {
        est.mostrarInfo();
    }

    return 0;
}