#include <iostream>

#include "Producto.h"
#include "Medicamento.h"
#include "Alimento.h"

using namespace std;

int main()
{
    int control = 0;
    int opcion = 0;

    cout << "Bienvenido" << endl;

    do
    {
        cout << "///////////// MENU /////////////" << endl;
        cout << "Seleccione una de las opciones" << endl;
        cout << "1. Mostrar todos los productos disponibles" << endl;
        cout << "2. Dar de alta un nuevo producto" << endl;
        cout << "3. Buscar producto" << endl;
        cout << "4. Eliminar producto registrado" << endl;
        cout << "5. Salir" << endl;

        cin >> opcion;

        switch(opcion)
        {
            case 1:
                cout << "Lista de todos los productos disponibles" << endl;

                break;

            case 2:
                char eleccionProducto;
                cout << "Que producto se va a registrar" << endl;
                cout << "1.- Medicamento \n2.-Alimento \n3.-Regresar al menu" << endl;
                if(eleccionProducto == '1')
                {
                    cout << "Medicamento" << endl;
                }
                else if(eleccionProducto == '2')
                {
                    cout << "Preoducto" << endl;
                }
                else
                {
                    cout << "Regresando al menu" << endl;
                }

                break;

            case 3:
                cout << "Ingrese el ID del producto que quiera buscar" << endl;

                break;

            case 4:
                cout << "Ingrese el ID del producto que quiera eliminar" << endl;
                break;

            case 5:
                cout << "Gracias por usar" << endl;
                control = 1;
                break;

            default:
                cout << "Opcion no disponible" << endl;
        }

    }while(control == 0);

    return 0;
}
