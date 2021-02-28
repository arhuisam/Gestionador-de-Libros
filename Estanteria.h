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
		vector<Usuario*>listaUsuarios
		
	public:
		void crear();
		void modificar();
		void eliminar();
		void asignarUsuario();
};

#endif
