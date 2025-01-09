#ifndef PROGRAMEXAMEN_H
#define PROGRAMEXAMEN_H

#include "Examen.h"
#include "Profesor.h"
#include <vector>
#include <memory>

class ProgramExamen {
private:
    vector<shared_ptr<Examen>> examene;
    Profesor profesor;

public:
    ProgramExamen(const Profesor& profesor);
    void adaugaExamen(shared_ptr<Examen> examen);
    void afiseazaProgram() const;
};

#endif
#pragma once
