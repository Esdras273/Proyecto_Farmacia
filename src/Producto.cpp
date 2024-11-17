#include "Producto.h"

Producto::Producto()
{

}

//Metodos propios de la clase
void Producto::comprar(int cantidad)
{
    stock += cantidad;
    cout << "El stock para " << nombre << " es de: " << stock << endl;
}

void Producto::vender(int cantidad)
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
float Producto::getPrecio()
{
    return precio;
}

void Producto::setPrecio(float precio)
{
    this -> precio = precio;
}

int Producto::getId()
{
    return id;
}

void Producto::setId(int id)
{
    this -> id = id;
}

string Producto::getNombre()
{
    return nombre;
}

void Producto::setNombre(string nombre)
{
    this -> nombre = nombre;
}

int Producto::getStock()
{
    return stock;
}

void Producto::setStock(int stock)
{
    this -> stock = stock;
}
