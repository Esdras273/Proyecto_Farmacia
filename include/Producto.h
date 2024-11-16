#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>

using namespace std;

class Producto
{
    private:
    int precio;
    int id;
    string nombre;
    int stock;

    public:
    Producto();     //Contructor

    //Getters y setters
    int getPrecio();
    void setPrecio(int);

    int getId();
    void setId(int);

    string getNombre();
    void setNombre(string);

    int getStock();
    void setStock(int);

};

#endif // PRODUCTO_H
