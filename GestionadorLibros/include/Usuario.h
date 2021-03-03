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
		char nombres[20];
		string apellidos;
		string DNI;
		int nEstanteria=0;
		Estanteria *estanteria[20];

	public:
		//Usuario(string,string,string);
		//string getNombre();
		//string getApellidos();
		//string getDNI();
		void virtual mostrarDatos()=0;
		void registrar();
		void virtual modificar()=0;
		char* getUsuario();
};

#endif
