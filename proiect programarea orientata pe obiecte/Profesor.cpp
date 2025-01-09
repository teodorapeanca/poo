#include "Profesor.h"
#include <iostream>

Profesor::Profesor(const string& nume, const string& disciplina)
    : nume(nume), disciplina(disciplina) {}

void Profesor::afiseazaDetalii() const {
    cout << "Profesor: " << nume << "\nDisciplina: " << disciplina << "\n";
}
