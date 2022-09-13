
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
    float IVA;


public:

    Factura(int numero, Fecha fecha, Cliente datosCliente, DetalleFactura detalleFactura);
    ~Factura();
    void mostrarFactura();

};


#endif //TEMPLATECPP_FACTURA_H
