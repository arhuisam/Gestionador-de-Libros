#ifndef DETALLE_H
#define DETALLE_H
#include <string>
using namespace std;

class Detalle
{
	protected:
	string nombre;
	int Nmaterial;

	public:
	void asignarEstanteria();
	void asignarMateria();
};

#endif
