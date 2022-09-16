//
// Created by braian on 08/09/2022.
//

#include "Factura.h"

Factura::Factura(int numero, Fecha fecha, Cliente datosCliente, DetalleFactura detalleFactura): fecha(fecha), datosCliente(datosCliente), detalleFactura(detalleFactura) {
    this->numero = numero;
    this->IVA = 0.21;

}

Factura::Factura(int numero, Fecha fecha, Cliente datosCliente, Presupuesto *presupuesto): fecha(fecha),datosCliente(datosCliente),presupuesto(presupuesto) {

    this->numero = numero;

}



Factura::~Factura() {

}

void Factura::mostrarFactura() {



    if(presupuesto != nullptr && (presupuesto->getFechaVencimiento() < fecha.mostrarFecha() )){
        presupuesto->mostrarPresupuesto();

        presupuesto->getDetallePresupuesto() ;

        cout<<"IVA incluido en el precio final " << endl;


    }else {
        cout << "Presupuesto vencido" << endl;

    }if(presupuesto == nullptr) {

        cout << "Numero: " << this->numero << endl;
        fecha.mostrarFecha();
        datosCliente.mostrarDatosCliente();
        detalleFactura.mostrarDetalleFactura();
        cout << "IVA: " << this->IVA * detalleFactura.getTotal() << endl;
        cout << "Total: " << detalleFactura.getTotal() + this->IVA * detalleFactura.getTotal() << endl;
    }


}











