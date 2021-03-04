#ifndef FRUTA_H
#define FRUTA_H

#include<string>
#include<string.h>
#include<iostream>
using namespace std;


class Fruta
{
   protected:
        string nombreFruta;
        string color;
        string estacionCosecha;

    public:
        Fruta();
        //
        //
        void Registrar();
        void Mostrar();
        void Imprimir();
};

#endif // FRUTA_H
