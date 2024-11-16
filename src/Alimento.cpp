#include "Alimento.h"

Alimento::Alimento()
{
    //ctor
}

//Metodos propios de la clase
void Alimento::comprar(int cantidad)
{
    cout << "En stock " << stock << " " << nombre << endl;
    stock += cantidad;
    cout << "Compra realizada" << endl;
    cout << "El nuevo stock para " << nombre << " es de: " << stock << endl;
}

void Alimento::vender(int cantidad)
{
    if(stock < cantidad)
    {
        cout << "No hay suficiente stock para la cantidad de venta" << endl;
    }
    else
    {
        stock -= cantidad;
        cout << "Venta realizada, quedan " << stock << " productos" << endl;
    }
}

//Getters y setters
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
