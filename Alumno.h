#ifndef ALUMNO_H
#define ALUMNO_H

#include "usuario.h"
#include <string>
#include <vector>
using namespace std;
class Material;
class Alumno:public Usuario
{
	protected:
		int Cod_alu;
		vector<Material*>listaMaterial;
	public:
		Alumno (string,string,string);
		int getCod_alu();
		void aniadirMaterial(Material*);
		void mostrarDatos();

};

#endif
