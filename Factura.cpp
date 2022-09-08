//
// Created by braian on 08/09/2022.
//

#include "Factura.h"

Factura::Factura(int numero, Fecha fecha, Cliente datosCliente, Consumo consumo): fecha(fecha),datosCliente(datosCliente), consumo(consumo) {
    this->numero = numero;
    this->IVA = 0.21;

}

Factura::~Factura() {

}

void Factura::mostrarFactura() {
    cout << "Numero: " << this->numero << endl;
    fecha.mostrarFecha();
    datosCliente.mostrarDatosCliente();
    cout << "Detalle: " << consumo.getDetalle()<< endl;
    cout << "IVA: " << this->IVA * consumo.getTotal() << endl;
    cout << "Total: " << consumo.getTotal() + this->IVA * consumo.getTotal() << endl;

}