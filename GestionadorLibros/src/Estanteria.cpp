#include "Estanteria.h"
#include "Usuario.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Material.h"
#include "Revista.h"
#include "Libro.h"

#include <iomanip>
#include <fstream>

using namespace std;

/*void Estanteria::crearLibro(string titulo,string autor,string categoria,string editorial,string cod_prof,string cod_alu,string edicion,string ciudad){
    int indP,n;
    Profesor *objP;
    indP=buscarProfesor(cod_prof);
}*/


/*void Estanteria :: relacionarRevista(string titulo,string autor,string categoria,string editorial,string cod_prof,string cod_alu,string anio,string volumen,int numero) {

}*/
void Estanteria :: registrar(){
    cout<<"Ingrese nombre de la estanteria: "<<endl;
    cin>>Nombre;
}
void Estanteria :: asignarProfesor(Profesor *profe){
        profesor =profe;
}
/*void Estanteria :: asignarAlumno(Alumno* alum){
        alumno =alum;
}*/

char* Estanteria :: getEstanteria(){
    return Nombre;
}
void Estanteria :: mostrarDatos(){
    cout<<setw(10)<<Nombre;

}
//captura el profesor
void Estanteria ::mostrarDatosProfe(){
    Estanteria ::mostrarDatos();
    cout<<profesor -> getProfesor();
}
//capturar el alumno
/*void Estanteria :: mostrarDatosAlum(){
    Estanteria ::mostrarDatos();
    cout<<alumno->getAlumno();
}*/

void Estanteria ::agregarRevista(Revista *revi){
    revista[nRevistas] = revi;
    nRevistas = nRevistas+1;
}
void Estanteria ::agregarLibro(Libro *lib){
    libro[nLibros] = lib;
    nLibros = nLibros+1;

}

void Estanteria :: imprimirEstanteria()
{
    ofstream archivo;
    archivo.open("Profesores.txt",ios :: trunc | ios :: app);
    archivo<<Nombre<<" "<<profesor<<" "<<revista<<" "<<libro<<endl;
    archivo.close();
}