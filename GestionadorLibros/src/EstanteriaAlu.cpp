#include "EstanteriaAlu.h"
#include "Usuario.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Material.h"
#include "Revista.h"
#include "Libro.h"
#include <iomanip>
using namespace std;

/*void Estanteria::crearLibro(string titulo,string autor,string categoria,string editorial,string cod_prof,string cod_alu,string edicion,string ciudad){
    int indP,n;
    Profesor *objP;
    indP=buscarProfesor(cod_prof);
}*/


/*void Estanteria :: relacionarRevista(string titulo,string autor,string categoria,string editorial,string cod_prof,string cod_alu,string anio,string volumen,int numero) {

}*/
void EstanteriaAlu :: registrar(){
    cout<<"Ingrese nombre de la estanteria: "<<endl;
    cin>>Nombre;
}

void EstanteriaAlu :: asignarAlumno(Alumno* alum){
        alumno =alum;
}

char* EstanteriaAlu :: getEstanteriaalu(){
    return Nombre;
}
void EstanteriaAlu :: mostrarDatos(){
    cout<<setw(10)<<Nombre;
}
//captura el profesor
/*void EstanteriaAlum ::mostrarDatosProfe(){
    Estanteria ::mostrarDatos();
    cout<<profesor -> getProfesor();
}*/
//capturar el alumno
void EstanteriaAlu :: mostrarDatosAlu(){
    EstanteriaAlu ::mostrarDatos();
    cout<<alumno->getAlumno();
}
void EstanteriaAlu :: agregarRevista(Revista *revi){
    revista[nRevistas] = revi;
    nRevistas = nRevistas+1;
}
void EstanteriaAlu :: agregarLibro(Libro *lib){
    libro[nLibros] = lib;
    nLibros = nLibros+1;

}

void EstanteriaAlu :: imprimirEstanteriaAlu()
{
    ofstream archivo;
    archivo.open("Alumnos.txt",ios :: trunc | ios :: app);
    archivo<<Nombre<<" "<<profesor<<" "<<revista<<" "<<libro<<endl;
    archivo.close();
}

