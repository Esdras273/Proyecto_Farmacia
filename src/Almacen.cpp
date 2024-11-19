#include "Almacen.h"

Almacen::Almacen()
{
    //ctor
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

void Almacen::setNumEstanteria(int numEstanteria)
{
    this -> numEstanteria = numEstanteria;
}
