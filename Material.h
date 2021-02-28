#ifndef MATERIAL_H
#define MATERIAL_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Profesor;
class Alumno;

class Material
{
	protected:
		string Titulo;
		string Autor;
		string Categoria;
		string Editorial;
		Profesor *profesor;
		Alumno*alumno;

	public:
		Material(string nombre,string autor,string categoria,string editorial,Profesor *,Alumno *);
		string getTitulo();
		string getAutor();
		void mostrarDatos();
	
};

#endif
