#include <iostream>
#include "Profesor.h"
#include "Estanteria.h"
#include "Libro.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Estanteria.h"
#include "Material.h"
#include "Usuario.h"
#include "Revista.h"

using namespace std;

int main(){

    Estanteria estanteria;
    int x, y, nProf=0, nAlum=0,nLibros=0,nRevistas=0;
    string cod,nombres;
    Profesor listaProfesor[20];
    Alumno listaAlumno[20];
    Revista listaRevista[20];
    Libro listaLibro[20];
    cout<<"Que accion desea realizar:"<<endl;
    cout<<"1. Registrar usuario"<<endl;
    cout<<"2. Ingresar material"<<endl;
    cout<<"3. Crear estanteria"<<endl;
    cout<<"4. Modificar datos"<<endl;
    cout<<"5. Imprimir datos"<<endl;
    cin>>x;
    switch(x)
    {
    case 1:    
        cout<<"Que tipo de usuario desea ingresar?"<<endl;
        cout<<"1. Profesor"<<endl;
        cout<<"2. Alumno"<<endl;
        cin>>y;
        switch(y)
        {
        case 1:
            nProf++;
            listaProfesor[nProf].registrarprofesor();
        break;
        case 2:
            nAlum++;
            listaAlumno[nAlum].registrarAlumno();
        break;
        }
    break;
    case 2:
    cout<<"Que tipo de material desea ingresar?"<<endl;
        cout<<"1. Libro"<<endl;
        cout<<"2. Revista"<<endl;
        cin>>y;
        switch(y)
        {
        case 1:
            nProf++;
            listaProfesor[nProf].registrarprofesor();
        break;
        case 2:
            nAlum++;
            listaAlumno[nAlum].registrarAlumno();
        break;
        }

    break;
    }
    return 0;
}
