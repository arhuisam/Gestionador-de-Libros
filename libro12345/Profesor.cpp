#include "Profesor.h"
#include <string>
using namespace std;

Profesor::Profesor(string nombres,string apellidos,string DNI,int cod_prof ) : Usuario(nombres, apellidos, DNI)
{
    nombres=nombres;
    apellidos=apellidos;
    DNI=DNI;
    Cod_prof=cod_prof;
}
void Profesor ::aniadirMaterial(Material* mat){
    listaMaterial.push_back(mat);
}
/*void Profesor ::aniadirRevista(Revista* mat){
    listaRevista.push_back(mat);
}*/
/*void Profesor ::aniadirLibro(Libro* mat){
    listaLibro.push_back(mat);
}*/
void Profesor::mostrarDatos(){
        Usuario::mostrarDatos();
}