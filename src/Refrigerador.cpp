#include "Refrigerador.h"

Refrigerador::Refrigerador(int seccion, bool enStock. int numRefrigerador) : MetodoAlmacenamiento(seccion, enStock)
{
    this -> numRefrigerador = numRefrigerador;
}

void Refrigerador::cambiarOrden(int nuevo)
{
    cout << "El refrigerador " << numRefrigerador << " es ahora el refrigerador" << nuevo << endl;
    numRefrigerador = nuevo;
}

//Getters y setters
int Refrigerador::getNumRefrigerador()
{
    return numRefrigerador;
}

void Refrigerador::setNumRefrigerador(int numRefrigerador)
{
    this -> numRefrigerador = numRefrigerador;
}
