#include "Examen.h"
#include <iostream>

Examen::Examen(const string& denumire, const string& data, int durata)
    : denumire(denumire), data(data), durata(durata) {}

void Examen::detaliiExamen() const {
    cout << "Examen: " << denumire << "\nData: " << data << "\nDurata: " << durata << " ore\n";
}

Examen::~Examen() {}

ExamenTeoretic::ExamenTeoretic(const string& denumire, const string& data, int durata)
    : Examen(denumire, data, durata) {}

void ExamenTeoretic::detaliiExamen() const {
    cout << "Examen Teoretic - ";
    Examen::detaliiExamen();
}

ExamenPractic::ExamenPractic(const string& denumire, const string& data, int durata, const string& locatia)
    : Examen(denumire, data, durata), locatia(locatia) {}

void ExamenPractic::detaliiExamen() const {
    cout << "Examen Practic - ";
    Examen::detaliiExamen();
    cout << "Locatia: " << locatia << "\n";
}
