#include <iostream>
#include "Producto.h"
#include "Medicamento.h"
#include "Alimento.h"

using namespace std;

int main()
{
    Producto pa;
    Medicamento medi;
    Alimento ali;

    pa.setPrecio(199);
    cout<<pa.getPrecio()<<"\n"<<endl;

    medi.setViaAdministracion("Oral");
    medi.setNombre("Paracetamol");
    medi.setTipoMedicamento("Pastilla");
    cout<<medi.getNombre()<<endl;
    cout<<medi.getViaAdministracion()<<endl;
    cout<<medi.getTipoMedicamento()<<"\n"<<endl;

    ali.setNombre("Agua");
    ali.setContenidoNutricional("Proteinas 12g");
    ali.setTipoAlimento("Bebida");
    cout<<ali.getNombre()<<endl;
    cout<<ali.getContenidoNutricional()<<endl;
    cout<<ali.getTipoAlimento()<<endl;


    return 0;
}
