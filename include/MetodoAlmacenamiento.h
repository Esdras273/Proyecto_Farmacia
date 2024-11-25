#ifndef METODOALMACENAMIENTO_H
#define METODOALMACENAMIENTO_H
#include <iostream>

using namespace std;

class MetodoAlmacenamiento
{
    private:
        int seccion;
        bool enStock;

    public:
        MetodoAlmacenamiento(int, bool);     //Contructor

        //Metodos propios
        virtual void cambiarOrden(int);

        //Getters y setters
        int getSeccion();
        void setSeccion(int);

        bool getEnStock();
        void setEnStock(int);

};

#endif // METODOALMACENAMIENTO_H
