#include "Profesor.h"
#include <string.h>
using namespace std;

/*Profesor::Profesor(string nombres,string apellidos,string DNI,int cod_prof ) : Usuario(nombres, apellidos, DNI)
{
    nombres=nombres;
    apellidos=apellidos;
    DNI=DNI;
    Cod_prof=cod_prof;
}*/
void Profesor ::aniadirMaterial(Material* mat){
    listaMaterial.push_back(mat);
}
void Profesor::mostrarDatos(){
        Usuario::mostrarDatos();
}
void Profesor ::registrarprofesor(){
    Usuario::registrar();
    cout<<"Ingrese su codigo :";
    cin>>Cod_prof;
}
