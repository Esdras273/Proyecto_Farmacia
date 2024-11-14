#include "Producto.h"

Producto::Producto()
{

    //ctor
}

int Producto::getPrecio(void)
{
    return precio;
}
void Producto::setPrecio(int precio)
{
    this->precio=precio;
}
int Producto::getId(void)
{
    return id;
}
void Producto::setId(int id)
{
    this->id=id;
}
string Producto::getNombre(void)
{
    return nombre;
}
void Producto::setNombre(string nombre)
{
    this->nombre=nombre;
}
int Producto::getStock(void)
{
    return stock;
}
void Producto::setStock(int stock)
{
    this->stock=stock;
}
