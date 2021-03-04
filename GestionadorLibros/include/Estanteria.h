#ifndef ESTANTERIA_H
#define ESTANTERIA_H

#include <string>
#include <iostream>
#include <vector>
#include <Alumno.h>
#include<Profesor.h>
#include <fstream>
using namespace std;

class Material;
class Usuario;
class Revista;
class Libro;



class Estanteria

{
	protected:
		char Nombre[20];
		Profesor* profesor=NULL;//para q se asigne a alumns
		//Alumno *alumno=NULL;//para  q se asigne a profes
		Revista*revista[20];
		Libro* libro[20];
		int nRevistas=0;
		int nLibros=0;


	public:
	void registrar();
	void mostrarDatos();
	void mostrarDatosUsuario();
	void mostrarDatosProfe();
	void mostrarDatosAlum();
	void agregarRevista(Revista*);
	void agregarLibro(Libro*);
	//int cantidadlibros(Estanteria*);
	void asignarProfesor(Profesor*);
	//void asignarAlumno(Alumno*);///para asignar

	char* getEstanteria(); //para mostrar los materiales a q estanteria pertenece

	//void crearLibro(string ,string ,string ,string ,string,string,string,string);
	//void crearRevista(string ,string ,string ,string ,string,string,string,string,int);
	//void agregarAlumno(string,string,string,int);
	//void agregarProfesor(string,string,string,int);
	void imprimirEstanteria();
};

#endif
