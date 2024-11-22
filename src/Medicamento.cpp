#include "Medicamento.h"

Medicamento::Medicamento(float precio, int id, string nombre, int stock, string tipoMedicamento, int dosis, string viaAdministracion) : Producto(precio, id, nombre, stock)
{
    this -> tipoMedicamento = tipoMedicamento;
    this -> dosis = dosis;
    this -> viaAdministracion = viaAdministracion;
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
        cout << "No hay suficiente Medicamento para la cantidad de venta de " << nombre << endl;
    }
    else
    {
        stock -= cantidad;
        cout << "Venta realizada de " << nombre << ", quedan " << stock << " de medicina" << endl;
    }
}

void Medicamento::mostrar()
{
    cout<<"Precio:"<< precio <<" ID:"<< id <<" Nombre:"<< nombre <<" Stock:"<< stock <<
    " Tipo de Medicamento:"<< tipoMedicamento <<" Dosis:"<< dosis <<" Via de Adiminstracion:"<< viaAdministracion <<endl;
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

//Sobrecarga de operadores de flujo
ostream& operator<<(ostream &salida, const Medicamento &obj)
{
    // ID | Precio | Nombre | Stock |Tipo Medicamento| Dosis | Via Administracion
    salida << obj.id << "   -    " << obj.precio << "   -   " << obj.nombre << "   -    " << obj.stock << "   - " << obj.tipoMedicamento << "   -  "
    << obj.dosis << "   -  " << obj.viaAdministracion << endl;
    return salida;
}
