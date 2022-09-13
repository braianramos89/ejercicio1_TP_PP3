//
// Created by braian on 08/09/2022.
//

#include "Factura.h"

Factura::Factura(int numero, Fecha fecha, Cliente datosCliente, DetalleFactura detalleFactura): fecha(fecha), datosCliente(datosCliente), detalleFactura(detalleFactura) {
    this->numero = numero;
    this->IVA = 0.21;

}

Factura::~Factura() {

}

void Factura::mostrarFactura() {
    cout << "Numero: " << this->numero << endl;
    fecha.mostrarFecha();
    datosCliente.mostrarDatosCliente();
    detalleFactura.mostrarDetalleFactura();
    cout << "IVA: " << this->IVA * detalleFactura.getTotal() << endl;
    cout << "Total: " << detalleFactura.getTotal() + this->IVA * detalleFactura.getTotal() << endl;

}



