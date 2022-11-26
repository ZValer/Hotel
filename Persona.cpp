#include "Persona.h"
#include <sstream>


#include <iostream>
using namespace std;


//Constructor default
Persona::Persona(){
    nombre="Cliente";
    telefono=911;
    correo="cliente@gmail";
}

//Constructor que recibe parámetros
Persona::Persona(string _nombre, int _telefono, string _correo){
    nombre=_nombre;
    telefono=_telefono;
    correo=_correo;
}

//setters
//agregar datos a cada atributo de persona

void Persona::setNombre(string nom){
    nombre=nom;
}
void Persona::setTelefono(int tel){
    telefono=tel;
}
void Persona::setCorreo(string mail){
    correo=mail;
}

//getters
//regresa los datos de cada atributo de persona

string Persona::getNombre(){
    return nombre;
}
int Persona::getTelefono(){
    return telefono;
}
string Persona::getCorreo(){
    return correo;
}


//método que imprimeDatos
string Persona::imprimeDatos(){

    stringstream aux;
    aux<<"\nDatos personales"<<endl;

    aux<<"Nombre: "<<nombre<<endl;
    aux<<"Teléfono: "<<telefono<<endl;
    aux<<"Correo: "<<correo<<endl;


    return aux.str();
}

