#include "Libro.h"
#include<iostream>
#include <string>
using namespace std;

/*Libro::Libro(string titulo,string autor,string categoria,string editorial,Profesor *pro,Alumno *alu,string edicion,string ciudad) :Material(titulo,autor,categoria,editorial,pro,alu){

    Edicion=edicion;
    Ciudad=ciudad;
}*/
void Libro::registrarLibro(){
    Material::registrarMaterial();
    cout<<"Ingrese edicion :";
    cin>>Edicion;
    cout<<"Ingrese ciudad :";
    cin>>Ciudad;
   
}
