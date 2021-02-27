#ifndef PROFESOR_H
#define PROFESOR_H

#include <string>
#include <vector>
#include "Usuario.h"

class Profesor :public Usuario
{
	protected:
		int Cod_prof;
		string Materia;
	public:
		void Imprimir_prof();
};

#endif
