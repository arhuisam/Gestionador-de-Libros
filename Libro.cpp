#include "Libro.h"
#include<iostream>
#include <string>
using namespace std;

Libro::Libro(string titulo,string autor,string categoria,string editorial,Profesor *pro,Alumno *alu,string edicion,string ciudad) :Material(titulo,autor,categoria,editorial,pro,alu){
    
    Edicion=edicion;
    Ciudad=ciudad;
	
}                               

