#ifndef SERVICIOESPECIAL_H
#define SERVICIOESPECIAL_H
#include "ServicioHotel.h"

#include <iostream>
using namespace std;

#include <string>

class ServicioEspecial:public ServicioHotel
{
    private: //atributo
        int pqtSeleccionado;

    public: //métodos
        ServicioEspecial();
        ServicioEspecial(int _pqtSeleccionado, int precioEspecial);
        void setPqtSeleccionado(int);
        int getPqtSeleccionado();
        string imprimeDatosPqt();
};

#endif // SERVICIOESPECIAL_H
