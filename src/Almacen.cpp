#include "Almacen.h"

Almacen::Almacen(int seccion, bool enStock, int numEstanteria) : MetodoAlmacenamiento(seccion, enStock)
{
    this -> numEstanteria = numEstanteria;
}

void Almacen::cambiarOrden(int nuevo)
{
    cout << "La estanteria " << numEstanteria << " es ahora la estanteria " << nuevo << endl;
    numEstanteria = nuevo;
}

//Getters y setters
int Almacen::getNumEstanteria()
{
    return numEstanteria;
}

void Almacen::setNumEstanteria(int numEstanteriaNuevo)
{
    if(numEstanteriaNuevo > 0)
        this -> numEstanteria = numEstanteriaNuevo;
    else
        cout << "numero no valido" << endl;
}
