#include "Material.h"
#include <string>
#include<iostream>
#include<sstream>
using namespace std;



Material::Material(string titulo,string autor,string categoria,string editorial,Profesor *pro,Alumno *alu){
    Titulo =titulo;
	Autor = autor;
	Categoria = categoria;
	Editorial = editorial;
}

string Material::getTitulo(){
    return Titulo;
}
string Material::getAutor(){
	return Autor;
}
void Material::mostrarDatos(){
	
}

