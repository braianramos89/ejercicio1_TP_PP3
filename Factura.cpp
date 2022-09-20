//
// Created by braian on 08/09/2022.
//

#include "Factura.h"

float Factura::IVA = 0.21;

Factura::Factura(int numero, Fecha fecha, Cliente datosCliente, DetalleFactura detalleFactura): fecha(fecha), datosCliente(datosCliente), detalleFactura(detalleFactura) {
    this->numero = numero;
    this->presupuesto = nullptr;

}

Factura::Factura(int numero, Fecha fecha, Presupuesto *presupuesto): fecha(fecha),datosCliente(presupuesto->getDatosCliente()){


    this->numero = numero;
    this->detalleFactura = DetalleFactura(presupuesto->getDetallePresupuesto().getProducto(),presupuesto->getDetallePresupuesto().getPrecio());
    this->presupuesto = presupuesto;
}

void Factura::agregarPresupuesto(Presupuesto *presupuesto) {
    this->presupuesto = presupuesto;
}


Factura::~Factura() {

}

void Factura::mostrarFactura() {



    if(presupuesto != nullptr && (presupuesto->getFechaVencimiento() < fecha.mostrarFecha() )){
        presupuesto->mostrarPresupuesto();

        presupuesto->getDetallePresupuesto() ;

        cout<<"IVA incluido en el precio final " << endl;


    }else {
       // cout << "Presupuesto vencido" << endl;

    }
    if(presupuesto == nullptr) {

        cout << "Numero: " << this->numero << endl;
        fecha.mostrarFecha();
        datosCliente.mostrarDatosCliente();
        detalleFactura.mostrarDetalleFactura();
        cout << "IVA: " << this->IVA * detalleFactura.getTotal() << endl;
        cout << "Total: " << detalleFactura.getTotal() + this->IVA * detalleFactura.getTotal() << endl;
    }


}

Factura::Factura(int numero, Fecha fecha, int numeroPresupuesto, int diasVencimiento, Fecha fechaEmision,
                 Cliente datosCliente, DetallePresupuesto detallePresupuesto): fecha(fecha), datosCliente(datosCliente) {
    this->numero = numero;
    this->presupuesto = new Presupuesto(numeroPresupuesto,diasVencimiento,fechaEmision,datosCliente,detallePresupuesto);


}











