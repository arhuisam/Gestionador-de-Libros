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
		string Categoria;
		string Editorial;
	public:
		Material(string,string,string,string);
		string getTitulo();
		string Asignar_group();
		void Crear();
		void Modificiar();
		void Eliminar();
		virtual void Mostar();
};

#endif
