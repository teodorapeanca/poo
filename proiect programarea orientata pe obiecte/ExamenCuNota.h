#ifndef EXAMENCUNOTA_H
#define EXAMENCUNOTA_H

#include <string>
#include <iostream>
using namespace std;

class ExamenCuNota {
private:
    string denumire;
    int nota;

public:
    ExamenCuNota(const string& denumire, int nota);

    void afisareDetalii() const;

    // Supraîncărcarea operatorului <<
    friend ostream& operator<<(ostream& os, const ExamenCuNota& examen);
};

#endif
#pragma once
