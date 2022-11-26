#include "ServicioHotel.h"

#include <iostream>
using namespace std;

//Constructores
ServicioHotel::ServicioHotel(){
    precio=0;
}

ServicioHotel::ServicioHotel(int precio_){
    precio=precio_;
}



//setter y getter de precio

void ServicioHotel::setPrecio(int _precio){
    precio=_precio;
}

int ServicioHotel::getPrecio(){
    return precio;
}
