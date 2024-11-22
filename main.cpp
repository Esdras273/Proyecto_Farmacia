#include <iostream>
#include <vector>

#include "Producto.h"
#include "Medicamento.h"
#include "Alimento.h"

using namespace std;

//Funciones
void mostrarVectorAlimento(const vector<Alimento*>&);
void mostrarVectorMedicamento(const vector<Medicamento*>&);

int main()
{
    //Vectores donde guardaremos referencias a objetos de cada tipo
    vector<Alimento*> alimento;
    vector<Medicamento*> medica;

    //Medicamento con parametros precio, id, nombre, stock, tipoMedicamento, dosis, viaAdministracion
    Medicamento *med1 = new Medicamento(10.5, 1, "Paracetamol", 15, "Analgésico", 500, "Oral");
    Medicamento *med2 = new Medicamento(15.0, 2, "Ibuprofeno", 20, "Antiinflamatorio", 400, "Oral");
    Medicamento *med3 = new Medicamento(12.5, 3, "Aspirina", 30, "Analgésico", 500, "Oral");


    //Alimento con parametros precio, id, nombre, stock, tipoAlimento, cantidad, contenidoNutricional
    Alimento *ali1 = new Alimento(59.60, 01, "Maruchan", 30, "comida", 50, "5 de grasas");
    Alimento *ali2 = new Alimento(60.00, 02, "Gatorade", 8, "bebida", 500, "20 de azucar");
    Alimento *ali3 = new Alimento(19.99, 03, "Carlos V", 22, "chocolate", 75, "exceso de azucar");

    //Agregamos los alimentos al vector "alimento"
    alimento.push_back(ali1);
    alimento.push_back(ali2);
    alimento.push_back(ali3);

    medica.push_back(med1);
    medica.push_back(med2);
    medica.push_back(med3);
    //si quieres hacer otro vector, tal cual copia el codigo nomas cambia lo que quieres que diga

    int control = 0;
    char opcion = ' ';

    string validacion = " ";

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

        cin >> validacion;

        opcion = validacion[0];

        switch(opcion)
        {
            case '1':
                cout << "Lista de todos los productos disponibles" << endl;

                mostrarVectorAlimento(alimento);
                cout << "\n";
                mostrarVectorMedicamento(medica);
                cout << "\n";

                break;

            case '2':
                char eleccionProducto;
                cout << "Que producto se va a registrar" << endl;
                cout << "1.- Medicamento \n2.-Alimento \n3.-Regresar al menu" << endl;
                cin >> eleccionProducto;

                if(eleccionProducto == '1')
                {
                    cout << "Medicamento" << endl;
                }
                else if(eleccionProducto == '2')
                {
                    cout << "Alimento" << endl;
                }
                else
                {
                    cout << "Regresando al menu" << endl;
                }

                break;

            case '3':
                cout << "Ingrese el ID del producto que quiera buscar" << endl;

                break;

            case '4':
                cout << "Ingrese el ID del producto que quiera eliminar" << endl;
                break;

            case '5':
                cout << "Gracias por usar" << endl;
                control = 1;
                break;

            default:
                cout << "Opcion no disponible" << endl;
        }

    }while(control == 0);

    return 0;
}

void mostrarVectorAlimento(const vector<Alimento*>& vec)
{
    cout << "--------------------------------------------------------------" << endl;
    cout << " ID | Precio | Nombre | Stock |Contenido Nutricional| Cantidad" << endl;
    cout << "--------------------------------------------------------------" << endl;

    for(size_t i = 0; i < vec.size(); i++)
    {
        cout << *vec[i];
    }
}

void mostrarVectorMedicamento(const vector<Medicamento*>& vec)
{
    cout << "---------------------------------------------------------------------------" << endl;
    cout << " ID | Precio | Nombre | Stock |Tipo Medicamento| Dosis | Via Administracion" << endl;
    cout << "---------------------------------------------------------------------------" << endl;

    for(size_t i = 0; i < vec.size(); i++)
    {
        cout << *vec[i];
    }
}
