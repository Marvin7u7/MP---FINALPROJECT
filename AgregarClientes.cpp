#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include "Clientes.h"

using namespace std;

void agregarCliente()
{
    Cliente cliente1;
    ofstream datos;
    datos.open("clientes.txt",ios::app);

    cout<<" -------------------------------------------------\n";
    cout<<"\t  Bienvenido al Hotel 5 estrellas"<<endl;
    cout<<" -------------------------------------------------\n";
    cout<<"\n\tIntroduzca los datos del cliente para su registro"<<endl;
    cout<<"\n Numero de Cedula: ";
    gets(cliente1.Cedula);
    fflush(stdin);

    cout<<" Nombre Completo: ";
    gets(cliente1.Nombre);
    fflush(stdin);

    cout<<" Telefono celular : ";
    gets(cliente1.Telefono);
    fflush(stdin);

    cout<<" Direccion: ";
    gets(cliente1.Direccion);
    fflush(stdin);

    cout<<" Correo: ";
    gets(cliente1.Correo);
    fflush(stdin);

    cout<<" Estancia en el Hotel (Especifique: Hora,Dia) : ";
    gets(cliente1.Estadia);
    fflush(stdin);

    cout<<" Habitacion: ";
    gets(cliente1.Habitacion);
    fflush(stdin);

    fflush(stdout);

    datos<<"-----------------------------------------------------------"<<endl<<endl;
    datos<<"El Numero de Cedula del cliente es: "<<cliente1.Cedula<<endl;
    datos<<"El Nombre del cliente es: "<<cliente1.Nombre<<endl;
    datos<<"El Numero telefonico  es: "<<cliente1.Telefono<<endl;
    datos<<"La dirreccion del cliente es: "<<cliente1.Direccion<<endl;
    datos<<"El correo del cliente  es: "<<cliente1.Correo<<endl;
    datos<<"La Estadia en el Hotel es de: "<<cliente1.Estadia<<endl;
    datos<<"La Habitacion del cliente es: "<<cliente1.Habitacion<<endl;
    datos.close();
}

void listarCliente()
{

    ifstream lectura;
    string texto;

    lectura.open("clientes.txt", ios::in);
if(lectura.fail())
    {
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }
while(!lectura.eof())
    {
        getline(lectura, texto);
        cout<<texto<<endl;
    }
    lectura.close();
}
/*Creado por: Marvin Gonzales.
              Marco Montalvan.
              Oliver Sanchez.
              Denisroberto Davila.           */
