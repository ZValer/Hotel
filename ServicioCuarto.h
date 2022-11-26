#ifndef SERVICIOCUARTO_H
#define SERVICIOCUARTO_H

#include <iostream>
using namespace std;

#include "ServicioHotel.h"
#include <string>

class ServicioCuarto:public ServicioHotel
{
    private: //atributo
        string pedido;

    public: //métodos
        ServicioCuarto();
        ServicioCuarto(string, int);
        void setPedido(string);
        string getPedido();
};

#endif // SERVICIOCUARTO_H
