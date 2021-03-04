#include "Profesor.h"
#include <string.h>
#include <fstream>
#include <iomanip>
using namespace std;

/*Profesor::Profesor(string nombres,string apellidos,string DNI,int cod_prof ) : Usuario(nombres, apellidos, DNI)
{
    nombres=nombres;
    apellidos=apellidos;
    DNI=DNI;
    Cod_prof=cod_prof;
}*/
/*void Profesor ::aniadirMaterial(Material* mat){
    listaMaterial.push_back(mat);
}*/
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
void Profesor :: agregarEstanteria(Estanteria *E){
    estanteria[nEstanteria] = E;
    nEstanteria = nEstanteria+1;
}
char* Profesor :: getProfesor(){
    return nombres;
}
char* Profesor ::getProfesorDNI(){
    return DNI;
}
void Profesor :: imprimirProfesor(){
    ofstream archivo;
    archivo.open("Profesores.txt",ios :: trunc | ios :: app);
    archivo<<nombres<<" "<<apellidos<<" "<<DNI<<" "<<Cod_prof<<endl;
    archivo.close();
}