#ifndef NODOARBOL_H
#define NODOARBOL_H
#include <vector>
using std::vector;

#include "Militar.h"

class NodoArbol
{
public:
    Militar *militar;
    vector<NodoArbol *> NodoHijos;

public:
    NodoArbol();
    NodoArbol(Militar *, vector<NodoArbol *>);

    Militar *getmilitar();
    void setmilitar(Militar *);

    vector<NodoArbol *> getNodoHijos();
    void setNodoHijos(vector<NodoArbol *>);

    void agregarHijos(NodoArbol*);

    string toString();
};
#endif