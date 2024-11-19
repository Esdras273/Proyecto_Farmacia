#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>

using namespace std;

class Producto
{
    protected:
    float precio;
    int id;
    string nombre;
    int stock;

    public:
    Producto(float, int, string, int);     //Contructor

    //Metodos propios
    virtual void comprar(int);
    virtual void vender(int);

    //Getters y setters
    float getPrecio();
    void setPrecio(float);

    int getId();
    void setId(int);

    string getNombre();
    void setNombre(string);

    int getStock();
    void setStock(int);

};

#endif // PRODUCTO_H
