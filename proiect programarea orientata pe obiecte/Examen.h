#ifndef EXAMEN_H
#define EXAMEN_H

#include <string>
using namespace std;

class Examen {
protected:
    string denumire;
    string data;
    int durata;

public:
    Examen(const string& denumire, const string& data, int durata);
    virtual void detaliiExamen() const;
    virtual ~Examen();
};

class ExamenTeoretic : public Examen {
public:
    ExamenTeoretic(const string& denumire, const string& data, int durata);
    void detaliiExamen() const override;
};

class ExamenPractic : public Examen {
private:
    string locatia;

public:
    ExamenPractic(const string& denumire, const string& data, int durata, const string& locatia);
    void detaliiExamen() const override;
};

#endif
#pragma once
