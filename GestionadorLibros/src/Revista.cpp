#include "Revista.h"
#include<iostream>
#include <string>
using namespace std;

/*Revista::Revista(string titulo,string autor,string categoria,string editorial,Profesor *pro,Alumno *alu,string anio,string volumen,int numero) :Material(titulo,autor,categoria,editorial,pro,alu){

    Anio=anio;
    Volumen=volumen;
	Numero=numero;
}*/
void Revista::registrarRevista(){
    Material::registrarMaterial();
    cout<<"Ingrese anio :";
    cin>>Anio;
    cout<<"Ingrese volumen :";
    cin>>Volumen;
    cout<<"Ingrese numero :";
    cin>>Numero;   
}

