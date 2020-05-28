///Proyecto Final Metodologia De Programación.
///Proyecto Hotel
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "Clientes.h"

void MENU();

using namespace std;

int MenuPrincipal(int);

int main()
{
     int OP;
    do
    {
        switch(MenuPrincipal(OP))
        {
    case 1:
        {
            system("cls");
            MENU();

            break;
        }

    case 2:
        {
            return 0;
            break;
        }

    default:
        {

            break;
        }

        }

    }
    while(OP!=2);
    return 0;
}

int MenuPrincipal(int opc)
{
    system("color 1F");
    cout<<"********************************************* "<<endl;
    cout<<"\n\t       HOTEL 5 ESTRELLAS \n\n";
    cout<<"********************************************* "<<endl;
    cout<<"\n        ============ MENU =========== \n";
    cout<<" \t|1. Informacion de Clientes |\n";
    cout<<" \t|2. Salir                   |\n";
    cout<<"\n  Opcion: ";
    cin>>opc;
    fflush(stdin);
    fflush(stdout);

    return opc;
};
/*Creado por: Marvin Gonzales.
              Marco Montalvan.
              Oliver Sanchez.
              Denisroberto Davila.           */
