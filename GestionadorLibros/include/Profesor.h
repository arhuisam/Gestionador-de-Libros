#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include <vector>
#include "Usuario.h"
#include <fstream>

//class Material;
class Estanteria;
class Profesor :public Usuario
{
	protected:
		int Cod_prof;
		Estanteria* estanteria[20];
		int nEstanteria=0;  
		//void asignarEstanteria(Estanteria*);
		//vector<Material*>listaMaterial;
	public:
		//Profesor (string,string,string,int);
		//int getCod_prof();
		//void aniadirMaterial(Material*);
		void mostrarDatos();
		void registrar();
		void modificar();
		//void asignarProfesor();
		void agregarEstanteria(Estanteria*);
		char* getProfesor();  
		void imprimirProfesor();
};

#endif
