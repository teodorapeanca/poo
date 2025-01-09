#include "ExamenCuNota.h"

ExamenCuNota::ExamenCuNota(const string& denumire, int nota)
    : denumire(denumire), nota(nota) {}

void ExamenCuNota::afisareDetalii() const {
    cout << "Examen: " << denumire << " - Nota: " << nota << endl;
}

ostream& operator<<(ostream& os, const ExamenCuNota& examen) {
    os << "Examen: " << examen.denumire << " - Nota: " << examen.nota;
    return os;
}
