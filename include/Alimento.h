#ifndef ALIMENTO_H
#define ALIMENTO_H

#include <iostream>
#include "Producto.h"

using namespace std;


class Alimento : public Producto
{
    private:
        string refrigerador;
        string tipoAlimento;
        int cantidad;
        string contenidoNutricional;

    public:
        Alimento();     //Contructor

        //Getters y setters
        string getRefrigerador();
        void setRefrigerador(string);

        string getTipoAlimento();
        void setTipoAlimento(string);

        int getCantidad();
        void setCantidad(int);

        string getContenidoNutricional();
        void setContenidoNutricional(string);

};

#endif // ALIMENTO_H
