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
    cout<<pa.getPrecio()<<endl;

    medi.setViaAdministracion("Oral");
    cout<<medi.getViaAdministracion()<<endl;

    ali.setContenidoNutricional("Proteinas 12g");
    cout<<ali.getContenidoNutricional()<<endl;

    return 0;
}
