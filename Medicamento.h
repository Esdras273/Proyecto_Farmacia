#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H
#include <iostream>
#include "Producto.h"

using namespace std;

class Medicamento:public Producto
{
    private:
    string almacen;
    string tipoMedicamento;
    int dosis;
    string viaAdministracion;

    public:
    Medicamento();

    string getAlmacen(void);
    void setAlmacen(string);
    string getTipoMedicamento(void);
    void setTipoMedicamento(string);
    int getDosis(void);
    void setDosis(int);
    string getViaAdministracion(void);
    void setViaAdministracion(string);

};

#endif // MEDICAMENTO_H
