#ifndef ALUMNO_H
#define ALUMNO_H

#include "Usuario.h"
#include <string>
#include <vector>
using namespace std;
class Material;
class Alumno:public Usuario
{
	protected:
		int Cod_Alu;
		vector<Material*>listaMaterial;
	public:
		Alumno (string,string,string,int);
		int getCod_alu();
		void aniadirMaterial(Material*);
		void mostrarDatos();

};

#endif
