#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include <vector>
#include "Usuario.h"

class Material;
class Profesor :public Usuario
{
	protected:
		int Cod_prof;
		vector<Material*>listaMaterial;
	public:
		Profesor (string,string,string);
		int getCod_prof();
		void aniadirMaterial(Material*);
		void mostrarDatos();

};

#endif
