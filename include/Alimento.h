#ifndef ALIMENTO_H
#define ALIMENTO_H

#include <iostream>
#include "Producto.h"

#include "Refrigerador.h"

using namespace std;


class Alimento : public Producto
{
    private:
        Refrigerador *refrigerador;
        string tipoAlimento;
        int cantidad;
        string contenidoNutricional;

    public:
        Alimento();     //Contructor

        //Metodos propios
        void comprar(int);
        void vender(int);

        //Getters y setters
        Refrigerador *getRefrigerador(){ return refrigerador;};
        void setRefrigerador(Refrigerador *refri) {refrigerador = refri;};

        string getTipoAlimento();
        void setTipoAlimento(string);

        int getCantidad();
        void setCantidad(int);

        string getContenidoNutricional();
        void setContenidoNutricional(string);

};

#endif // ALIMENTO_H
