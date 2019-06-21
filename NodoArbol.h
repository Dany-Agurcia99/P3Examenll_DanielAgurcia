#ifndef NODOARBOL_H
#define NODOARBOL_H
#include <vector>
using std::vector;

#include "Militar.h"

class NodoArbol
{
private:
    Militar *militar;
    vector<NodoArbol *> NodoHijos;

public:
    NodoArbol();
    NodoArbol(Militar *, vector<NodoArbol *>);

    Militar *getmilitar();
    void setmilitar(Militar *);

    vector<NodoArbol *> getNodoHijos();
    void setNodoHijos(vector<NodoArbol *>);

    string toString();
};
#endif