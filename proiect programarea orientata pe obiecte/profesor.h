#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
using namespace std;

class Profesor {
private:
    string nume;
    string disciplina;

public:
    Profesor(const string& nume, const string& disciplina);
    void afiseazaDetalii() const;
};

#endif
#pragma once
