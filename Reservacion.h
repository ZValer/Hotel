#ifndef RESERVACION_H
#define RESERVACION_H
#include <iostream>
using namespace std;

#include <string>
#include "Persona.h"
#include "ServicioCuarto.h"
#include "ServicioEspecial.h"

class Reservacion
{
    private: //atributos
        Persona persona; //Relación de tipo composición
                                    //Una resevación puede tener una persona
                                    //La persona no puede existir sin una reservación

        int numeroPersonas;
        int duracionEstancia;
        string tipoCuarto;

        ServicioCuarto serviciosCuarto[3];
        ServicioEspecial servicioEspecial[1];



    public: //métodos
        Reservacion();
        Reservacion(int, int, string);

        //imprime datos
        string imprimeDatosReserva();

        //setter y gettter de persona
        void setPersona(string, int, string);
        Persona getPersona();

        //setters de cada atributo
        void setNumeroPersonas(int);
        void setDuracionEstancia(int);
        void setTipoCuarto(string);


        //getters de cada atributo
        int getNumeroPersonas();
        int getDuracionEstancia();
        string getTipoCuarto();

        //Agrega los servicios al cuarto y los imprime
        void agregaServicioCuarto(ServicioCuarto, int);
        string infoServiciosCuarto();

        //Agrega los servicios especiales y los imprime
        void agregaServicioEspecial(ServicioEspecial, int);
        string infoServicioEspecial();
};



#endif // RESERVACION_H
