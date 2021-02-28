#ifndef ALUMNO_H
#define ALUMNO_H

#include "Usuario.h"
#include <string>
#include <vector>
using namespace std;
class Material;

//class Revista;
//class Libro;
class Alumno:public Usuario
{
	protected:
		int Cod_Alu;
		vector<Material*>listaMaterial;
		//vector<Revista*>listaRevista;
		//vecor<Libro*>listaLibro;
	public:
		Alumno (string,string,string,int);
		int getCod_alu();
		void aniadirMaterial(Material*);
		//void aniadirRevista(Revista*);
		//void aniadirLibro(Libro*);
		void mostrarDatos();

};

#endif
