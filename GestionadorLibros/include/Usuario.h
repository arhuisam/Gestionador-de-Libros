#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Usuario
{
	protected:
		char nombres[20];
		string apellidos;
		string DNI;

	public:
		//Usuario(string,string,string);
		//string getNombre();
		//string getApellidos();
		//string getDNI();
		void virtual mostrarDatos()=0;
		void registrar();
		void virtual modificar()=0;
};

#endif
