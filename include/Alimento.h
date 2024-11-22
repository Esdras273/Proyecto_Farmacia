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
        Alimento(float, int, string, int, string, int, string);     //Contructor

        //Metodos propios
        void comprar(int);
        void vender(int);
        void mostrar();

        //Getters y setters
        Refrigerador *getRefrigerador(){ return refrigerador;};
        void setRefrigerador(Refrigerador *refri) {refrigerador = refri;};

        string getTipoAlimento();
        void setTipoAlimento(string);

        int getCantidad();
        void setCantidad(int);

        string getContenidoNutricional();
        void setContenidoNutricional(string);

        //Sobrecarga de operadores de flujo
        friend ostream& operator<<(ostream&, const Alimento&);


};

#endif // ALIMENTO_H
