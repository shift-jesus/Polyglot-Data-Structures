#include <iostream>
#include <vector>
#include <string>

class Estudiante {
private:
    std::string nombre;
    int edad;
    double promedio;

public:
    // Constructor
    Estudiante(std::string n, int e, double p) : nombre(n), edad(e), promedio(p) {}

    // Método setPromedio (Modificación)
    void setPromedio(double nuevoPromedio) {
        if (nuevoPromedio >= 0 && nuevoPromedio <= 5.0) {
            promedio = nuevoPromedio;
        }
    }

    // Método mostrarInfo (Recorrido)
    void mostrarInfo() const {
        std::cout << "Estudiante: " << nombre
                  << " | Edad: " << edad
                  << " | Promedio: " << promedio << std::endl;
    }
};

int main() {
    // Inicialización y almacenamiento en lista (vector de objetos)
    std::vector<Estudiante> lista;
    lista.emplace_back("Jesus", 20, 4.5);
    lista.emplace_back("Maria", 22, 3.8);
    lista.emplace_back("Jose", 21, 4.2);

    // Modificación mediante método
    lista[2].setPromedio(4.8);

    // Recorrido llamando al método
    std::cout << "--- Objetos en C++ (Clases) ---" << std::endl;
    for (const auto& est : lista) {
        est.mostrarInfo();
    }

    return 0;
}