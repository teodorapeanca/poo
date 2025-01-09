#ifndef LISTAEXAMENE_H
#define LISTAEXAMENE_H

#include "Examen.h"
#include <vector>
#include <memory>

template <typename T>
class ListaExamene {
private:
    vector<T> examene;

public:
    void adaugaExamen(const T& examen);
    void afiseazaExamene() const;
};

#endif
#pragma once
