#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include <vector>
#include "Usuario.h"

class Material;
//class Revista;
//class Libro;
class Profesor :public Usuario
{
	protected:
		int Cod_prof;
		vector<Material*>listaMaterial;
		//vector<Revista*>listaRevista;
		//vecor<Libro*>listaLibro;
	public:
		Profesor (string,string,string,int);
		int getCod_prof();
		void aniadirMaterial(Material*);
		//void aniadirRevista(Revista*);
		//void aniadirLibro(Libro*);
		void mostrarDatos();

};

#endif
