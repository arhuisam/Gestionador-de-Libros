#ifndef ALUMNO_H
#define ALUMNO_H

#include "usuario.h"
#include <string>
#include <vector>
using namespace std;

class Alumno
{
	protected:
	int cod_alu;
	string carrera;
	public:
	void imprimir_alu();
};

#endif
