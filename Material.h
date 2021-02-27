#ifndef MATERIAL_H
#define MATERIAL_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;


class Material
{
	protected:
		string Titulo;
		string Autor;
		string Catgoria;
		string Editorial;
	public:
		string Asignar_group();
		void Crear();
		void Modificiar();
		void Eliminar();
		void Mostar();
};

#endif
