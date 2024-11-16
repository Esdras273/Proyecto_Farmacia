#include "Producto.h"

Producto::Producto()
{

}

//Getters y setters
int Producto::getPrecio()
{
    return precio;
}

void Producto::setPrecio(int precio)
{
    this -> precio=precio;
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
