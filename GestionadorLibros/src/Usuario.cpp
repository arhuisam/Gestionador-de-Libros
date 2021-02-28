#include "Usuario.h"
using namespace std;

Usuario::Usuario(string nombres, string apellidos, string DNI){
        nombres=nombres;
		apellidos=apellidos;
		DNI=DNI;
}
string Usuario::getNombre(){
    return nombres;
}
string Usuario:: getApellidos(){
    return apellidos;

}
string Usuario::getDNI(){
    return DNI;
}
void Usuario::mostrarDatos(){
    cout<<"Nombres: "<<nombres<<endl;
    cout<<"Apellidos: "<<apellidos<<endl;
    cout<<"DNI: "<<DNI<<endl;
    cout<<endl;
}
