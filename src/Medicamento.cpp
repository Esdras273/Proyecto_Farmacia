#include "Medicamento.h"

Medicamento::Medicamento()
{
    //ctor
}

//Metodos propios de la clase
void Medicamento::comprar(int cantidad)
{
    cout << "En stock " << stock << " " << nombre << endl;
    stock += cantidad;
    cout << "Compra realizada" << endl;
    cout << "El stock del medicamento " << nombre << " es de: " << stock << endl;
}

void Medicamento::vender(int cantidad)
{
    if(stock < cantidad)
    {
        cout << "No hay suficiente Medicamento para la cantidad de venta" << endl;
    }
    else
    {
        stock -= cantidad;
        cout << "Venta realizada, quedan " << stock << " productos" << endl;
    }
}

//Getters y setters
string Medicamento::getTipoMedicamento()
{
    return tipoMedicamento;
}

void Medicamento::setTipoMedicamento(string tipoMedicamento)
{
    this -> tipoMedicamento = tipoMedicamento;
}
int Medicamento::getDosis()
{
    return dosis;
}

void Medicamento::setDosis(int dosis)
{
    this -> dosis = dosis;
}
string Medicamento::getViaAdministracion()
{
    return viaAdministracion;
}

void Medicamento::setViaAdministracion(string viaAdministracion)
{
    this -> viaAdministracion = viaAdministracion;
}
