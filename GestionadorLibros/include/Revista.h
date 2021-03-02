#ifndef REVISTA_H
#define REVISTA_H

#include <string>
#include <vector>
#include "Material.h"
#include "Estanteria.h"
class Revista :public Material
{
	protected:
		string Anio;
		string Volumen;
		int Numero;
		Estanteria* estanteria=NULL;
	public:
		////Revista(string ,string ,string ,string ,Profesor * ,Alumno *,string,string,int);
		void registrarRevista();
		void mostrarDatos();
		void modificar();
		void asignarEstanteria(Estanteria*);
};

#endif

