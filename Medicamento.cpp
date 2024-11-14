#include "Medicamento.h"

Medicamento::Medicamento()
{
    //ctor
}

string Medicamento::getAlmacen(void)
{
    return almacen;
}
void Medicamento::setAlmacen(string almacen)
{
    this->almacen=almacen;
}
string Medicamento::getTipoMedicamento(void)
{
    return tipoMedicamento;
}
void Medicamento::setTipoMedicamento(string tipoMedicamento)
{
    this->tipoMedicamento=tipoMedicamento;
}
int Medicamento::getDosis(void)
{
    return dosis;
}
void Medicamento::setDosis(int dosis)
{
    this->dosis=dosis;
}
string Medicamento::getViaAdministracion(void)
{
    return viaAdministracion;
}
void Medicamento::setViaAdministracion(string viaAdministracion)
{
    this->viaAdministracion=viaAdministracion;
}
