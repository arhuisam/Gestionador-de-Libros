#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
using namespace std;

class Usuario
{
	protected:

		string nombres;
		string apellidos;
		string DNI;
	public:
		void crear();
		void modifficar();
		void eliminar();
		void mostrar();
		void imprimir();

};

#endif
