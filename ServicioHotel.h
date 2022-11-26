#ifndef SERVICIOHOTEL_H
#define SERVICIOHOTEL_H


#include <iostream>
using namespace std;

class ServicioHotel
{
    private:
        int precio;

    public:
        ServicioHotel();
        ServicioHotel(int);

        void setPrecio(int);
        int getPrecio();

};


#endif // SERVICIOHOTEL_H
