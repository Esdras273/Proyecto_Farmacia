#include "Alimento.h"

Alimento::Alimento()
{
    //ctor
}

string Alimento::getRefrigerador(void)
{
    return refrigerador;
}
void Alimento::setRefrigerador(string refrigerador)
{
    this->refrigerador=refrigerador;
}
string Alimento::getTipoAlimento(void)
{
    return tipoAlimento;
}
void Alimento::setTipoAlimento(string tipoAlimento)
{
    this->tipoAlimento=tipoAlimento;
}
int Alimento::getCantidad(void)
{
    return cantidad;
}
void Alimento::setCantidad(int cantidad)
{
    this->cantidad=cantidad;
}
string Alimento::getContenidoNutricional(void)
{
    return contenidoNutricional;
}
void Alimento::setContenidoNutricional(string contenidoNutricional)
{
    this->contenidoNutricional=contenidoNutricional;
}
