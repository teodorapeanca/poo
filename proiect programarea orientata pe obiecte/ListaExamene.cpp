#include "ListaExamene.h"
#include <iostream>

template <typename T>
void ListaExamene<T>::adaugaExamen(const T& examen) {
    examene.push_back(examen);
}

template <typename T>
void ListaExamene<T>::afiseazaExamene() const {
    for (const auto& examen : examene) {
        examen->detaliiExamen();
    }
}

// Instanțierea template-ului pentru tipul specificat
template class ListaExamene<shared_ptr<Examen>>;
