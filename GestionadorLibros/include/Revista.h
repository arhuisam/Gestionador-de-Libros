#ifndef REVISTA_H
#define REVISTA_H

#include <string>
#include <vector>
#include "Material.h"
#include "Estanteria.h"
#include"EstanteriaAlu.h"

class Revista :public Material
{
	protected:
		string Anio;
		string Volumen;
		int Numero;
		Estanteria* estanteria=NULL;
		EstanteriaAlu* estanteriaAlu=NULL;
	public:
		////Revista(string ,string ,string ,string ,Profesor * ,Alumno *,string,string,int);
		void registrarRevista();
		void mostrarDatos();
		void modificar();
		void asignarEstanteria(Estanteria*);//PARA ASIGNAR LA REVISTA AUNA ESTANTERIA TIPO PROFE
		void asignarEstanteriaAlu(EstanteriaAlu*);//PARA ASIGNAR LA REVISTA A UNA ESTANTERIA TIPO ALUM
		void imprimirRevista();
		void mostrarDatosEstanteria();
		void mostrarDatosEstanteriaalu();
};

#endif

