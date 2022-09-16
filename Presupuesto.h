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
    Cliente getDatosCliente();
    DetallePresupuesto getDetallePresupuesto();
    int getFechaVencimiento();


};

inline Cliente Presupuesto::getDatosCliente() {
    return datosCliente;
}
inline DetallePresupuesto Presupuesto::getDetallePresupuesto() {
    return detallePresupuesto;
}




#endif //TEMPLATECPP_PRESUPUESTO_H
