#include "Material.h"
#include <string>
using namespace std;


Material::Material(string titulo,string autor,string categoria,string editorial){
    Titulo =titulo;
	Autor = autor;
	Categoria = categoria;
	Editorial = editorial;

}

string Material::getTitulo(){
    return Titulo;
}

