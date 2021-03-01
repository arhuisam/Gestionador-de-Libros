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
		//Material(string ,string ,string ,string ,Profesor * ,Alumno *);
		string getTitulo();
		string getAutor();
		void  virtual registrar();
		void virtual mostrarDatos()=0;
		void virtual modificar()=0;
		

};

#endif
