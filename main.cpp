#ifndef MAIN_CPP
#define MAIN_CPP


#include <iostream>
#include "Reservacion.h"
#include "ServicioEspecial.h"
#include "ServicioCuarto.h"

using namespace std;
#include <string>

int main ()
{
    cout<<"Bienvenido al hotel LUXU"<<endl;
    cout<<"\n Realiza una reserva"<<endl;

    cout<<"\n A continuación ingresa los datos de su reservación"<<endl;
    //El programa empieza a preguntar los datos de la reservación
    //Y los asigna con setters

    //Asigna el numero de personas
    int nPersonas;
    cout<<"\nIngresa el número de personas: "<<endl;
    cin>>nPersonas;

    //Asigna la duración de la reservación
    int durReser;
    cout<<"Ingresa la duración de tu estancia en días: "<<endl;
    cin>>durReser;

    //Asigna el cuarto
    string cuartoCliente;
    cout<<"Tipos de cuartos: \n- Regular \n- Suite \n- Deluxe \n- Deluxe Doble "<<endl;
    cout<<"Ingresa el cuarto: "<<endl;
    cin>>cuartoCliente;

    //Crea un objeto de reservación con los datos dados
    Reservacion reserva(nPersonas, durReser, cuartoCliente);


    //El programa empieza a preguntar los datos de la persona
    cout<<"\n A continuación ingrese sus datos personales\n"<<endl;

    //Asigna el nombre
    string nombreCliente;
    cout<<"Ingresa el nombre: "<<endl;
    cin>>nombreCliente;

    //Asigna el teléfono
    int telefonoCliente;
    cout<<"Ingresa el teléfono: "<<endl;
    cin>>telefonoCliente;

    //Asigna el correo
    string correoCliente;
    cout<<"Ingresa el correo: "<<endl;
    cin>>correoCliente;

    //Asigna los datos a la persona de la reservacion
    reserva.setPersona(nombreCliente, telefonoCliente, correoCliente);


    //Imprime los datos del cliente
    cout<<reserva.getPersona().imprimeDatos()<<endl;


    //Pregunta al usuario si quiere pedir un servicio especial
    string pedirServicioEspecial;
    cout<<"\n¿Desea pedir un servicio especial? \nIngrese si/no: "<<endl;
    cin>>pedirServicioEspecial;

    if (pedirServicioEspecial=="si"){
            //Imprime lista de paquetes del Servicio Especial
            cout <<"\nLista de paquetes de servicio especial"<<endl;
            cout<<"1.Luna de miel \n2.Familiar \n3.VIP "<<endl;

            int paqServicioEspecial;
            cout<<"Selecciona un paquete especial "<<endl;
            cout<<"Inserta (1/2/3): "<<endl;
            cin>>paqServicioEspecial;

            //crea un objeto de Servicio Especial
            ServicioEspecial _paqueteServicioEspecial(paqServicioEspecial, 1300);

            //manda un mensaje al usuario el paquete especial elegido
            cout<<_paqueteServicioEspecial.imprimeDatosPqt()<<endl;

            //Despliega el precio con relaciones de hernecia entre el servicio especial y servicio de Hotel
            cout<<"El precio de tu servicio especial es: $"<<_paqueteServicioEspecial.getPrecio()<<endl;


            //Ya que el servicio al cuarto tiene una relación de agregación con reservación utilizamos el siguiente método
            //y lo colocamos en el arreglo de servicios al cuarto
            reserva.agregaServicioEspecial(_paqueteServicioEspecial, 0);

            }

    else if (pedirServicioEspecial=="no"){
        cout<<"No recibirá un servicio especial"<<endl;
    }

    else {
        cout<<"Respuesta no válida"<<endl;
    }



    //Pregunta al usuario si quiere pedir servicio al cuarto
    string pedirServicioCuarto;
    cout<<"\n¿Desea pedir servicio al cuarto? \nIngrese si/no: "<<endl;
    cin>>pedirServicioCuarto;

    if (pedirServicioCuarto=="si"){
            //Imprime lista de paquetes del Servicio al cuarto
            cout <<"\nLista de paquetes de servicio al cuarto"<<endl;
            cout<<"- Desayuno \n- Comida \n- Cena "<<endl;

            string paqServicioCuarto;
            cout<<"Selecciona un paquete: "<<endl;
            cin>>paqServicioCuarto;

            //crea un objeto de Servicio al cuarto
            ServicioCuarto _paqueteServicioCuarto(paqServicioCuarto, 200);

            //manda un mensaje al usuario del Servicio elegido
            cout<<"En seguida se enviará a su cuarto: ";
            cout<<_paqueteServicioCuarto.getPedido()<<endl;

            //Despliega el precio del servicio, para esto se usan herencias
            cout<<"El precio de tu servicio al cuarto es: $"<<_paqueteServicioCuarto.getPrecio()<<endl;

            //Ya que el servicio al cuarto tiene una relación de agregación con reservación utilizamos el siguiente método
            //y lo colocamos en el arreglo de servicios al cuarto
            reserva.agregaServicioCuarto(_paqueteServicioCuarto, 0);

            //Repite el proceso para el siguiente servicio
            string paqServicioCuarto2;
            cout<<"\nSelecciona tu siguiente paquete: "<<endl;
            cin>>paqServicioCuarto2;
            ServicioCuarto _paqueteServicioCuarto2(paqServicioCuarto2, 150);
            cout<<"En seguida se enviará a su cuarto: ";
            cout<<_paqueteServicioCuarto2.getPedido()<<endl;

            cout<<"El precio de tu servicio al cuarto es: $"<<_paqueteServicioCuarto2.getPrecio()<<endl;

            reserva.agregaServicioCuarto(_paqueteServicioCuarto2, 1);

            //Repite el proceso para el siguiente servicio
            string paqServicioCuarto3;
            cout<<"\nSelecciona tu siguiente paquete: "<<endl;
            cin>>paqServicioCuarto3;
            ServicioCuarto _paqueteServicioCuarto3(paqServicioCuarto3, 100);
            cout<<"En seguida se enviará a su cuarto: ";
            cout<<_paqueteServicioCuarto3.getPedido()<<endl;

            cout<<"El precio de tu servicio al cuarto es: $"<<_paqueteServicioCuarto3.getPrecio()<<endl;

            reserva.agregaServicioCuarto(_paqueteServicioCuarto3, 2);

            }


    else if (pedirServicioCuarto=="no"){
        cout<<"No recibirá servicio al cuarto"<<endl;
    }

    else {
        cout<<"Respuesta no válida"<<endl;
    }



    cout<<"\n\n\nGracias por realizar tu reservación"<<endl;
    cout<<"A continuación se muestran tus datos"<<endl;


    //Se imprimen TODOS los datos de la reservación

    cout<<reserva.getPersona().imprimeDatos()<<endl;
    cout<<reserva.imprimeDatosReserva()<<endl;



    return 0;
}


#endif // MAIN_CPP
