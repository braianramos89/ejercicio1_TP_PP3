//
// Created by braian on 08/09/2022.
//

#include "Presupuesto.h"
#include "Fecha.h"
#include "stdlib.h"

Presupuesto::Presupuesto(int numero, Fecha fechaVencimiento, Cliente datosCliente, Consumo consumo): datosCliente( datosCliente), fechaVencimiento( fechaVencimiento), consumo(consumo) {
    this->numero = numero;

}

Presupuesto::~Presupuesto() {

}

void Presupuesto::FechaVencimiento() {

    int fecha = fechaVencimiento.mostrarFecha();
    if(fecha <= 23122022){
        int nuevaFecha = fecha + (7 * 1000000);
        cout << "Fecha de vencimiento: " << nuevaFecha << endl;
    }else if(fecha > 23122022 && fecha <= 31122022){
        int nuevaFecha = fecha - (23*1000000)+(4*1000000) + (1 * 10000);
        cout << "Fecha de vencimiento: " << nuevaFecha << endl;
    }


}

void Presupuesto::mostrarPresupuesto() {
    cout << "Numero: " << this->numero << endl;
    datosCliente.mostrarDatosCliente();
    cout << "Detalle: " << consumo.getDetalle() << endl;
    cout << "Total: " << consumo.getTotal() << endl;
    FechaVencimiento();
}
