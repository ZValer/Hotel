#include "ServicioCuarto.h"


#include <iostream>
using namespace std;
#include <string>


ServicioCuarto::ServicioCuarto(){
    pedido="no";
}

ServicioCuarto::ServicioCuarto(string pedido_, int precio):ServicioHotel(precio)
{
    pedido=pedido_;
}


void ServicioCuarto::setPedido(string pedidoS){
    pedido=pedidoS;
}

string ServicioCuarto::getPedido(){
    return pedido;
}

