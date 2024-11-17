#include "Almacen.h"

Almacen::Almacen()
{
    //ctor
}

void Almacen::cambiarOrden(int nuevo)
{
    cout << "La Estanteria " << numEstanteria << " es ahora la Estanteria " << nuevo << endl;
    numEstanteria = nuevo;
}

//Getters y setters
int Almacen::getNumEstanteria()
{
    return numEstanteria;
}

void Almacen::setNumEstanteria(int numEstanteria)
{
    this -> numEstanteria = numEstanteria;
}
