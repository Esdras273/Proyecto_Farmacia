#ifndef ALMACEN_H
#define ALMACEN_H

#include<iostream>

#include "MetodoAlmacenamiento.h"
using namespace std;

class Almacen : public MetodoAlmacenamiento
{
    private:
        int numEstanteria;

    public:
        Almacen(int, bool, int);      //Constructor

        //Metodos propios
        void cambiarOrden(int);

        //Getters y setters
        int getNumEstanteria(void);
        void setNumEstanteria(int);

};

#endif // ALMACEN_H
