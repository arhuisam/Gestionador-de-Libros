#include "Revista.h"
#include<iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

/*Revista::Revista(string titulo,string autor,string categoria,string editorial,Profesor *pro,Alumno *alu,string anio,string volumen,int numero) :Material(titulo,autor,categoria,editorial,pro,alu){

    Anio=anio;
    Volumen=volumen;
	Numero=numero;
}*/
void Revista::registrarRevista(){
    Material::registrar();
    cout<<"Ingrese anio :";
    cin>>Anio;
    cout<<"Ingrese volumen :";
    cin>>Volumen;
    cout<<"Ingrese numero :";
    cin>>Numero;   
}
void Revista::mostrarDatos(){

    cout<<left;
    cout<<setw(10)<<Titulo;
    cout<<setw(10)<<Autor;
    cout<<setw(10)<<Categoria;
    cout<<setw(10)<<Editorial;
    cout<<setw(10)<<Anio;
    cout<<setw(10)<<Volumen;
    cout<<setw(10)<<Numero;

}
void Revista::modificar(){
    Material::registrar();
}
void Revista :: asignarEstanteria(Estanteria *estante){
    estanteria =estante;
}
void Revista :: asignarEstanteriaAlu(EstanteriaAlu*estantealu){
    estanteriaAlu=estantealu;
}
void Revista ::mostrarDatosEstanteria(){
    Revista ::mostrarDatos();
    cout<<estanteria->getEstanteria();
    
}
void Revista ::mostrarDatosEstanteriaalu(){
    Revista::mostrarDatos();
    cout<<estanteriaAlu->getEstanteriaalu();
}

void Revista :: imprimirRevista()
{
    ofstream archivo;
    archivo.open("Revista.txt",ios :: trunc | ios :: app);
    archivo<<Titulo<<" "<<Autor<<" "<<Categoria<<" "<<Editorial<<" "<<Anio<<" "<<Volumen<<" "<<Numero<<endl;
    archivo.close();
}
