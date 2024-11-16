#include "Medicamento.h"

Medicamento::Medicamento()
{
    //ctor
}

//Getters y setters
string Medicamento::getAlmacen()
{
    return almacen;
}

void Medicamento::setAlmacen(string almacen)
{
    this -> almacen = almacen;
}

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
