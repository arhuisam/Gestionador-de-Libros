#ifndef ESTANTERIA_H
#define ESTANTERIA_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Material;
class Usuario;
class Revista;
class Libro;
class Usuario;


class Estanteria
{
	protected:
		string Nombre;
		int nlibros;
		
		vector<Usuario*>listaUsuarios; //composicion
		vector<Libro*>listaLibros;
		vector<Revista*>listaRevistas;
	public:
	void registrar();
	int cantidadlibros();


	void crearLibro(string ,string ,string ,string ,string,string,string,string);
	void crearRevista(string ,string ,string ,string ,string,string,string,string,int);
	void agregarAlumno(string,string,string,int);
	void agregarProfesor(string,string,string,int);
	void mostrarLibro();
	void mostrarRevista();
	int buscarAlumno(string);
	int buscarProfesor(string);
	int buscarRevista(string);
	int buscarLibro(string);
	void registrarEstanteria();
	

};

#endif
