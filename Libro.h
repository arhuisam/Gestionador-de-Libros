#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>
#include <vector>
#include "Material.h"
using namespace std;

class Libro:public Material
{
	protected:
		string edicional;
		string ciudad;
	public:
		 void Imprimir();	
};

#endif
