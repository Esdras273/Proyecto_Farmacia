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
    Producto();

    int getPrecio(void);
    void setPrecio(int);
    int getId(void);
    void setId(int);
    string getNombre(void);
    void setNombre(string);
    int getStock(void);
    void setStock(int);

};

#endif // PRODUCTO_H
