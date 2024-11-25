#include "Medicamento.h"

Medicamento::Medicamento() : Producto(0, 0, "", 0)
{
    tipoMedicamento = "";
    dosis = 0;
    viaAdministracion = "";
}

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
        cout << "Venta realizada de " << nombre << ", quedan " << stock << " de " << nombre <<endl;
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

istream& operator>>(istream &entrada, Medicamento &obj)
{
    cout << "Introduce el nombre del medicamento: ";
        entrada >> obj.nombre;
        cout << "Introduce el precio: ";
        entrada >> obj.precio;
        cout << "Introduce el ID: ";
        entrada >> obj.id;
        cout << "Introduce el stock: ";
        entrada >> obj.stock;
        cout << "Introduce el tipo de medicamento: ";
        entrada >> obj.tipoMedicamento;
        cout << "Introduce la dosis: ";
        entrada >> obj.dosis;
        cout << "Introduce la via de administracion: ";
        entrada >> obj.viaAdministracion;

        return entrada;
}

Medicamento Medicamento ::operator+(const Medicamento &obj)
{
    Medicamento aux;
    aux.precio=precio+obj.precio;
    return aux;
}

Medicamento operator-(const Medicamento &obj1, Medicamento &obj2)
{
    Medicamento aux;
    aux.precio=obj1.precio-obj2.precio;
    return aux;
}

bool Medicamento::operator==(const Medicamento& otro)const
{
    return precio == otro.precio;
}

bool operator!=(const Medicamento& c1, const Medicamento& c2)
{
    return !(c1 == c2);
}

bool operator<(const Medicamento& c1, const Medicamento& c2)
{
     return c1.precio < c2.precio;
}

bool operator>(const Medicamento& c1, const Medicamento& c2)
{
    return c2 < c1;
}
