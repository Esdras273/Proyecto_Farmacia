#include "Alimento.h"

Alimento::Alimento() : Producto(0, 0, "", 0)
{
    tipoAlimento = "";
    cantidad = 0;
    contenidoNutricional = "";
}

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
        cout << "Venta realizada de " << nombre << ", quedan " << stock << " de " << nombre <<endl;
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

//Sobrecarga de operadores
ostream& operator<<(ostream &salida, const Alimento &obj)
{
    //ID    |   Precio    |   Nombre   |   Stock   | Contenido Nutricional |   Cantidad
    salida << obj.id << "   -    " << obj.precio << "   -   " << obj.nombre << "   -    " << obj.stock << "   - " << obj.contenidoNutricional << "   -  " << obj.cantidad <<endl;
    return salida;
}

istream& operator>>(istream &entrada, Alimento &obj)
{
    cout << "Introduce el nombre del alimento: ";
        entrada >> obj.nombre;
        cout << "Introduce el precio: ";
        entrada >> obj.precio;
        cout << "Introduce el ID: ";
        entrada >> obj.id;
        cout << "Introduce el stock: ";
        entrada >> obj.stock;
        cout << "Introduce el tipo de alimento: ";
        entrada >> obj.tipoAlimento;
        cout << "Introduce la cantidad: ";
        entrada >> obj.cantidad;
        cout << "Introduce el contenido nutricional: ";
        entrada >> obj.contenidoNutricional;

        return entrada;
}

Alimento Alimento::operator+(const Alimento &obj)
{
    Alimento aux;
    aux.precio = this-> precio + obj.precio;
    return aux;
}

Alimento operator-(const Alimento &obj1, Alimento &obj2)
{
    Alimento aux;
    aux.precio=obj1.precio-obj2.precio;
    return aux;
}

bool Alimento::operator==(const Alimento& otro)const
{
    return precio == otro.precio;
}

bool operator!=(const Alimento& c1, const Alimento& c2)
{
    return !(c1 == c2);
}

bool operator<(const Alimento& c1, const Alimento& c2)
{
     return c1.precio < c2.precio;
}

bool operator>(const Alimento& c1, const Alimento& c2)
{
    return c2 < c1;
}
