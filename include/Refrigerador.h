#ifndef REFRIGERADOR_H
#define REFRIGERADOR_H

#include<iostream>

#include "MetodoAlmacenamiento.h"
using namespace std;

class Refrigerador : MetodoAlmacenamiento
{
    private:
        int numRefrigerador;

    public:
        Refrigerador();
};

#endif // REFRIGERADOR_H
