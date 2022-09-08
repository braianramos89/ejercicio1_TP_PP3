
#ifndef TEMPLATECPP_FACTURA_H
#define TEMPLATECPP_FACTURA_H
#include <iostream>
#include "Cliente.h"
#include "Fecha.h"
#include "Consumo.h"


using namespace std;
class Factura {


private:
    int numero;
    Fecha fecha;
    Cliente datosCliente;
    Consumo consumo;
    float IVA;
public:

    Factura(int numero, Fecha fecha, Cliente datosCliente, Consumo consumo);
    ~Factura();
    void mostrarFactura();

};


#endif //TEMPLATECPP_FACTURA_H
