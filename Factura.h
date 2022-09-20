
#ifndef TEMPLATECPP_FACTURA_H
#define TEMPLATECPP_FACTURA_H
#include <iostream>
#include "Cliente.h"
#include "Fecha.h"
#include "DetalleFactura.h"
#include "Presupuesto.h"


using namespace std;
class Factura {


private:
    int numero;
    Fecha fecha;
    Cliente datosCliente;
    DetalleFactura detalleFactura;
    static float IVA;
    Presupuesto* presupuesto;




public:

    Factura(int numero, Fecha fecha, Cliente datosCliente, DetalleFactura detalleFactura);
    Factura(int numero, Fecha fecha, Presupuesto* presupuesto);
    Factura(int numero,Fecha fecha, int numeroPresupuesto,int diasVencimiento,Fecha fechaEmision, Cliente datosCliente, DetallePresupuesto detallePresupuesto);
    ~Factura();
    void mostrarFactura();
    void agregarPresupuesto(Presupuesto* presupuesto);


};


#endif //TEMPLATECPP_FACTURA_H
