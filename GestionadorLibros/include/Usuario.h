#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Estanteria;
class EstanteriaAlum;

class Usuario
{
	protected:
		char nombres[20];
		string apellidos;
		char DNI[10];
		//int nEstanteria=0;
		//Estanteria *estanteria[20];
		//EstanteriaAlum*estanteriaAlum[20];

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
