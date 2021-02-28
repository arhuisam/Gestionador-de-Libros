#include "Alumno.h"

#include <string>
using namespace std;

Alumno::Alumno(string nombres,string apellidos,string DNI,int cod_alu ) : Usuario(nombres, apellidos, DNI)
{
    nombres=nombres;
    apellidos=apellidos;
    DNI=DNI;
    Cod_Alu=cod_alu;
}
void Alumno ::aniadirMaterial(Material* mat){
    listaMaterial.push_back(mat);
}
void Alumno::mostrarDatos(){
        Usuario::mostrarDatos();
}