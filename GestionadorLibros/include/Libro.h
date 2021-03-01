#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>
#include <vector>
#include "Material.h"
using namespace std;

class Libro:public Material
{
	protected:
		string Edicion;
		string Ciudad;
	public:
		 ////Libro(string ,string ,string ,string ,Profesor * ,Alumno *,string,string);
		 void registrarLibro();
		 void mostrarDatos();
		 void modificar();
};

#endif
