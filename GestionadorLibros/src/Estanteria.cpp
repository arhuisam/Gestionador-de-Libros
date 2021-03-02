#include "Estanteria.h"
#include "Usuario.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Material.h"
#include "Revista.h"
#include "Libro.h"
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
void Estanteria :: asignarAlumno(Alumno* alum){
        alumno =alum;
}

char* Estanteria :: getEstanteria(){
    return Nombre;
}




