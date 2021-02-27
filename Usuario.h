#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Estanteria;

class Usuario
{
	protected:
		string nombres;
		string apellidos;
		string DNI;
		vector<Estanteria*> listaEstanteria; //variable de composici�n
	public:

		void crear();
		void modifficar();
		void eliminar();
		void mostrar();
		void imprimir();
};

#endif
