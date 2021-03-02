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

int main()
{

    Estanteria estanteria;
    int x=0, y=0, z, s, v, w, nProf=0, nAlum=0,nLibros=0,nRevistas=0,nEstanteria=0,aux=0;
    string cod,nombres;
    Profesor listaProfesor[20];
    Alumno listaAlumno[20];
    Revista listaRevista[20];
    Libro listaLibro[20];
    Estanteria listaEstanteria[20];
    do
    {
    cout<<"Que accion desea realizar:"<<endl;
    cout<<"1. Registrar usuario"<<endl;
    cout<<"2. Ingresar material"<<endl;
    cout<<"3. Crear estanteria"<<endl;
    cout<<"4. Modificar datos"<<endl;
    cout<<"5. Mostrar Lista "<<endl;
    cout<<"6. Imprimir datos"<<endl; //colocarlos en txts
    cout<<"7. Finalizar"<<endl;
    cin>>x;
    switch(x)
    {
    case 1:
        do
        {
            cout<<"Que tipo de usuario desea ingresar?"<<endl;
            cout<<"1. Profesor"<<endl;
            cout<<"2. Alumno"<<endl;
            cout<<"3. Retroseder"<<endl;
            cin>>y;
            switch(y)
            {
                case 1:
                    listaProfesor[nProf].registrar();
                    nProf++;
                break;
                case 2:
                    listaAlumno[nAlum].registrar();
                    nAlum++;
                break;
                case 3:
                    cout<<"retrosediendo...";
                break;
                default:
                    cout<<"DESICION INVALIDA";
                break;
            }
        }while(y!=3);
    break;
    case 2:
        do
        {
        cout<<"Que tipo de material desea ingresar?"<<endl;
        cout<<"1. Libro"<<endl;
        cout<<"2. Revista"<<endl;
        cout<<"3. Retroseder"<<endl;
        cin>>y;
        switch(y)
        {
            case 1:         
                listaRevista[nRevistas].registrarRevista();
                nRevistas++;
            break;
            case 2:
                listaLibro[nLibros].registrarLibro();
                nLibros++;
            break;
            case 3:
                cout<<"Retrosediendo..."<<endl;
            break;
            default:
                cout<<"DESICION INVALIDA"<<endl;
            break;
        }
        } while (y!=3);
    break;
    case 3:
        if(nEstanteria!=0){
            listaEstanteria[nEstanteria].registrar();
            cout<<"Que tipo de usuario desea asignarle "<<endl;
            cout<<"Profesor =1/Alumno =2";
            cin>>aux;
            if(aux==1){
                cout<<setw(3)<<"#";
                cout<<setw(10)<<"Nombre";
                cout<<setw(10)<<"Apellido";
                cout<<setw(10)<<"DNI";
                cout<<setw(10)<<"Codigo";
                for(int i = 0; i <  nProf; i++)
                    {
                    cout<<left<<setw(3)<<i+1;
                    listaProfesor[i].mostrarDatos();
                    cout<<endl;
                    }
            }else if(aux==2){

            }else{
                cout<<"Asignacion invalida!!";
            }


        }
        //asignarle a un usuario
        nEstanteria++;
        listaEstanteria[nEstanteria].registrarEstanteria();
    break;
    case 4:
        do
        {
        cout<<"Que datos desea cambiar?"<<endl;
        cout<<"1. Usuario"<<endl;
        cout<<"2. Material"<<endl;
        cout<<"3. Estanteria"<<endl;
        cout<<"4. Retroceder"<<endl;
        cin>>w;
        switch(w)
        {
        case 1:
            cout<<"Que tipo de usuario desea cambiar?"<<endl;
            cout<<"1. Profesor"<<endl;
            cout<<"2. Alumno"<<endl;
            cin>>w;
            if(w==1)
            {
                if(nProf!=0 )
                {
                    cout<<left;
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Nombre";
                    cout<<setw(10)<<"Apellido";
                    cout<<setw(10)<<"DNI";
                    cout<<setw(10)<<"Codigo";
                    for(int i = 0; i <  nProf; i++)
                    {
                        cout<<left<<setw(3)<<i+1;
                        listaProfesor[i].mostrarDatos();
                        cout<<endl;
                    }
                    cout<<"Ingrese el (#) del profesor que desea modificar :";
                    cin>>aux;
                    if(aux>0 && aux<=nProf)
                    {
                        listaProfesor[aux-1].modificar();
                        cout<<endl<<"Modificacion exitosa "<<endl<<endl;
                    }
                    else
                    {
                        cout<<"No existe el Profesor que intenta modificar "<<endl;
                    }
                }
                else
                {
                    cout<<"No hay Profesores registrados "<<endl;
                }
            }
            else
            if(w==2)
            {
                if(nAlum!=0 )
                {
                    cout<<left;
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Nombre";
                    cout<<setw(10)<<"Apellido";
                    cout<<setw(10)<<"DNI";
                    cout<<setw(10)<<"Codigo";
                    cout<<endl;
                    for(int i = 0; i <  nAlum; i++)
                    {
                        cout<<left<<setw(3)<<i+1;
                        listaAlumno[i].mostrarDatos();
                        cout<<endl;
                    }
                    cout<<"Ingrese el (#) del alumno que desea modificar :";
                    cin>>aux;
                    if(aux>0 && aux<=nAlum)
                    {
                        listaAlumno[aux-1].modificar();
                        cout<<endl<<"Modificacion exitosa "<<endl<<endl;
                    }
                    else
                    {
                        cout<<"No existe el alumno que intenta modificar "<<endl;
                    }
                }
                else
                {
                    cout<<"No hay alumnos registradas "<<endl;
                }
            }
        break;
        case 2:
            cout<<"Que tipo de material desea cambiar?"<<endl;
            cout<<"1. Libro"<<endl;
            cout<<"2. Revista"<<endl;
            cin>>w;
            if(w==1)
            {
                if(nLibros!=0 )
                {
                    cout<<left;
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Titulo";
                    cout<<setw(10)<<"Autor";
                    cout<<setw(10)<<"Categoria";
                    cout<<setw(10)<<"Editorial";
                    cout<<setw(10)<<"Edicion";
                    cout<<setw(10)<<"Ciudad";
                    for(int i = 0; i <  nLibros; i++)
                    {
                        cout<<left<<setw(3)<<i+1;
                        listaLibro[i].mostrarDatos();
                        cout<<endl;
                    }
                    cout<<"Ingrese el (#) del libro que desea modificar :";
                    cin>>aux;
                    if(aux>0 && aux<=nLibros)
                    {
                        listaLibro[aux-1].modificar();
                        cout<<endl<<"Modificacion exitosa "<<endl<<endl;
                    }
                    else
                    {
                        cout<<"No existe el libro que intenta modificar "<<endl;
                    }
                }
                else
                {
                    cout<<"No hay libros registrados "<<endl;
                }
            }else if(w==2)
            {
                if(nRevistas!=0 )
                {
                    cout<<left;
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Titulo";
                    cout<<setw(10)<<"Autor";
                    cout<<setw(10)<<"Categoria";
                    cout<<setw(10)<<"Editorial";
                    cout<<setw(10)<<"Anio";
                    cout<<setw(10)<<"Voluemn";
                    cout<<setw(10)<<"Numero";
                    cout<<endl;
                    for(int i = 0; i <  nRevistas; i++)
                    {
                        cout<<left<<setw(3)<<i+1;
                        listaRevista[i].mostrarDatos();
                        cout<<endl;
                    }
                    cout<<"Ingrese el (#) del libro que desea modificar :";
                    cin>>aux;
                    if(aux>0 && aux<=nRevistas)
                    {
                        listaRevista[aux-1].modificar();
                        cout<<endl<<"Modificacion exitosa "<<endl<<endl;
                    }
                    else
                    {
                    cout<<"No existe la revista que intenta modificar "<<endl;
                    }
                }
                else
                {
                    cout<<"No hay revistas registradas "<<endl;
                }
            }
        break;
        case 3:
            cout<<"Cambiando estanteria..."<<endl;
        break;
        case 4:
            cout<<"Retrocediendo..."<<endl;
        break;
        default:
            cout<<"DESICION INVALIDA"<<endl;
        break;
        }
        } while (w!=4);    
    break;
    case 5:
    do
    {
        cout<<"Cuales tipos de datos desea mostrar?"<<endl;
        cout<<"1. Usuario"<<endl;
        cout<<"2. Material"<<endl;
        cout<<"3. Estanteria"<<endl;
        cout<<"4. Retroceder"<<endl;
        switch(v)
        {
            case 1:
                cout<<"Cual tipo de usuario desea mostrar?"<<endl;
                cout<<"1. Profesor"<<endl;
                cout<<"2. Alumno"<<endl;
            switch(s)
            {
                case 1:
                if(nProf!=0)
                {
                    cout<<left;
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Nombre";
                    cout<<setw(10)<<"Apellido";
                    cout<<setw(10)<<"DNI";
                    cout<<setw(10)<<"Codigo";
                    for(int i = 0; i <  nProf; i++)
                    {
                    cout<<left<<setw(3)<<i+1;
                    listaProfesor[i].mostrarDatos();
                    cout<<endl;
                    }
                }
                break;
                case 2:
                if(nAlum!=0)
                {
                    cout<<left;
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Nombre";
                    cout<<setw(10)<<"Apellido";
                    cout<<setw(10)<<"DNI";
                    cout<<setw(10)<<"Codigo";
                    cout<<endl;
                    for(int i = 0; i <  nAlum; i++)
                    {
                        cout<<left<<setw(3)<<i+1;
                        listaAlumno[i].mostrarDatos();
                        cout<<endl;
                    }

                }
                break;
            }
            break;
            case 2:
                cout<<"Cual tipo de material desea mostrar?"<<endl;
                cout<<"1. Libro"<<endl;
                cout<<"2. Revista"<<endl;
                switch(s)
                {
                    case 1:
                    if(nLibros!=0)
                    {
                        cout<<setw(10)<<"Titulo";
                        cout<<setw(10)<<"Autor";
                        cout<<setw(10)<<"Categoria";
                        cout<<setw(10)<<"Editorial";
                        cout<<setw(10)<<"Edicion";
                        cout<<setw(10)<<"Ciudad";
                        cout<<endl;
                        for(int i = 0; i < nLibros; i++)
                        {
                            cout<<left<<setw(3)<<i+1;
                            listaLibro[i].mostrarDatos();
                            cout<<endl;   
                        }
                        cout<<endl;
                    }
                    else
                    {
                        cout<<"No hay libros registrados "<<endl;
                    }
                    
                    break;
                    case 2:
                    if(nRevistas!=0)
                    {
                        cout<<setw(3)<<"#";
                        cout<<setw(10)<<"Titulo";
                        cout<<setw(10)<<"Autor";
                        cout<<setw(10)<<"Categoria";
                        cout<<setw(10)<<"Editorial";
                        cout<<setw(10)<<"Anio";
                        cout<<setw(10)<<"Voluemn";
                        cout<<setw(10)<<"Numero";
                        cout<<endl;
                        for(int i = 0; i < nRevistas; i++)
                        {
                            cout<<left<<setw(3)<<i+1;
                            listaRevista[i].mostrarDatos();
                            cout<<endl;   
                        }
                        cout<<endl;
                    }
                    else
                    {
                        cout<<"No hay revistas registrados "<<endl;
                    }
                    
                    break;
                }
            break;
            case 3:

            break;
            case 4:
                cout<<"Retrocediendo..."<<endl;
            break;
            default:
                cout<<"DESICION INVALIDA"<<endl;
            break;
        }
    } while (v!=4);
    

    case 6:

    break;
    case 7:
        cout<<"Finalizando...";
    break;
    }
    }while(x!=7); //switch
    
    return 0;
}
