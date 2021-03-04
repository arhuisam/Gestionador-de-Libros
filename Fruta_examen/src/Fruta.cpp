#include "Fruta.h"
#include<string.h>
#include <iomanip>
#include <fstream>
using namespace std;

Fruta::Fruta( ){

    nombreFruta=" ";     //nombre="";
    color=" ";
    estacionCosecha=" ";

}
void Fruta::Registrar(){
    cout<<"Ingrese el nombre de la fruta :";
    cin>>nombreFruta;
    cout<<"Ingrese el color de la fruta :";
    cin>>color;
    cout<<"Ingrese la estacion de cosecha de la fruta :";
    cin>>estacionCosecha;
}
void Fruta ::Mostrar(){
    //cout<<"El nombre de la fruta es :";
    cout<<left;
    cout<<setw(10)<<nombreFruta;

    cout<<setw(10)<<color;

    cout<<setw(10)<<estacionCosecha;
}
void Fruta ::Imprimir(){
    ofstream archivo;
    archivo.open("Fruta.txt", ios :: app|ios ::out);
    archivo<<nombreFruta<<" "<<color<<" "<<estacionCosecha<<endl;
    archivo.close();
}
