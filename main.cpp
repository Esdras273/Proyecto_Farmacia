#include <iostream>
#include <vector>

#include "Producto.h"
#include "Medicamento.h"
#include "Alimento.h"

using namespace std;

//Protoripo de las funciones
void mostrarVectorAlimento(const vector<Alimento*>&);
void mostrarVectorMedicamento(const vector<Medicamento*>&);

void agregarAlimento(vector<Alimento*>&);
void agregarMedicina(vector<Medicamento*>&);

bool buscarAlimento(vector<Alimento*>&, int);
bool buscarMedicina(vector<Medicamento*>&, int);

bool eliminarAlimento(vector<Alimento*>&, int);
bool eliminarMedicina(vector<Medicamento*>&, int);

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

    //Agregamos los medicamentos al vector "medica"
    medica.push_back(med1);
    medica.push_back(med2);
    medica.push_back(med3);

    //Variables para controlar el menu
    int control = 0;
    char opcion = ' ';
    string validacion = " ";    //Con esto evitamos un mal uso del menu
    char eleccionProducto;      //Variable para seleccion dentro de las opciones 2, 3 y 4
    int id;                     //id para buscar entre los productos

    cout << "Bienvenido" << endl;

    do
    {
        cout << "///////////// MENU /////////////" << endl;
        cout << "Seleccione una de las opciones" << endl;
        cout << "1. Mostrar todos los productos disponibles" << endl;
        cout << "2. Dar de alta un nuevo producto" << endl;
        cout << "3. Buscar producto" << endl;
        cout << "4. Eliminar producto registrado" << endl;
        cout << "5. Comparacion de productos" << endl;
        cout << "6. Salir" << endl;

        cin >> validacion;

        opcion = validacion[0];     //Solo tomamos en cuenta el primer caracter para evitar resultados inesperados

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
                eleccionProducto = ' ';
                cout << "Que producto se va a registrar" << endl;
                cout << "1.- Medicamento \n2.-Alimento \n3.-Regresar al menu" << endl;
                cin >> eleccionProducto;

                if(eleccionProducto == '1')
                {
                    agregarMedicina(medica);
                }
                else if(eleccionProducto == '2')
                {
                    agregarAlimento(alimento);
                }
                else
                {
                    cout << "Regresando al menu" << endl;
                }

                break;

            case '3':
                eleccionProducto = ' ';
                cout << "Que producto se va a buscar" << endl;
                cout << "1.- Medicamento \n2.-Alimento \n3.-Regresar al menu" << endl;
                cin >> eleccionProducto;

                cout << "Ingrese el ID del producto que quiera buscar" << endl;
                cin >> id;

                if(eleccionProducto == '1')
                {
                    if(!buscarMedicina(medica, id))
                    {
                        cout << "Medicamento no encontrado" << endl;
                    }
                }
                else if(eleccionProducto == '2')
                {
                    if(!buscarAlimento(alimento, id))
                    {
                        cout << "Alimento no encontrado" << endl;
                    }
                }
                else
                {
                    cout << "Regresando al menu" << endl;
                }

                break;

            case '4':
                eleccionProducto = ' ';
                cout << "Que producto se va a buscar" << endl;
                cout << "1.- Medicamento \n2.-Alimento \n3.-Regresar al menu" << endl;
                cin >> eleccionProducto;

                cout << "Ingrese el ID del producto que quiera eliminar" << endl;
                cin >> id;

                if(eleccionProducto == '1')
                {
                    if(!eliminarMedicina(medica, id))
                    {
                        cout << "Medicamento no encontrado" << endl;
                    }
                }
                else if(eleccionProducto == '2')
                {
                    if(!eliminarAlimento(alimento, id))
                    {
                        cout << "Alimento no encontrado" << endl;
                    }
                }
                else
                {
                    cout << "Regresando al menu" << endl;
                }

                break;

            case '5':
                cout << "--Comparacion de los precios en el producto de Alimentos\n" << endl;
                cout << "La suma del primer y segundo producto es " << (*ali1 + *ali2).getPrecio() << endl;
                cout << "La resta del  segundo y tercer producto es " << (*ali2 - *ali3).getPrecio() << endl;
                if(*ali1 == *ali2)
                {
                    cout << "El primer y segundo producto tiene el mismo precio" << endl;
                }else
                {
                    cout << "El primer y segundo producto NO tienen el mismo precio" << endl;
                }
                if (*ali1 != *ali3)
                {
                    cout << "El producto 1 y el producto 3 tiene diferentes precios" << endl;
                }else{
                    cout << "El producto 1 y el producto 3 tiene el mismo precio" << endl;
                }
                if (*ali3 < *ali1)
                {
                    cout << "El producto 3 tiene un precio menor que el producto 1" << endl;
                }else if(*ali3 > *ali1){
                    cout << "El producto 3 tiene un precio mayor que el producto 1" << endl;
                }

                cout << "\n--Comparacion de los precios en el producto de Medicamentos\n" << endl;
                cout << "La suma del primer y segundo producto es " << (*med1 + *med2).getPrecio() << endl;
                cout << "La resta del  segundo y tercer producto es " << (*med2 - *med3).getPrecio() << endl;
                if(*med1 == *med3){
                    cout << "El primer y tercer producto tiene el mismo precio" << endl;
                }else{
                    cout << "El primer y tercer producto NO tienen el mismo precio" << endl;
                }
                if (*med1 != *med2)
                {
                    cout << "El producto 1 y el producto 2 tiene diferentes precios" << endl;
                }else{
                    cout << "El producto 1 y el producto 2 tiene el mismo precio" << endl;
                }
                if (*med2 < *med3)
                {
                    cout << "El producto 2 tiene un precio menor que el producto 3" << endl;
                }else if(*med2 > *med3){
                    cout << "El producto 2 tiene un precio mayor que el producto 3" << endl;
                }

                cout<<"\n"<<endl;

                break;

            case '6':
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

void agregarAlimento(vector<Alimento*>& alimento) {
    Alimento* nuevoAlimento = new Alimento();
    cin >> *nuevoAlimento;      // Uso de la sobrecarga del operador >>
    alimento.push_back(nuevoAlimento);
    cout << "Alimento agregado correctamente." << endl;
}

void agregarMedicina(vector<Medicamento*>& medicamento)
{
    Medicamento* nuevaMedicina = new Medicamento();
    cin >> *nuevaMedicina;      // Uso de la sobrecarga del operador >>
    medicamento.push_back(nuevaMedicina);
    cout << "Medicina agregada correctamente." << endl;
}

bool buscarAlimento(vector<Alimento*> &alimentos, int id) {
    for(size_t i = 0; i < alimentos.size(); i++)
    {
        if (alimentos[i]->getId() == id)
        {
            cout << *alimentos[i];
            return true;
        }
    }
    return false;
}

bool buscarMedicina(vector<Medicamento*> &medicinas, int id) {
    for(size_t i = 0; i < medicinas.size(); i++)
    {
        if (medicinas[i]->getId() == id)
        {
            cout << *medicinas[i];
            return true;
        }
    }
    return false;
}

bool eliminarAlimento(vector<Alimento*> &alimentos, int id) {
    int confirmacion = 0;

    for(size_t i = 0; i < alimentos.size(); i++)
    {
        if (alimentos[i]->getId() == id)
        {
            cout << *alimentos[i];
            cout << "Esta seguro que quiere eliminar este alimento? \n1-Si\n2-No" << endl;
            cin >> confirmacion;

            if(confirmacion == 1)
            {
                delete alimentos[i];                       // Liberar memoria del objeto
                alimentos.erase(alimentos.begin() + i);       // Eliminar el puntero del vector
                return true;
            }

        }
    }
    return false;
}

bool eliminarMedicina(vector<Medicamento*> &medicinas, int id) {
    int confirmacion = 0;

    for(size_t i = 0; i < medicinas.size(); i++)
    {
        if (medicinas[i]->getId() == id)
        {
            cout << *medicinas[i];
            cout << "Esta seguro que quiere eliminar este medicamento? \n1-Si\n2-No" << endl;
            cin >> confirmacion;

            if(confirmacion == 1)
            {
                delete medicinas[i];                       // Liberar memoria del objeto
                medicinas.erase(medicinas.begin() + i);       // Eliminar el puntero del vector
                return true;
            }

        }
    }
    return false;
}
