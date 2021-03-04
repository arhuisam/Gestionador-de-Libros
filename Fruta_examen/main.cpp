//Aldo Ruben Huisa Melchor (2020-119002)
#include <iostream>
#include "Fruta.h"
#include <string.h>
#include <string>
#include <iomanip>
#include <fstream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
    Fruta listaFruta[20];
    int nFru=0,op;
do{
    cout<<"\t\t Menu Fruta\t\t"<<endl;
    cout<<"1. Registrar fruta"<<endl;
    cout<<"2. Mostrar lista fruta"<<endl;
    cout<<"3. Imprimir TXT "<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"Ingrese su opcion :";cin>>op;
    switch(op){
    case 1:
        listaFruta[nFru].Registrar();
        nFru++;
        cout<<"Registro exitoso!"<<endl;
    break;
    case 2:
        cout<<setw(3)<<"#";
        cout<<setw(10)<<"Nombre";
        cout<<setw(10)<<"Color";
        cout<<setw(10)<<"Estacion";
        cout<<endl;
        for(int i=0;i<nFru;i++){
            cout<<left<<setw(3)<<i+1;
            listaFruta[i].Mostrar();
            cout<<endl;
        }
    case 3:
        for(int i = 0; i < nFru; i++)
            {
            listaFruta[i].Imprimir();
            }
            cout<<"Impresion exitosa!"<<endl;
            system("PAUSE");
            system("CLS");

    break;
    }
}while(op!=0);

    return 0;
}

