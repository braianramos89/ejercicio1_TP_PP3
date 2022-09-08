#ifndef TEMPLATECPP_PRESUPUESTO_H
#define TEMPLATECPP_PRESUPUESTO_H
#include <iostream>
#include "Cliente.h"
#include "Fecha.h"

using namespace std;

class Presupuesto {

private:
    int numero;
    Fecha fechaVencimiento;
    Cliente datosCliente;
    string detalle;
    float total;
public:
    Presupuesto(int numero, Fecha fechaVencimiento, Cliente datosCliente, string detalle, float total);
    ~Presupuesto();
    void mostrarPresupuesto();
    void FechaVencimiento();

};






#endif //TEMPLATECPP_PRESUPUESTO_H
