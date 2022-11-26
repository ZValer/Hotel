#include "Reservacion.h"

#include <iostream>
using namespace std;

#include "Persona.h"
#include "ServicioCuarto.h"
#include "ServicioEspecial.h"

#include <string>
#include <sstream>

//Contructor de Reservacion

Reservacion::Reservacion(){
    numeroPersonas=4;
    duracionEstancia=3;
    tipoCuarto="Suite";

    persona.setNombre("Cliente");
    persona.setTelefono(911);
    persona.setCorreo("cliente@gmail");
}

//Contructor de Reservacion que recibe datos

Reservacion::Reservacion(int _numeroPersonas, int _duracionEstancia, string _tipoCuarto){

    numeroPersonas=_numeroPersonas;
    duracionEstancia=_duracionEstancia;
    tipoCuarto=_tipoCuarto;
}

//método que imprime datos de la reservación

string Reservacion::imprimeDatosReserva(){
    stringstream aux;
    aux<<"\nDatos de la revervación"<<endl;
    aux<<"Numero de personas: "<<to_string(numeroPersonas)<<endl;
    aux<<"Duracion de la estancia: "<<to_string(duracionEstancia)<<endl;
    aux<<"Tipo de cuarto: "<<tipoCuarto<<endl;
    aux<<endl<<infoServicioEspecial();
    aux<<endl<<infoServiciosCuarto();

    return aux.str();
}

//recibe datos de la persona y añade sus datos con setters
void Reservacion::setPersona(string _nombre, int _telefono, string _correo){
    persona.setNombre(_nombre);
    persona.setTelefono(_telefono);
    persona.setCorreo(_correo);
}

//regresa la persona de la reservación
Persona Reservacion::getPersona(){
    return persona;
}


//setters
//agregar datos a cada atributo de persona

void Reservacion::setNumeroPersonas(int _numeroPersonas){
    numeroPersonas=_numeroPersonas;
}
void Reservacion::setDuracionEstancia(int _duracionEstancia){
    duracionEstancia=_duracionEstancia;
}
void Reservacion::setTipoCuarto(string _tipoCuarto){
    tipoCuarto=_tipoCuarto;
}

//getters
int Reservacion::getNumeroPersonas(){
    return numeroPersonas;
}
int Reservacion::getDuracionEstancia(){
    return duracionEstancia;
}
string Reservacion::getTipoCuarto(){
    return tipoCuarto;
}


//Servicios al cuarto tiene una relacion de agregación con reservación
//Los servicios al cuarto se agregan a un arreglo
void Reservacion::agregaServicioCuarto(ServicioCuarto serv, int posicion){
  serviciosCuarto[posicion] =  serv;

}

//Este método imprime los pedidos de cada servicio al cuarto
//desplegando desde el arreglo con un getter de pedido
string Reservacion::infoServiciosCuarto(){
    stringstream aux;
    aux<<endl;
    for (int i=0;i<3; i++){
        aux<<"Servicio al cuarto... "<<serviciosCuarto[i].getPedido()<<endl;

    }
    return aux.str();
}


//Servicio Especial tiene una relacion de agregación con reservación
//El servicio especial se agregan a un arreglo

void Reservacion::agregaServicioEspecial(ServicioEspecial servE, int posicion){
  servicioEspecial[posicion] =  servE;

}

//Este método imprime tu servicio especial
//desplegando desde el arreglo con un getter
string Reservacion::infoServicioEspecial(){
    string datos="Servicio especial... "+servicioEspecial[0].imprimeDatosPqt();
    return datos;
}
