#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Usuario
{
	protected:
		string nombres;
		string apellidos;
		string DNI;

	public:
		//Usuario(string,string,string);
		string getNombre();
		string getApellidos();
		string getDNI();
		virtual void mostrarDatos();
		void registrar();
};

#endif
