#include "NodoArbol.h"

NodoArbol::NodoArbol()
{
}

NodoArbol::NodoArbol(Militar *militar, vector<NodoArbol *> NodoHijos)
{

    this->militar = militar;
    this->NodoHijos = NodoHijos;
}

Militar *NodoArbol::getmilitar()
{
    return militar;
}

void NodoArbol::setmilitar(Militar *militar)
{
    this->militar = militar;
}

vector<NodoArbol *> NodoArbol::getNodoHijos()
{
    return NodoHijos;
}

void NodoArbol::setNodoHijos(vector<NodoArbol *> NodoHijos)
{
    this->NodoHijos = NodoHijos;
}

string NodoArbol::toString()
{
    string NodoArbolStr;
    NodoArbolStr = "";
    return NodoArbolStr;
}