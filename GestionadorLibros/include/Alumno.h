#ifndef ALUMNO_H
#define ALUMNO_H

#include "Usuario.h"
#include <string>
#include <vector>
using namespace std;
class Estanteria;
class Alumno:public Usuario
{
	protected:
		int Cod_Alu;
		int nEstanteria=0;
		Estanteria* estanteria[20];
		
		//vector<Material*>listaMaterial;
	public:
		//Alumno (string,string,string,int);
		//int getCod_alu();
		//void aniadirMaterial(Material*);
		void mostrarDatos();
		void registrar();
		void modificar();
		void agregarEstanteria(Estanteria*);
		char* getAlumno(); //para q muestre cuando llamemos a mostrar estanteria
};

#endif
