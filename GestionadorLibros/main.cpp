#include <iostream>
#include "Profesor.h"
#include "Estanteria.h"
#include "EstanteriaAlu.h"
#include "Libro.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Estanteria.h"
#include "Material.h"
#include "Usuario.h"
#include "Revista.h"
#include <iomanip>
#include <fstream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    ofstream archivo;
    Estanteria estanteria;
    int x=0, y=0, z, s, v, w, u, p, ind=0, nProf=0, nAlum=0,nLibros=0,nRevistas=0,nEstanteria=0,aux=0,nEstanteriaalu=0,indice,comprobador;
    char libro[20],revi[20];
    char dni[10];
    string cod,nombres;
    Profesor listaProfesor[20];
    Alumno listaAlumno[20];
    Revista listaRevista[20];
    Libro listaLibro[20];
    Estanteria listaEstanteria[20];
    EstanteriaAlu listaEstanteriaalu[20];


    do{
    cout<<"Que accion desea realizar:"<<endl;
    cout<<"1. Registrar usuario"<<endl;//cUMPLE
    cout<<"2. Ingresar material"<<endl;//CUMPLE
    cout<<"3. Crear estanteria"<<endl;//CUMPLE
    cout<<"4. Modificar datos"<<endl;
    cout<<"5. Mostrar Lista "<<endl;
    cout<<"6. Imprimir datos"<<endl;
    cout<<"7. Buscar usuario"<<endl;
    cout<<"8. Finalizar"<<endl;
    cin>>x;
    switch(x){
    case 1:
        do{
            system("CLS");
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
                    cout<<"Registro exitoso!"<<endl;
                    system("PAUSE");
				    system("CLS");
                break;
                case 2:
                    listaAlumno[nAlum].registrar();
                    nAlum++;
                    cout<<"Registro exitoso!"<<endl;
                    system("PAUSE");
				    system("CLS");
                break;
                case 3:
                    cout<<"retrosediendo...";
                    system("PAUSE");
				    system("CLS");
                break;
                default:
                    cout<<"DESICION INVALIDA";
                    system("PAUSE");
				    system("CLS");
                break;
            }
        }while(y!=3);       //do while del primer case 1
    break;
    case 2:
        do{
        system("CLS");
        cout<<"Que tipo de material desea ingresar?"<<endl;
        cout<<"1. Revista"<<endl;
        cout<<"2. Libro"<<endl;
        cout<<"3. Retroseder"<<endl;
        cin>>y;
        switch(y){
            case 1:
                if(nEstanteria!=0 or nEstanteriaalu!=0){
                listaRevista[nRevistas].registrarRevista();
                cout<<left;
                cout<<setw(3)<<'#';
                cout<<setw(10)<<"Nombre";
                cout<<endl;
                for(int i=0;i<nEstanteria;i++){
                    cout<<left<<setw(3)<<i+1;
                    listaEstanteria[i].mostrarDatos();
                    cout<<endl;
                    }
                for(int i=0;i<nEstanteriaalu;i++){
                    cout<<left<<setw(3)<<1+nEstanteria+i;
                    listaEstanteriaalu[i].mostrarDatos();
                   cout<<endl;
                }
                    cout<<"Ingrese numero (#) :";cin>>ind;//corregir
               /* do{
                    cout<<"Ingrese numero (#) :";cin>>ind;
                    if((nEstanteria<ind or 0==ind) && (nEstanteriaalu<ind or 0==ind)){
                        cout<<"La estanteria que intenta asignar no existe "<<endl;
                    }else{
                        cout<<endl;cout<<"Asignado correctamente"<<endl;
                    }
                }while(nEstanteria<ind or 0==ind or nEstanteriaalu<ind);*/
                    cout<<"La estanteria pertenece (Profesor=1/Alumno=2) :";
                    cin>>aux;
                    if(aux==1){
                        listaRevista[nRevistas].asignarEstanteria(&listaEstanteria[ind-1]);
                        listaEstanteria[ind-1].agregarRevista(&listaRevista[nRevistas]);
                        nRevistas++;

                    }else if(aux==2){
                        listaRevista[nRevistas].asignarEstanteriaAlu(&listaEstanteriaalu[ind-1-nEstanteria]);
                        listaEstanteriaalu[ind-1-nEstanteria].agregarRevista(&listaRevista[nRevistas]);
                        nRevistas++;
                    }
                    for(int i = nRevistas-1;i<nRevistas;i++){
                            if(aux==1){
                                 revi[nRevistas-1]='p';
                            }else{
                                revi[nRevistas-1]='a';
                            }

                    }
                    cout<<"Registro exitoso!"<<endl;
                }
                else{
                    cout<<"No existen estanterias para poder realizar esta accion!"<<endl;
                }
                system("PAUSE");
				system("CLS");
            break;
            case 2:
            /// faltaaa declararr//errrrrrrrrror coregir
            if(nEstanteria!=0 or nEstanteriaalu!=0){
                listaLibro[nLibros].registrarLibro();
                cout<<left;
                cout<<setw(3)<<'#';
                cout<<setw(10)<<"Nombre";
                cout<<endl;
                for(int i=0;i<nEstanteria;i++){
                    cout<<left<<setw(3)<<i+1;
                    listaEstanteria[i].mostrarDatos();
                    cout<<endl;
                }
                for(int i=0;i<nEstanteriaalu;i++){
                cout<<left<<setw(3)<<1+nEstanteria+i;
                listaEstanteriaalu[i].mostrarDatos();
                cout<<endl;
                }
                cout<<"Ingrese numero (#) :";cin>>ind;//corregir
              /*  do{
                    cout<<"Ingrese numero (#) :";cin>>ind;//corregir
                    if((nEstanteria or 0==ind)&& (nEstanteriaalu<ind or 0==ind)){
                        cout<<"La estanteria que intenta asignar no existe "<<endl;
                    }else{
                        cout<<endl;cout<<"Asignado correctamente"<<endl;
                    }
                }while(nEstanteria<ind or 0==ind  or nEstanteriaalu<ind);*/
                    cout<<"La estanteria pertenece (Profesor=1/Alumno=2)";
                    cin>>aux;
                    if(aux==1){
                        listaLibro[nLibros].asignarEstanteria(&listaEstanteria[ind-1]);
                        listaEstanteria[ind-1].agregarLibro(&listaLibro[nLibros]);
                        nLibros++;

                    }else if(aux==2){
                        listaLibro[nLibros].asignarEstanteriaAlu(&listaEstanteriaalu[ind-1-nEstanteria]);
                        listaEstanteriaalu[ind-1-nEstanteria].agregarLibro(&listaLibro[nLibros]);
                        nLibros++;
                    }
                    for(int i = nLibros-1;i<nLibros;i++){
                        if(aux==1){
                            libro[nLibros-1]='p';
                        }else{
                            libro[nLibros-1]='a';
                            }

                    }
                    cout<<"Registro exitoso!"<<endl;
            }
            else{
            cout<<"No existen estanterias para poder realizar esta accion!"<<endl;
            }
                system("PAUSE");
				system("CLS");
            break;
            case 3:
                cout<<"Retrosediendo..."<<endl;
                system("PAUSE");
				system("CLS");
            break;
            default:
                cout<<"DESICION INVALIDA"<<endl;
                system("PAUSE");
				system("CLS");
            break;
        }
        } while (y!=3); //do while del primer case 2
    break;
    case 3:
            system("CLS");

            cout<<"Que tipo de usuario desea asignarle "<<endl;
            cout<<"(Profesor =1/Alumno =2) :"<<endl;
            cin>>aux;
            if(aux==1){
                listaEstanteria[nEstanteria].registrar();
                if(nProf!=0){
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Nombre";
                    cout<<setw(10)<<"Apellido";
                    cout<<setw(10)<<"DNI";
                    cout<<setw(10)<<"Codigo";
                    cout<<endl;
                    for(int i = 0; i <  nProf; i++){
                    cout<<left<<setw(3)<<i+1;
                    listaProfesor[i].mostrarDatos();
                    cout<<endl;
                    }
                    do{
                        cout<<"Ingrese numero (#) :";cin>>ind;
                        if(nProf<ind or 0==ind){
                            cout<<"El profesor que intenta asignar no existe "<<endl;
                            system("PAUSE");
				            system("CLS");
                        }else{
                            cout<<endl;cout<<"Asignado Profesor correctamente"<<endl;
                            system("PAUSE");
				            system("CLS");
                        }
                    }while(nProf<ind or 0==ind);
                    listaEstanteria[nEstanteria].asignarProfesor(&listaProfesor[ind-1]);
                    listaProfesor[ind-1].agregarEstanteria(&listaEstanteria[nEstanteria]);
                    cout<<"Registro exitoso"<<endl;
                    nEstanteria++;
                    system("PAUSE");
				    system("CLS");
                }else{
                cout<<"No hay profesores registrado";
                system("PAUSE");
				system("CLS");
                }
            }else if(aux==2){ ////CAMVIAR
                listaEstanteriaalu[nEstanteriaalu].registrar();
                if(nAlum!=0){
                    cout<<left;
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Nombre";
                    cout<<setw(10)<<"Apellido";
                    cout<<setw(10)<<"DNI";
                    cout<<setw(10)<<"Codigo";
                    cout<<endl;
                    for(int i = 0; i <  nAlum; i++){
                        cout<<left<<setw(3)<<i+1;
                        listaAlumno[i].mostrarDatos();
                        cout<<endl;
                        }
                    do{
                        cout<<"Ingrese numero (#) :";
                        cin>>ind;
                        if(nAlum<ind or 0==ind){
                            cout<<"El alumno que intenta asignar no existe "<<endl;
                            system("PAUSE");
				            system("CLS");
                        }else{
                            cout<<endl;cout<<"Asignado Alumno correctamente"<<endl;
                            system("PAUSE");
				            system("CLS");
                        }
                    }while(nAlum<ind or 0==ind);
                    listaEstanteriaalu[nEstanteriaalu].asignarAlumno(&listaAlumno[ind-1]);
                    listaAlumno[ind-1].agregarEstanteriaAlu(&listaEstanteriaalu[nEstanteriaalu]);
                    cout<<"Registro exitoso"<<endl;
                    nEstanteriaalu++;
                    system("PAUSE");
				    system("CLS");
                }else{
                    cout<<"No hay Alumno registrado";
                    system("PAUSE");
				    system("CLS");
                }
            }else{
                cout<<"DESICION INVALIDA";
                system("PAUSE");
				system("CLS");
            }
    break;
    case 4:
        system("CLS");
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
            cout<<"3. Retroceder"<<endl;
            cin>>w;
            if(w==1){
                if(nProf!=0 ){
                    cout<<left;
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Nombre";
                    cout<<setw(10)<<"Apellido";
                    cout<<setw(10)<<"DNI";
                    cout<<setw(10)<<"Codigo";
                    cout<<endl;
                    for(int i = 0; i <  nProf; i++){
                        cout<<left<<setw(3)<<i+1;
                        listaProfesor[i].mostrarDatos();
                        cout<<endl;
                    }
                    cout<<"Ingrese el (#) del profesor que desea modificar :";
                    cin>>aux;
                    if(aux>0 && aux<=nProf){
                        listaProfesor[aux-1].modificar();
                        cout<<endl<<"Modificacion exitosa "<<endl<<endl;
                        system("PAUSE");
				        system("CLS");
                    }else{
                        cout<<"No existe el Profesor que intenta modificar "<<endl;
                        system("PAUSE");
				        system("CLS");
                    }
                }else{
                    cout<<"No hay Profesores registrados "<<endl;
                    system("PAUSE");
				    system("CLS");
                }
            }else if(w==2){
                if(nAlum!=0 ){
                    cout<<left;
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Nombre";
                    cout<<setw(10)<<"Apellido";
                    cout<<setw(10)<<"DNI";
                    cout<<setw(10)<<"Codigo";
                    cout<<endl;
                    for(int i = 0; i <  nAlum; i++){
                        cout<<left<<setw(3)<<i+1;
                        listaAlumno[i].mostrarDatos();
                        cout<<endl;
                    }
                    cout<<"Ingrese el (#) del alumno que desea modificar :";
                    cin>>aux;
                    if(aux>0 && aux<=nAlum){
                        listaAlumno[aux-1].modificar();
                        cout<<endl<<"Modificacion exitosa "<<endl<<endl;
                        system("PAUSE");
				        system("CLS");
                    }else{
                        cout<<"No existe el alumno que intenta modificar "<<endl;
                        system("PAUSE");
				        system("CLS");
                    }
                }else{
                    cout<<"No hay alumnos registradas "<<endl;
                    system("PAUSE");
				    system("CLS");
                }
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
                        system("PAUSE");
				        system("CLS");
                    }else{
                        cout<<"No existe el libro que intenta modificar "<<endl;
                        system("PAUSE");
				        system("CLS");
                    }
                }else{
                    cout<<"No hay libros registrados "<<endl;
                }
            }else if(w==2){
                if(nRevistas!=0 ){
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
                    for(int i = 0; i <  nRevistas; i++){
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
                        system("PAUSE");
				        system("CLS");
                    }
                    else
                    {
                    cout<<"No existe la revista que intenta modificar "<<endl;
                    system("PAUSE");
				    system("CLS");
                    }
                }
                else
                {
                    cout<<"No hay revistas registradas "<<endl;
                    system("PAUSE");
				    system("CLS");
                }
            }
        break;
        case 3:
            cout<<"Cambiando estanteria..."<<endl;
        break;
        case 4:
            cout<<"Retrocediendo..."<<endl;
            system("PAUSE");
			system("CLS");
        break;
        default:
            cout<<"DESICION INVALIDA"<<endl;
            system("PAUSE");
			system("CLS");
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
        cin>>v;
        switch(v)
        {
            case 1:
                cout<<"Cual tipo de usuario desea mostrar?"<<endl;
                cout<<"1. Profesor"<<endl;
                cout<<"2. Alumno"<<endl;
                cout<<"3. Retroceder"<<endl;
                cin>>s;
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
                    cout<<endl;
                    for(int i = 0; i <  nProf; i++)
                    {
                    cout<<left<<setw(3)<<i+1;
                    listaProfesor[i].mostrarDatos();
                    cout<<endl;
                    }
                }else{
                    cout<<"No hay profesores registrados"<<endl;
                }
                break;
                case 2:
                if(nAlum!=0){
                    cout<<left;
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Nombre";
                    cout<<setw(10)<<"Apellido";
                    cout<<setw(10)<<"DNI";
                    cout<<setw(10)<<"Codigo";
                    cout<<endl;
                    for(int i = 0; i <  nAlum; i++){
                        cout<<left<<setw(3)<<i+1;
                        listaAlumno[i].mostrarDatos();
                        cout<<endl;
                    }
                }else{
                    cout<<"No hay Alumnos registrados"<<endl;
                }
                break;
                case 3:
                    cout<<"Retrocediendo..."<<endl;
                    system("PAUSE");
				    system("CLS");
                break;
                default:
                    cout<<"DESICION INVALIDA"<<endl;
                    system("PAUSE");
				    system("CLS");
                break;
            }
            break;
            case 2:
                do{
                    cout<<"Cual tipo de material desea mostrar?"<<endl;
                    cout<<"1. Libro"<<endl;
                    cout<<"2. Revista"<<endl;
                    cout<<"3. Retroceder"<<endl;
                    cin>>s;
                    switch(s)
                    {
                        case 1:
                        if(nLibros!=0){
                            cout<<left;
                            cout<<setw(3)<<"#";
                            cout<<setw(10)<<"Titulo";
                            cout<<setw(10)<<"Autor";
                            cout<<setw(10)<<"Categoria";
                            cout<<setw(10)<<"Editorial";
                            cout<<setw(10)<<"Edicion";
                            cout<<setw(10)<<"Ciudad";
                            cout<<setw(10)<<"Estanteria";/////////////
                            cout<<endl;
                            for(int i = 0; i < nLibros; i++){
                                cout<<left<<setw(3)<<i+1;
                              if(libro[i]=='p'){
                                        listaLibro[i].mostrarDatosEstanteria();
                                        cout<<endl;
                                    }else if(libro[i]=='a'){
                                        listaLibro[i].mostrarDatosEstanteriaalu();
                                        cout<<endl;
                                    }else{
                                        cout<<"error";
                                    }                        
                            }
                            cout<<endl;
                            system("PAUSE");
				            system("CLS");
                        }else{
                            cout<<"No hay libros registrados "<<endl;
                            system("PAUSE");
				            system("CLS");
                        }
                        break;
                        case 2:
                        if(nRevistas!=0){
                            cout<<setw(3)<<"#";
                            cout<<setw(10)<<"Titulo";
                            cout<<setw(10)<<"Autor";
                            cout<<setw(10)<<"Categoria";
                            cout<<setw(10)<<"Editorial";
                            cout<<setw(10)<<"Anio";
                            cout<<setw(10)<<"Voluemn";
                            cout<<setw(10)<<"Numero";
                            cout<<setw(10)<<"Estanteria";////////
                            cout<<endl;

                            for(int i = 0; i < nRevistas; i++){
                                cout<<left<<setw(3)<<i+1;
                                    if(revi[i]=='p'){
                                        listaRevista[i].mostrarDatosEstanteria();
                                        cout<<endl;
                                    }else if(revi[i]=='a'){
                                        listaRevista[i].mostrarDatosEstanteriaalu();
                                        cout<<endl;
                                    }
                                }
                            /*for(int i = 0; i < nRevistas; i++){
                                cout<<left<<setw(3)<<i+1;
                                listaRevista[i].mostrarDatosEstanteria();
                                //listaRevista[i].mostrarDatosEstanteriaalu();
                                cout<<endl;
                            }

                            for(int i = confu; i < nRevistas; i++){
                                cout<<left<<setw(3)<<i+1;
                                listaRevista[i].mostrarDatosEstanteriaalu();
                                //listaRevista[i].mostrarDatosEstanteriaalu();
                                cout<<endl;
                                cout<<"hola";
                            }*/
                            cout<<endl;
                            system("PAUSE");
				            system("CLS");
                        }else{
                            cout<<"No hay revistas registrados "<<endl;
                            system("PAUSE");
				            system("CLS");
                        }
                        break;
                        case 3:
                            cout<<"Retrocediendo"<<endl;
                            system("PAUSE");
				            system("CLS");
                        break;
                        default:
                            cout<<"DESICION INVALIDA"<<endl;
                            system("PAUSE");
				            system("CLS");
                        break;
                    }
                }while(s!=3);
            break;
            case 3:
            cout<<"Para que tipo de usuario desea ver la estanteria "<<endl;
            cout<<"(Profesor =1/Alumno =2) :"<<endl;
            cin>>aux;
            if(aux==1){//////////////////////////
                if(nEstanteria!=0){
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Nombre";
                    cout<<setw(10)<<"Nombre Usuario";
                    cout<<endl;
                        for(int i = 0; i < nEstanteria; i++){
                            cout<<left<<setw(3)<<i+1;
                            listaEstanteria[i].mostrarDatosProfe();//////
                            cout<<endl;
                        }
                    cout<<endl;
                    system("PAUSE");
				    system("CLS");
                }else{
                cout<<"No hay estanterias registrados "<<endl;
                system("PAUSE");
				system("CLS");
                }
            }else if(aux==2){//////////////////////////////
                    if(nEstanteriaalu!=0){
                    cout<<setw(3)<<"#";
                    cout<<setw(10)<<"Nombre";
                    cout<<setw(10)<<"Nombre Usuario";
                    cout<<endl;
                        for(int i = 0; i < nEstanteriaalu; i++){
                            cout<<left<<setw(3)<<i+1;
                            listaEstanteriaalu[i].mostrarDatosAlu();///
                            cout<<endl;
                        }
                    cout<<endl;
                    system("PAUSE");
				    system("CLS");
                }else{
                cout<<"No hay estanterias registrados "<<endl;
                system("PAUSE");
				system("CLS");
                }
            }else{
                cout<<"Opcion invalida "<<endl;
            }

            break;
            case 4:
                cout<<"Retrocediendo..."<<endl;
                system("PAUSE");
				system("CLS");
            break;
            default:
                cout<<"DESICION INVALIDA"<<endl;
                system("PAUSE");
				system("CLS");
            break;
        }
    } while (v!=4);

    case 6:
        do{
            cout<<"Cuales tipos de datos desea imprimir?"<<endl;
            cout<<"1. Usuario"<<endl;
            cout<<"2. Material"<<endl;
            cout<<"3. Estanteria"<<endl;
            cout<<"4. Retroceder"<<endl;
            cin>>u;
            switch(u)
            {
                case 1:
                    do{
                        cout<<"Cual tipo de usuario desea mostrar?"<<endl;
                        cout<<"1. Profesor"<<endl;
                        cout<<"2. Alumno"<<endl;
                        cout<<"3. Retroceder"<<endl;
                        cin>>p;
                        switch(p)
                        {
                            case 1:
                                for(int i = 0; i <  nProf; i++)
                                {
                                    listaProfesor[i].imprimirProfesor();
                                }
                                //archivo.close();
                                cout<<"Impresion exitosa!"<<endl;
                                system("PAUSE");
				                system("CLS");
                            break;
                            case 2:
                                //archivo.open("Alumnos.txt",ios :: trunc | ios :: app);
                                //archivo<<"Nombres   Apellidos   DNI   Cod_Alu "<<endl;
                                //archivo.close();
                                for(int i = 0; i < nAlum; i++)
                                {
                                    listaAlumno[i].imprimirAlumno();
                                }
                                cout<<"Impresion exitosa!"<<endl;
                                system("PAUSE");
				                system("CLS");
                            break;
                            case 3:



                                cout<<"Retrocediendo..."<<endl;
                                system("PAUSE");
				                system("CLS");
                            break;
                            default:
                                cout<<"DESICION INVALIDA"<<endl;
                                system("PAUSE");
				                system("CLS");
                            break;
                        }
                    } while (p!=3);
                break;
                case 2:
                    do
                    {
                        cout<<"Cual tipo de material desea mostrar?"<<endl;
                        cout<<"1. Libro"<<endl;
                        cout<<"2. Revista"<<endl;
                        cout<<"3. Retroceder"<<endl;
                        cin>>p;
                        switch(p)
                        {
                            case 1:
                                for(int i = 0; i <  nLibros; i++)
                                {
                                    listaLibro[i].imprimirLibro();
                                }
                                cout<<"Impresion exitosa!"<<endl;
                                system("PAUSE");
				                system("CLS");
                            break;
                            case 2:
                                for(int i = 0; i <  nRevistas; i++)
                                {
                                    listaRevista[i].imprimirRevista();
                                }
                                cout<<"Impresion exitosa!"<<endl;
                                system("PAUSE");
				                system("CLS");
                            break;
                            case 3:
                                cout<<"Retrocediendo..."<<endl;
                                system("PAUSE");
				                system("CLS");
                            break;
                            default:
                                cout<<"DESICION INVALIDA"<<endl;
                                system("PAUSE");
				                system("CLS");
                            break;
                        }
                    } while (p!=3);


                break;
                case 3:
                    cout<<"Que tipo de estanteria desea imprimir?"<<endl;
                    cout<<"1. Estanteria de alumnos"<<endl;
                    cout<<"2. Estanteria de profesores"<<endl;
                    cout<<"3. Retroceder"<<endl;
                    cin>>p;
                    switch(p)
                    {
                        case 1:

                        break;
                        case 2:

                        break;
                        case 3:

                        break;
                        default:

                        break;
                    }
                break;
                case 4:
                    cout<<"Retrocediendo..."<<endl;
                    system("PAUSE");
			    	system("CLS");
                break;
                default:
                    cout<<"DESICION INVALIDA"<<endl;
                    system("PAUSE");
			    	system("CLS");
                break;
            }
        } while (u!=4);
    break;
    case 7:
        do{
        cout<<"1. Buscar Alumno"<<endl;
        cout<<"2. Buscar Profesor "<<endl;
        cout<<"3. Retroceder "<<endl;
        cout<<"Ingrese su opcion :";
        cin>>p;
      
            switch(p){
                case 1:
                cout<<"Ingrese el codigo del DNI"<<endl;
                cin>>dni;
				fflush(stdin);
					for(int i=0;i<nAlum;i++){
						if(strcmp(dni,listaAlumno[i].getAlumnoDNI())==0){
							indice=i;
							comprobador=1;
                            cout<<"Se ecuentro el Alumno"<<endl;
                            system("PAUSE");
						}else{
                            cout<<"No se ecuentro el Alumno"<<endl;
                        }	
					}
                break;
                case 2:
                cout<<"Ingrese el codigo del DNI"<<endl;
                cin>>dni;
                fflush(stdin);
					for(int i=0;i<nAlum;i++){
						if(strcmp(dni,listaProfesor[i].getProfesorDNI())==0){
							indice=i;
							comprobador=1;
                            cout<<"Se ecuentro el Profesor"<<endl;
						}else{
                            cout<<"NO se ecuentro el Profesor"<<endl;
                        }	
					}
                break;
                case 3:
                    cout<<"Retrocediendo..."<<endl;
                    system("PAUSE");
			    	system("CLS");

                break;
                default:
                    cout<<"DESICION INVALIDA"<<endl;
                    system("PAUSE");
			    	system("CLS");

                break;
            }

      }while(p!=3);

    break;
        case 8:
        cout<<"Finalizando...";

    break;
    }               //primer switch (x)
    }while(x!=8);  //primer do while

   return 0;

  } //main
