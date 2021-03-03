#ifndef ALUMNO_H
#define ALUMNO_H

#include "Usuario.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class EstanteriaAlum;
class Alumno:public Usuario
{
	protected:
		int Cod_Alu;
		//int nEstanteria=0;
		int nEstanteriaalum=0;
		//Estanteria* estanteria[20];
		EstanteriaAlum* estanteriaalum[20];
		
		//vector<Material*>listaMaterial;
	public:
		//Alumno (string,string,string,int);
		//int getCod_alu();
		//void aniadirMaterial(Material*);
		void mostrarDatos();
		void registrar();
		void modificar();
		void agregarEstanteriaAlum(EstanteriaAlum*);
		char* getAlumno(); //para q muestre cuando llamemos a mostrar estanteria
		void imprimirAlumno();
};

#endif
