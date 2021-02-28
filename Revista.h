#ifndef REVISTA_H
#define REVISTA_H

#include <string>
#include <vector>
#include "Material.h"
class Revista :public Material
{
	protected:
		string Anio;
		string Volumen;
		int Numero;
	public:
		Revista(string ,string ,string ,string ,Profesor * ,Alumno *,string,string,int);
};

#endif
