#include "Alumno.h"
#include <iomanip>
#include <fstream>
#include <string.h>
using namespace std;

/*Alumno::Alumno(string nombres,string apellidos,string DNI,int cod_alu ) : Usuario(nombres, apellidos, DNI)
{
    nombres=nombres;
    apellidos=apellidos;
    DNI=DNI;
    Cod_Alu=cod_alu;
}*/
/*void Alumno ::aniadirMaterial(Material* mat){
    listaMaterial.push_back(mat);
}*/
void Alumno::mostrarDatos(){
    cout<<left;
    cout<<setw(10)<<nombres;
    cout<<setw(10)<<apellidos;
    cout<<setw(10)<<DNI;
    cout<<setw(10)<<Cod_Alu;
}
void Alumno::registrar(){
    Usuario::registrar();
    cout<<"Ingrese su codigo :";
    cin>>Cod_Alu;
}
void Alumno::modificar(){
    Alumno::registrar();
}
void Alumno :: agregarEstanteriaAlum(EstanteriaAlum *E){
    estanteriaalum[nEstanteriaalum]=E;
    nEstanteriaalum = nEstanteriaalum+1;
}
char* Alumno :: getAlumno(){
    
    return nombres;
}
void Alumno :: imprimirAlumno(){
    ofstream archivo;
    archivo.open("Alumnos.txt",ios :: trunc | ios :: app);
    archivo<<nombres<<" "<<apellidos<<" "<<DNI<<" "<<Cod_Alu<<endl;
