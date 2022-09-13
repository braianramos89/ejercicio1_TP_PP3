//
// Created by braian on 08/09/2022.
//

#include "Presupuesto.h"
#include "Fecha.h"


Presupuesto::Presupuesto(int numero, int diasVencimiento,Fecha fechaEmision, Cliente datosCliente, DetallePresupuesto detallePresupuesto): datosCliente(datosCliente), diasVencimiento(diasVencimiento),
                                                                                                                                             fechaEmision(fechaEmision), detallePresupuesto(detallePresupuesto) {
    this->numero = numero;

}




Presupuesto::~Presupuesto() {

}

void Presupuesto::FechaVencimiento() {

    int fecha = fechaEmision.mostrarFecha();
    int fechaVencimiento = fecha + (diasVencimiento * 1000000);
    cout << "Fecha de vencimiento: " << fechaVencimiento << endl;

}



void Presupuesto::mostrarPresupuesto() {
    cout << "Numero: " << this->numero << endl;
    cout<< "Fecha de emision: " << fechaEmision.mostrarFecha() << endl;
    datosCliente.mostrarDatosCliente();
    detallePresupuesto.mostrarDetallePresupuesto();
    FechaVencimiento();

}


