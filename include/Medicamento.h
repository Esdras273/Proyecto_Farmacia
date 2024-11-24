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
        Medicamento();
        Medicamento(float, int, string, int, string, int, string);      //Constructor

        //Metodos propios
        void comprar(int);
        void vender(int);
        void mostrar();

        //Getters y setters
        Almacen *getAlmacen() { return almacen;};
        void setAlmacen(Almacen *almacenNuevo) {almacen = almacenNuevo;};

        string getTipoMedicamento();
        void setTipoMedicamento(string);

        int getDosis();
        void setDosis(int);

        string getViaAdministracion();
        void setViaAdministracion(string);

        //Sobrecargas de operadores
        Medicamento operator +(const Medicamento&);
        friend Medicamento operator -(const Medicamento&,Medicamento&);
        bool operator==(const Medicamento& otro) const;
        friend bool operator!=(const Medicamento& c1, const Medicamento& c2);
        friend bool operator<(const Medicamento& c1, const Medicamento& c2);
        friend bool operator>(const Medicamento& c1, const Medicamento& c2);

        //Sobrecarga de operadores de flujo
        friend ostream& operator<<(ostream&, const Medicamento&);

};

#endif // MEDICAMENTO_H
