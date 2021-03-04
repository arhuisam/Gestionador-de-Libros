#include "Libro.h"
#include<iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;


/*Libro::Libro(string titulo,string autor,string categoria,string editorial,Profesor *pro,Alumno *alu,string edicion,string ciudad) :Material(titulo,autor,categoria,editorial,pro,alu){

    Edicion=edicion;
    Ciudad=ciudad;
}*/
void Libro::registrarLibro(){
    Material::registrar();
    cout<<"Ingrese edicion :";
    cin>>Edicion;
    cout<<"Ingrese ciudad :";
    cin>>Ciudad;
   
}
void Libro::mostrarDatos(){
    cout<<left;
    cout<<setw(10)<<Titulo;
    cout<<setw(10)<<Autor;
    cout<<setw(10)<<Categoria;
    cout<<setw(10)<<Editorial;
    cout<<setw(10)<<Edicion;
    cout<<setw(10)<<Ciudad;

}
void Libro::modificar(){
    Libro::registrar();
}
void Libro:: asignarEstanteria(Estanteria*estante){
    estanteria=estante;
}
void Libro :: asignarEstanteriaAlu(EstanteriaAlu*estantealu){
    estanteriaAlu=estantealu;
}

void Libro :: imprimirLibro(){
    ofstream archivo;
    archivo.open("Libros.txt",ios :: trunc | ios :: app);
    archivo<<Titulo<<" "<<Autor<<" "<<Categoria<<" "<<Editorial<<" "<<Edicion<<" "<<Ciudad<<endl;
    archivo.close();
}