#include "Alimento.h"

Alimento::Alimento(float precio, int id, string nombre, int stock, string tipoAlimento, int cantidad, string contenidoNutricional) : Producto(precio, id, nombre, stock)
{
    this -> tipoAlimento = tipoAlimento;
    this -> cantidad = cantidad;
    this-> contenidoNutricional = contenidoNutricional;
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
        cout << "No hay suficiente stock para la cantidad de venta de " << nombre <<endl;
    }
    else
    {
        stock -= cantidad;
        cout << "Venta realizada de " << nombre << ", quedan " << stock << " productos" << endl;
    }
}

void Alimento::mostrar()
{
    cout<<"Precio:"<< precio <<" ID:"<< id <<" Nombre:"<< nombre <<" Stock:"<< stock <<
    " TipoAlimento:"<< tipoAlimento <<" Cantidad:"<< cantidad <<" Contenido Nutricional:"<< contenidoNutricional <<endl;
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
