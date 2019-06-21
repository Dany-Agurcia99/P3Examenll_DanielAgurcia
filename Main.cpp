#include <ncurses.h>

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

#include <fstream>
using std::ofstream;

#include <sstream>
using std::stringstream;

void CrearMilitar();
void VisualizarEjercito();
void RecursivoAgregar(NodoArbol *, string);
string RecursivoVisualizar(NodoArbol *,string);

Militar *general = new Militar("Yagabarish Skobernov", "M_a7", "72,", "General");
vector<NodoArbol *> hijos;
vector<NodoArbol *> TipoActual;
NodoArbol *raiz = new NodoArbol(general, hijos);

int main()
{
    Militar *general = new Militar("Yagabarish Skobernov", "M_a7", "72,", "General");
    vector<NodoArbol *> hijos;
    vector<NodoArbol *> TipoActual;
    NodoArbol *raiz = new NodoArbol(general, hijos);
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
        case 3:
            for (int i = 0; i < TipoActual.size(); i++)
            {
                delete TipoActual[i];
            }
            break;
        }
    }
    return 0;
}
void CrearMilitar()
{
    TipoActual.clear();
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
        raiz->agregarHijos(nuevoNodo);
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
            TipoActual[posicion]->agregarHijos(nuevoNodo);
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
            TipoActual[posicion]->agregarHijos(nuevoNodo);
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
            TipoActual[posicion]->agregarHijos(nuevoNodo);
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
            TipoActual[posicion]->agregarHijos(nuevoNodo);
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
            TipoActual[posicion]->agregarHijos(nuevoNodo);
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
            TipoActual[posicion]->agregarHijos(nuevoNodo);
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
    string nombreArchivo;
    string x="";
    string salida = RecursivoVisualizar(raiz,x);
    cout << "Ingrese el nombre del Ejercito: ";
    cin >> nombreArchivo;
    string filename = "Listados/"+nombreArchivo + ".txt";
    ofstream file;
    file.open(filename);
    if (file.is_open())
    {
        cout << "Cdcdcd";
        file << salida << endl;
        file.close();
    }
    cout << "Se guardo el ejercito con exito" << endl;
    initscr();
    noecho();
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_WHITE);
    wbkgd(stdscr, COLOR_PAIR(1));
    printw("%s", salida.c_str());
    refresh();
    char entradaTeclado = getch();
    while (entradaTeclado != 'x')
    {

        if (entradaTeclado == 'n')
        {
            start_color();
            init_pair(2, COLOR_GREEN, COLOR_BLACK);
            wbkgd(stdscr, COLOR_PAIR(2));
        }
        else if (entradaTeclado == 'i')
        {
            start_color();
            init_pair(3, COLOR_BLACK, COLOR_WHITE);
            wbkgd(stdscr, COLOR_PAIR(3));
        }
        else if (entradaTeclado == 'c')
        {
            start_color();
            init_pair(4, COLOR_BLUE, COLOR_RED);
            wbkgd(stdscr, COLOR_PAIR(4));
        }
        else if (entradaTeclado == 'l')
        {
            start_color();
            init_pair(5, COLOR_BLUE, COLOR_WHITE);
            wbkgd(stdscr, COLOR_PAIR(5));
        }
        entradaTeclado = getch();
        refresh();
    }
    endwin();
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
string RecursivoVisualizar(NodoArbol *nodoRaiz,string salida)
{
    if (nodoRaiz->getmilitar()->getrango() == "General")
    {
        salida += "*" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango() + "\n";
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Coronel")
    {
        salida += "   *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango() + "\n";
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Mayor")
    {
        salida += "       *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango() + "\n";
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Capitan")
    {
        salida += "           *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango() + "\n";
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Teniente")
    {
        salida += "               *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango() + "\n";
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Sargento")
    {
        salida += "                   *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango() + "\n";
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Cabo")
    {
        salida += "                       *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango() + "\n";
    }
    else if (nodoRaiz->getmilitar()->getrango() == "Soldado")
    {
        salida += "                           *" + nodoRaiz->getmilitar()->getnombre() + " - " + nodoRaiz->getmilitar()->getrango() + "\n";
    }
    for (int i = 0; i < nodoRaiz->getNodoHijos().size(); i++)
    {
        RecursivoVisualizar(nodoRaiz->getNodoHijos()[i],salida);
    }
    return salida;
}