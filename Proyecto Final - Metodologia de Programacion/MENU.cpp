//Librerias Propias de C/C++
#include <iostream>
#include <stdio.h>
#include <windows.h>
//Libreria Propia de Nosotros
#include "Clientes.h"

void MenuPrincipal(int);
void agregarCliente();
void listarCliente();

using namespace std;
///Prototipo externo
void MENU()
{
//Menu Para Abrir archivo o Agregar Datos al archivo

    system("cls");
    int opc;
    cout<<"*********************************"<<endl;
    cout<<" \t\n      Hotel 5 Estrellas     \n\n";
    cout<<"*********************************"<<endl;
    cout<<"    ===== MENU =====       \n";
    cout<<"| 1. Agregar Cliente    |\n";
    cout<<"| 2. Listado Clientes   |\n";
    cout<<"| 3. Salir              |\n";
    cout<<" -----------------------\n\n";
    cout<<"Opcion: ";
    cin>>opc; //
    fflush(stdin); // Limpieza de buffer entrada
    fflush(stdout); // Limpieza buffer salida

    switch(opc)
    {
//Ciclo donde segun la Opcion Volvemos al menu principal o miramos los datos del archivo
    case 1:

       agregarCliente();
        break;

    case 2:
        system("cls");
        cout<<"-------------------------LIstas de Clientes Registrados-------------------------"<<endl<<endl;
        listarCliente();
        break;

    case 3:
        system("cls");
        MenuPrincipal(opc);
        break;
    }
}
/*Creado por: Marvin Gonzales.
              Marco Montalvan.
              Oliver Sanchez.
              Denisroberto Davila.           */
