#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

#include <string>

class Persona
{
    private: //atributos
        string nombre;
        int telefono;
        string correo;


    public: //métodos
        //contructores
        Persona();
        Persona(string, int, string);

        //imprime
        string imprimeDatos();

        //getters y setters de cada atributo
        void setNombre(string);
        string getNombre();
        void setTelefono(int);
        int getTelefono();
        void setCorreo(string);
        string getCorreo();
};



#endif // PERSONA_H
