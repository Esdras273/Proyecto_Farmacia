#include "MetodoAlmacenamiento.h"

MetodoAlmacenamiento::MetodoAlmacenamiento()
{
    //ctor
}

void MetodoAlmacenamiento::cambiarOrden(int nuevo)
{
    cout<<"El numero se modifico ha " << nuevo << endl;
}

//Getters y setters
int MetodoAlmacenamiento::getSeccion()
{
    return seccion;
}

void MetodoAlmacenamiento::setSeccion(int seccion)
{
    this -> seccion = seccion;
}

bool MetodoAlmacenamiento::getEnStock()
{
    return enStock;
}

void MetodoAlmacenamiento::setEnStock(int enStock)
{
    this -> enStock = enStock;
}
