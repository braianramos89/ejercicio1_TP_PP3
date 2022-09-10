#ifndef TEMPLATECPP_PRESUPUESTO_H
#define TEMPLATECPP_PRESUPUESTO_H
#include <iostream>
#include "Cliente.h"
#include "Fecha.h"
#include "Consumo.h"


using namespace std;

class Presupuesto {

private:
    int numero;
    Fecha fechaVencimiento;
    Cliente datosCliente;
    Consumo consumo;
public:
    Presupuesto(int numero, Fecha fechaVencimiento, Cliente datosCliente, Consumo consumo);
    ~Presupuesto();
    void mostrarPresupuesto();
    void FechaVencimiento();

};






#endif //TEMPLATECPP_PRESUPUESTO_H
