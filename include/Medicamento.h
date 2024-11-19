#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include <iostream>
#include "Producto.h"

#include "Almacen.h"

using namespace std;

class Medicamento : public Producto
{
    private:
        Almacen *almacen;
        string tipoMedicamento;
        int dosis;
        string viaAdministracion;

    public:
        Medicamento(float, int, string, int);      //Constructor

        //Metodos propios
        void comprar(int);
        void vender(int);

        //Getters y setters
        Almacen *getAlmacen() { return almacen;};
        void setAlmacen(Almacen *almacenNuevo) {almacen = almacenNuevo;};

        string getTipoMedicamento();
        void setTipoMedicamento(string);

        int getDosis();
        void setDosis(int);

        string getViaAdministracion();
        void setViaAdministracion(string);

};

#endif // MEDICAMENTO_H
