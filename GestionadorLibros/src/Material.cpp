#include "Material.h"
#include <string>
#include<iostream>
#include<sstream>
using namespace std;



/*Material::Material(string titulo,string autor,string categoria,string editorial,Profesor *pro,Alumno *alu){
    Titulo =titulo;
	Autor = autor;
	Categoria = categoria;
	Editorial = editorial;
	profesor = pro;
	alumno = alu;
}*/

string Material::getTitulo(){
    return Titulo;
}
string Material::getAutor(){
	return Autor;
}

void Material::registrar(){
	cout<<"Ingrese el titulo :";
	cin>>Titulo;
	cout<<"Ingrese el autor :";
	cin>>Autor;
	cout<<"Ingrese la categoria :";
	cin>>Categoria;
	cout<<"Ingrese la editorial :";
	cin>>Editorial;
}

