#include "Examen.h"
#include "Profesor.h"
#include "ProgramExamen.h"
#include "ListaExamene.h"
#include "ExamenCuNota.h" // Include fișierul header pentru ExamenCuNota
#include <memory>
#include <iostream>

using namespace std;

int main() {
    Profesor profesor1("Ion Popescu", "Matematica");
    shared_ptr<Examen> examen1 = make_shared<ExamenTeoretic>("Matematica", "2024-01-15", 3);
    shared_ptr<Examen> examen2 = make_shared<ExamenPractic>("Informatica", "2024-01-20", 4, "Sala Informatica");

    ProgramExamen program(profesor1);
    program.adaugaExamen(examen1);
    program.adaugaExamen(examen2);

    cout << "Programul examenelor:\n";
    program.afiseazaProgram();

    ListaExamene<shared_ptr<Examen>> listaExamene;
    listaExamene.adaugaExamen(examen1);
    listaExamene.adaugaExamen(examen2);

    cout << "\nLista de examene:\n";
    listaExamene.afiseazaExamene();

    // Crearea unui obiect ExamenCuNota
    ExamenCuNota examenNota("Matematica", 9);
    cout << "\n" << examenNota << endl;  // Folosirea operatorului << suprasolicitat

    return 0;
}
