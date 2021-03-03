#include "Usuario.h"
#include <string.h>
using namespace std;

/*Usuario::Usuario(string nombres, string apellidos, string DNI){
        nombres=nombres;
		apellidos=apellidos;
		DNI=DNI;
}*/
/*string Usuario::getNombre(){
    return nombres;
}
string Usuario:: getApellidos(){
    return apellidos;

}
string Usuario::getDNI(){
    return DNI;
}*/
void Usuario ::registrar(){
    cout<<"Ingrese su nombre :";
    //cin.ignore();
    //cin.getline(nombres,20, 'n');
    cin>>nombres;
    cout<<"Ingrese su apellido :";
    cin>>apellidos;
    cout<<"Ingrese su DNI :";
    cin>>DNI;
}

/*void Usuario::mostrarDatos(){
    cout<<"Nombres: "<<nombres<<endl;
    cout<<"Apellidos: "<<apellidos<<endl;
    cout<<"DNI: "<<DNI<<endl;
    cout<<endl;
}*/
