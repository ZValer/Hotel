#include "ServicioEspecial.h"

#include <iostream>
using namespace std;
#include <string>

ServicioEspecial::ServicioEspecial(){
    pqtSeleccionado=0;
}
ServicioEspecial::ServicioEspecial(int _pqtSeleccionado, int precioEspecial):ServicioHotel(precioEspecial)
{
    pqtSeleccionado=_pqtSeleccionado;
}


void ServicioEspecial::setPqtSeleccionado(int num){
    pqtSeleccionado=num;
}

int ServicioEspecial::getPqtSeleccionado(){
    return pqtSeleccionado;
}

string ServicioEspecial::imprimeDatosPqt(){
    string info;
    if (pqtSeleccionado==1){
        info="Seleccionaste el paquete: Luna de miel";
    }

    else if (pqtSeleccionado==2){
        info="Seleccionaste el paquete: Familiar";
    }

    else if (pqtSeleccionado==3){
        info="Seleccionaste el paquete: VIP";
    }
    else if (pqtSeleccionado==0){
        info="Ningún paquete fue seleccionado";
    }
    return info;
}
