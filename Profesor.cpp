#include "Profesor.h"
#include <string>
using namespace std;

Profesor::Profesor(string nombres,string apellidos,string DNI ) : Usuario(nombres, apellidos, DNI)
{
    nombres=nombres;
    apellidos=apellidos;
    DNI=DNI;
}
void Profesor ::aniadirMaterial(Material* mat){
    listaMaterial.push_back(mat);
}
void Profesor::mostrarDatos(){
        Usuario::mostrarDatos();
}