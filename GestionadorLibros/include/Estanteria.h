#ifndef ESTANTERIA_H
#define ESTANTERIA_H

#include <string>
#include <iostream>
#include <vector>
#include <Alumno.h>
#include<Profesor.h>
using namespace std;

class Material;
class Usuario;
class Revista;
class Libro;



class Estanteria

{
	protected:
		char Nombre[20];
		Profesor* profesor=NULL;
		Alumno *alumno=NULL;
		int nlibros;

		vector<Usuario*>listaUsuarios; //composicion
		vector<Libro*>listaLibros;
		vector<Revista*>listaRevistas;
	public:
	void registrar();
	//int cantidadlibros(Estanteria*);
	void asignarProfesor(Profesor*);
	void asignarAlumno(Alumno*);
	char* getEstanteria();

	void crearLibro(string ,string ,string ,string ,string,string,string,string);
	void crearRevista(string ,string ,string ,string ,string,string,string,string,int);
	void agregarAlumno(string,string,string,int);
	void agregarProfesor(string,string,string,int);

};

#endif
