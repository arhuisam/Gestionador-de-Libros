#ifndef ALUMNO_H
#define ALUMNO_H

#include "Usuario.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class EstanteriaAlu;
class Alumno:public Usuario
{
	protected:
		int Cod_Alu;
		//int nEstanteria=0;
		int nEstanteriaalu=0;
		//Estanteria* estanteria[20];
		EstanteriaAlu* estanteriaalu[20];
		
		//vector<Material*>listaMaterial;
	public:
		//Alumno (string,string,string,int);
		//int getCod_alu();
		//void aniadirMaterial(Material*);
		void mostrarDatos();
		void registrar();
		void modificar();
		void agregarEstanteriaAlu(EstanteriaAlu*);
		char* getAlumno(); //para q muestre cuando llamemos a mostrar estanteria
		char* getAlumnoDNI();
		void imprimirAlumno();
};

#endif
