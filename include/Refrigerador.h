#ifndef REFRIGERADOR_H
#define REFRIGERADOR_H

#include<iostream>

#include "MetodoAlmacenamiento.h"

using namespace std;

class Refrigerador : public MetodoAlmacenamiento
{
    private:
        int numRefrigerador;

    public:
        Refrigerador(int, bool, int);

        //Metodos propios
        void cambiarOrden(int);

        //Getters y setters
        int getNumRefrigerador(void);
        void setNumRefrigerador(int);

};

#endif // REFRIGERADOR_H
