#include "ProgramExamen.h"
#include <iostream>

ProgramExamen::ProgramExamen(const Profesor& profesor) : profesor(profesor) {}

void ProgramExamen::adaugaExamen(shared_ptr<Examen> examen) {
    examene.push_back(examen);
}

void ProgramExamen::afiseazaProgram() const {
    profesor.afiseazaDetalii();
    for (const auto& examen : examene) {
        examen->detaliiExamen();
    }
}
