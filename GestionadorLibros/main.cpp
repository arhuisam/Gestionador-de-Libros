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
#include <iomanip>

using namespace std;

int main(){

    Estanteria estanteria;
    int x, y, z, w, nProf=0, nAlum=0,nLibros=0,nRevistas=0,nEstanteria=0,aux=0;
    string cod,nombres;
    Profesor listaProfesor[20];
    Alumno listaAlumno[20];
    Revista listaRevista[20];
    Libro listaLibro[20];
    Estanteria listaEstanteria[20];
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
            nRevistas++;
            listaRevista[nRevistas].registrarRevista();
        break;
        case 2:
            nLibros++;
            listaLibro[nLibros].registrarLibro();
        break;
        }

    break;
    case 3:
        nEstanteria++;
        listaEstanteria[nEstanteria].registrarEstanteria();        
    break;
    case 4:
        cout<<"Escoja una de las dos opciones: "<<endl;
        cout<<"1. Cambiar datos"<<endl;
        cout<<"2. Borrar datos"<<endl;
    break;
        switch(z)
        {
        case 1:
            cout<<"Que datos desea cambiar?"<<endl;
            cout<<"1. Usuario"<<endl;
            cout<<"2. Material"<<endl;
            cout<<"3. Estanteria"<<endl;
            //mostrar lista del dato escogido
            cin>>w;
            switch(w)
            {
                case 1:
                    cout<<"Que tipo de usuario desea cambiar?"<<endl;
                    cout<<"1. Profesor"<<endl;
                    cout<<"2. Alumno"<<endl;
                    cin>>w;
                    if(w==1){

                    }else{
                        
                    }
                break;
                case 2:
                    cout<<"Que tipo de material desea cambiar?"<<endl;
                    cout<<"1. Libro"<<endl;
                    cout<<"2. Revista"<<endl;
                    cin>>w;
                    if(w==1){
                        if(nLibros!=0 ){
                            cout<<left;
                            cout<<setw(3)<<"#";
                            cout<<setw(10)<<"Titulo";
                            cout<<setw(10)<<"Autor";
                            cout<<setw(10)<<"Categoria";
                            cout<<setw(10)<<"Editorial";
                            cout<<setw(10)<<"Edicion";
                            cout<<setw(10)<<"Ciudad";

                            for(int i = 0; i <  nLibros; i++){
                                cout<<left<<setw(3)<<i+1;
                                listaLibro[i].mostrarDatos();
                                cout<<endl;   
                            }
                            cout<<"Ingrese el (#) del libro que desea modificar :";
                            cin>>aux;
                            if(aux>0 && aux<=nLibros){
                                listaLibro[aux-1].modificar();
                                cout<<endl<<"Modificacion exitosa "<<endl<<endl;
                            }else{
                            cout<<"No existe el libro que intenta modificar "<<endl;
                            }   
                        
                        }else{
                        cout<<"No hay libros registrados "<<endl;
                        }
                    }else if(w==2){
                        if(nRevistas!=0 ){
                            cout<<left;
                            cout<<setw(3)<<"#";
                            cout<<setw(15)<<"Codigo";
                            cout<<setw(25)<<"Nombre";
                            cout<<setw(25)<<"Apellidos";
                            cout<<setw(20)<<"Telefono";
                            cout<<setw(15)<<"RUC";
                            cout<<setw(10)<<"DNI";
                            cout<<endl;
                            for(int i = 0; i <  nLibros; i++){
                                cout<<left<<setw(3)<<i+1;
                                listaLibro[i].mostrarDatos();
                                cout<<endl;   
                            }
                            cout<<"Ingrese el (#) del libro que desea modificar :";
                            cin>>aux;
                            if(aux>0 && aux<=nLibros){
                                listaLibro[aux-1].modificar();
                                cout<<endl<<"Modificacion exitosa "<<endl<<endl;
                            }else{
                            cout<<"No existe el libro que intenta modificar "<<endl;
                            }   
                        
                        }else{
                        cout<<"No hay libros registrados "<<endl;
                        }
                        
                    }
                break;
                case 3:
                    
                break;
            }
        break;
        case 2:
            cout<<"Que datos desea borrar?"<<endl;
            cout<<"1. Usuario"<<endl;
            cout<<"2. Material"<<endl;
            cout<<"3. Estanteria"<<endl;
            //mostrar lista del dato escogido
        break;
        }
    }
    
    return 0;
}
