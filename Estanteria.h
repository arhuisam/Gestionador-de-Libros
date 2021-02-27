#ifndef ESTANTERIA_H
#define ESTANTERIA_H

#include <string>
#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Estanteria
{
	protected:
		string Nombre;
		int nMaterial;
		
	public:
		void crear();
		void modificar();
		void eliminar();
		void asignarUsuario();
};

#endif
