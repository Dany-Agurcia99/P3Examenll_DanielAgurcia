#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Militar.h"
#include "NodoArbol.h"

void CrearMilitar();
void VisualizarEjercito();
void RecursivoAgregar(NodoArbol *, string);
void RecursivoVisualizar(NodoArbol *);

Militar *general = new Militar("Yagabarish Skobernov", "M_a7", "72,", "General");
vector<NodoArbol *> hijos;
vector<NodoArbol *> TipoActual;
NodoArbol *raiz = new NodoArbol(general, hijos);

int main()
{
    int opcion = 0;
    while (opcion != 3)
    {
        cout << "Menu" << endl
             << "1-Crear Militar" << endl
             << "2-Visualizar Ejercito" << endl
             << "3-Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            CrearMilitar();
            break;
        case 2:
            VisualizarEjercito();
            break;
        }
    }
    return 0;
}
void CrearMilitar()
{
    int opcion;
    int posicion;
    string nombre, codigo, edad, rango;
    cout << "Seleccione el Rango" << endl
         << "1-Crear Coronel" << endl
         << "2-Crear Mayor" << endl
         << "3-Crear Capitan" << endl
         << "4-Crear Teniente" << endl
         << "5-Crear Sargento" << endl
         << "6-Crear Cabo" << endl
         << "7-Crear Soldado" << endl
         << "8-Salir" << endl;
    cout << "Ingrese una opcion: " << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
    {
        rango = "Coronel";
        cout << "Ingrese nombre del Militar: ";
        cin >> nombre;
        cout << "Ingrese codigo del Militar: ";
        cin >> codigo;
        cout << "Ingrese edad del Militar: ";
        cin >> edad;
        Militar *nuevoMilitar = new Militar(nombre, codigo, edad, rango);
        NodoArbol *nuevoNodo = new NodoArbol(nuevoMilitar, hijos);
        raiz->getNodoHijos().push_back(nuevoNodo);
    }
    break;
    case 2:
    {
        rango = "Mayor";
        RecursivoAgregar(raiz, "Coronel");
        if (TipoActual.size() != 0)
        {
            for (int i = 0; i < TipoActual.size(); i++)
            {
                cout << i << ") " + TipoActual[i]->getmilitar()->getnombre() << endl;
            }
            cout << "Ingrese el indice del Coronel al que le agregara el nuevo Mayor: ";
            cin >> posicion;
            cout << "Ingrese nombre del Militar: ";
            cin >> nombre;
            cout << "Ingrese codigo del Militar: ";
            cin >> codigo;
            cout << "Ingrese edad del Militar: ";
            cin >> edad;
            Militar *nuevoMilitar = new Militar(nombre, codigo, edad, rango);
            NodoArbol *nuevoNodo = new NodoArbol(nuevoMilitar, hijos);
            TipoActual[posicion]->getNodoHijos().push_back(nuevoNodo);
        }
        else
        {
            cout << "No hay un Coronel creado, porfavor cree uno para poder agregar un Mayor";
        }
    }
    break;
    case 3:
    {
        rango = "Capitan";
        RecursivoAgregar(raiz, "Mayor");
        if (TipoActual.size() != 0)
        {
            for (int i = 0; i < TipoActual.size(); i++)
            {
                cout << i << ") " + TipoActual[i]->getmilitar()->getnombre() << endl;
            }
            cout << "Ingrese el indice del Mayor al que le agregara el nuevo Capitan: ";
            cin >> posicion;
            cout << "Ingrese nombre del Militar: ";
            cin >> nombre;
            cout << "Ingrese codigo del Militar: ";
            cin >> codigo;
            cout << "Ingrese edad del Militar: ";
            cin >> edad;
            Militar *nuevoMilitar = new Militar(nombre, codigo, edad, rango);
            NodoArbol *nuevoNodo = new NodoArbol(nuevoMilitar, hijos);
            TipoActual[posicion]->getNodoHijos().push_back(nuevoNodo);
        }
        else
        {
            cout << "No hay un Mayor creado, porfavor cree uno para poder agregar un Capitan";
        }
    }
    break;
    case 4:
    {
        rango = "Teniente";
        RecursivoAgregar(raiz, "Capitan");
        if (TipoActual.size() != 0)
        {
            for (int i = 0; i < TipoActual.size(); i++)
            {
                cout << i << ") " + TipoActual[i]->getmilitar()->getnombre() << endl;
            }
            cout << "Ingrese el indice del Capitan al que le agregara el nuevo Teniente: ";
            cin >> posicion;
            cout << "Ingrese nombre del Militar: ";
            cin >> nombre;
            cout << "Ingrese codigo del Militar: ";
            cin >> codigo;
            cout << "Ingrese edad del Militar: ";
            cin >> edad;
            Militar *nuevoMilitar = new Militar(nombre, codigo, edad, rango);
            NodoArbol *nuevoNodo = new NodoArbol(nuevoMilitar, hijos);
            TipoActual[posicion]->getNodoHijos().push_back(nuevoNodo);
        }
        else
        {
            cout << "No hay un Capitan creado, porfavor cree uno para poder agregar un Teniente";
        }
    }
    break;
    case 5:
    {
        rango = "Sargento";
        RecursivoAgregar(raiz, "Teniente");
        if (TipoActual.size() != 0)
        {
            for (int i = 0; i < TipoActual.size(); i++)
            {
                cout << i << ") " + TipoActual[i]->getmilitar()->getnombre() << endl;
            }
            cout << "Ingrese el indice del Teniente al que le agregara el nuevo Sargento: ";
            cin >> posicion;
            cout << "Ingrese nombre del Militar: ";
            cin >> nombre;
            cout << "Ingrese codigo del Militar: ";
            cin >> codigo;
            cout << "Ingrese edad del Militar: ";
            cin >> edad;
            Militar *nuevoMilitar = new Militar(nombre, codigo, edad, rango);
            NodoArbol *nuevoNodo = new NodoArbol(nuevoMilitar, hijos);
            TipoActual[posicion]->getNodoHijos().push_back(nuevoNodo);
        }
        else
        {
            cout << "No hay un Teniente creado, porfavor cree uno para poder agregar un Sargento";
        }
    }
    break;
    case 6:
    {
        rango = "Cabo";
        RecursivoAgregar(raiz, "Sargento");
        if (TipoActual.size() != 0)
        {
            for (int i = 0; i < TipoActual.size(); i++)
            {
                cout << i << ") " + TipoActual[i]->getmilitar()->getnombre() << endl;
            }
            cout << "Ingrese el indice del Sargento al que le agregara el nuevo Cabo: ";
            cin >> posicion;
            cout << "Ingrese nombre del Militar: ";
            cin >> nombre;
            cout << "Ingrese codigo del Militar: ";
            cin >> codigo;
            cout << "Ingrese edad del Militar: ";
            cin >> edad;
            Militar *nuevoMilitar = new Militar(nombre, codigo, edad, rango);
            NodoArbol *nuevoNodo = new NodoArbol(nuevoMilitar, hijos);
            TipoActual[posicion]->getNodoHijos().push_back(nuevoNodo);
        }
        else
        {
            cout << "No hay un Sargento creado, porfavor cree uno para poder agregar un Cabo";
        }
    }
    break;
    case 7:
    {
        rango = "Soldado";
        RecursivoAgregar(raiz, "Cabo");
        if (TipoActual.size() != 0)
        {
            for (int i = 0; i < TipoActual.size(); i++)
            {
                cout << i << ") " + TipoActual[i]->getmilitar()->getnombre() << endl;
            }
            cout << "Ingrese el indice del Cabo al que le agregara el nuevo Soldado: ";
            cin >> posicion;
            cout << "Ingrese nombre del Militar: ";
            cin >> nombre;
            cout << "Ingrese codigo del Militar: ";
            cin >> codigo;
            cout << "Ingrese edad del Militar: ";
            cin >> edad;
            Militar *nuevoMilitar = new Militar(nombre, codigo, edad, rango);
            NodoArbol *nuevoNodo = new NodoArbol(nuevoMilitar, hijos);
            TipoActual[posicion]->getNodoHijos().push_back(nuevoNodo);
        }
        else
        {
            cout << "No hay un Cabo creado, porfavor cree uno para poder agregar un Soldado";
        }
    }
    break;
    }
}

void VisualizarEjercito()
{
}

void RecursivoAgregar(NodoArbol *nodoRaiz, string rangoBuscar)
{
    if (nodoRaiz->getmilitar()->getrango() == rangoBuscar)
    {
        TipoActual.push_back(nodoRaiz);
    }
    for (int i = 0; i < nodoRaiz->getNodoHijos().size(); i++)
    {
        RecursivoAgregar(nodoRaiz->getNodoHijos()[i], rangoBuscar);
    }
}
void RecursivoVisualizar(NodoArbol *nodoRaiz)
{
    if (nodoRaiz->getmilitar()->getrango() == "General")
    {
        cout << "*" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango();
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Coronel")
    {
        cout << "   *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango();
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Mayor")
    {
        cout << "       *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango();
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Capitan")
    {
        cout << "           *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango();
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Teniente")
    {
        cout << "               *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango();
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Sargento")
    {
        cout << "                   *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango();
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Cabo")
    {
        cout << "                       *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango();
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Soldado")
    {
        cout << "                           *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango();
    }
    for (int i = 0; i < nodoRaiz->getNodoHijos().size(); i++)
    {
        RecursivoVisualizar(nodoRaiz->getNodoHijos()[i]);
    }
}