#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include <iostream>
#include "Producto.h"

using namespace std;

class Medicamento : public Producto
{
    private:
        string almacen;
        string tipoMedicamento;
        int dosis;
        string viaAdministracion;

    public:
        Medicamento();      //Constructor

        //Getters y setters
        string getAlmacen();
        void setAlmacen(string);

        string getTipoMedicamento();
        void setTipoMedicamento(string);

        int getDosis();
        void setDosis(int);

        string getViaAdministracion();
        void setViaAdministracion(string);

};

#endif // MEDICAMENTO_H
