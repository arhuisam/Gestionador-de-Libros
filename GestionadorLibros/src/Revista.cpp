#include "Revista.h"
#include<iostream>
#include <string>
using namespace std;

Revista::Revista(string titulo,string autor,string categoria,string editorial,Profesor *pro,Alumno *alu,string anio,string volumen,int numero) :Material(titulo,autor,categoria,editorial,pro,alu){

    Anio=anio;
    Volumen=volumen;
	Numero=numero;
}
