#include <iostream>
#include <vector>
#include <string>

class Estudiante {
public:
    std::string nombre;
    double notas[3][3];

    Estudiante(std::string n) : nombre(n) {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) notas[i][j] = 0.0;
    }

    void mostrarRecord Academico() {
        std::cout << "\nNotas de " << nombre << ":" << std::endl;
        for(int i=0; i<3; i++) {
            std::cout << "Materia " << i+1 << ": ";
            for(int j=0; j<3; j++) {
                std::cout << "[" << notas[i][j] << "] ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    std::vector<Estudiante> curso;
    curso.push_back(Estudiante("Jesus"));

    curso[0].notas[0][0] = 4.5; // Materia 1, Corte 1
    curso[0].notas[1][2] = 3.8; // Materia 2, Corte 3

    curso[0].mostrarRecordAcademico();

    return 0;
}