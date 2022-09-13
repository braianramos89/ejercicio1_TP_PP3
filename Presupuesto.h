#ifndef TEMPLATECPP_PRESUPUESTO_H
#define TEMPLATECPP_PRESUPUESTO_H
#include <iostream>
#include "Cliente.h"
#include "Fecha.h"
#include "DetallePresupuesto.h"


using namespace std;

class Presupuesto {

private:
    int numero;
    int diasVencimiento;
    Fecha fechaEmision;
    Cliente datosCliente;
    DetallePresupuesto detallePresupuesto;

public:
    Presupuesto(int numero, int diasVencimiento,Fecha fechaEmision, Cliente datosCliente, DetallePresupuesto detallePresupuesto);
    ~Presupuesto();
    void mostrarPresupuesto();
    void FechaVencimiento();


};



#endif //TEMPLATECPP_PRESUPUESTO_H
