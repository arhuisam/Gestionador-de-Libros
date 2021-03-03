#include "EstanteriaAlum.h"
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
void EstanteriaAlum :: registrar(){
    cout<<"Ingrese nombre de la estanteria: "<<endl;
    cin>>Nombre;
}

void EstanteriaAlum :: asignarAlumno(Alumno* alum){
        alumno =alum;
}

char* EstanteriaAlum :: getEstanteria(){
    return Nombre;
}
void EstanteriaAlum :: mostrarDatos(){
    cout<<setw(10)<<Nombre;
}
//captura el profesor
/*void EstanteriaAlum ::mostrarDatosProfe(){
    Estanteria ::mostrarDatos();
    cout<<profesor -> getProfesor();
}*/
//capturar el alumno
void EstanteriaAlum :: mostrarDatosAlum(){
    EstanteriaAlum ::mostrarDatos();
    cout<<alumno->getAlumno();
}
