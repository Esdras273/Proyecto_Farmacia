#include "Medicamento.h"

Medicamento::Medicamento()
{
    //ctor
}

//Metodos propios de la clase
void Alimento::comprar(int cantidad)
{
    cout << "En stock " << stock << " " << nombre << endl;
    stock += cantidad;
    cout << "Compra realizada" << endl;
    cout << "El nuevo stock para " << nombre << " es de: " << stock << endl;
}

void Alimento::vender(int cantidad)
{
    if(stock < cantidad)
    {
        cout << "No hay suficiente stock para la cantidad de venta" << endl;
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
