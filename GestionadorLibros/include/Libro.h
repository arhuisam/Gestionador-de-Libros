#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>
#include <vector>
#include "Material.h"
#include "Estanteria.h"
#include "EstanteriaAlu.h"

using namespace std;

class Libro:public Material
{
	protected:
		string Edicion;
		string Ciudad;
		Estanteria*estanteria=NULL;
		EstanteriaAlu* estanteriaAlu=NULL;
	public:
		 ////Libro(string ,string ,string ,string ,Profesor * ,Alumno *,string,string);
		 void registrarLibro();
		 void mostrarDatos();
		 void modificar();
		 void asignarEstanteria(Estanteria*);
		 void asignarEstanteriaAlu(EstanteriaAlu*);
		 void imprimirLibro();
		 void mostrarDatosEstanteria();
		 void mostrarDatosEstanteriaalu();
};

#endif
