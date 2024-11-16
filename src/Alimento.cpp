#include "Alimento.h"

Alimento::Alimento()
{
    //ctor
}

//Getters y setters
string Alimento::getRefrigerador()
{
    return refrigerador;
}

void Alimento::setRefrigerador(string refrigerador)
{
    this -> refrigerador = refrigerador;
}

string Alimento::getTipoAlimento()
{
    return tipoAlimento;
}

void Alimento::setTipoAlimento(string tipoAlimento)
{
    this -> tipoAlimento = tipoAlimento;
}

int Alimento::getCantidad()
{
    return cantidad;
}

void Alimento::setCantidad(int cantidad)
{
    this -> cantidad = cantidad;
}

string Alimento::getContenidoNutricional()
{
    return contenidoNutricional;
}

void Alimento::setContenidoNutricional(string contenidoNutricional)
{
    this -> contenidoNutricional = contenidoNutricional;
}
