#include "Profesor.h"
#include <string.h>
#include <iomanip>
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
    cout<<left;
    cout<<setw(10)<<nombres;
    cout<<setw(10)<<apellidos;
    cout<<setw(10)<<DNI;
    cout<<setw(10)<<Cod_prof;
        
}
void Profesor ::registrar(){
    Usuario::registrar();
    cout<<"Ingrese su codigo :";
    cin>>Cod_prof;
}
void Profesor ::modificar(){
    Profesor::registrar();
}
