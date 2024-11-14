#ifndef ALIMENTO_H
#define ALIMENTO_H
#include <iostream>
#include "Producto.h"

using namespace std;

class Alimento:public Producto
{
    private:
    string refrigerador;
    string tipoAlimento;
    int cantidad;
    string contenidoNutricional;

    public:
    Alimento();

    string getRefrigerador(void);
    void setRefrigerador(string);
    string getTipoAlimento(void);
    void setTipoAlimento(string);
    int getCantidad(void);
    void setCantidad(int);
    string getContenidoNutricional(void);
    void setContenidoNutricional(string);

};

#endif // ALIMENTO_H
