#include <iostream>
#include "Cliente.h"
#include "Presupuesto.h"
#include "Fecha.h"
#include "DetalleFactura.h"
#include "Factura.h"
#include "DetallePresupuesto.h"


bool validarFechaPresupuesto(int fechaActual, Presupuesto);
DetalleFactura obtenerDetallePresupuesto(Presupuesto presupuesto);

int main() {

    Cliente cliente1("Braian", "Perez", "12345678", "Calle falsa 123");
    Producto producto1("Coca Cola", 5);
    Producto producto2("Pepsi", 5);
    Presupuesto presupuesto1(1, 5, Fecha(9,8,2022), cliente1, DetallePresupuesto(producto1, 110));
    presupuesto1.mostrarPresupuesto();
    DetalleFactura detalleFactura1(producto1, 100);
    cout<<"--------------Facturacion Normal---------------------"<<endl;


    Factura factura1(1,Fecha (29,04,2022), cliente1, detalleFactura1);
    factura1.mostrarFactura();

    cout<<"---------------Emitiendo Factura desde presupuesto--------------------"<<endl;
    Factura factura2(23,Fecha(20,04,2022), &presupuesto1);
    factura2.mostrarFactura();
    cout<<"-----------------------------------"<<endl;
    presupuesto1.mostrarPresupuesto();
    cout<<"----------------Emitiendo Factura desde presupuesto-------------------"<<endl;
    if(validarFechaPresupuesto(Fecha(19,9,2022).mostrarFecha(), presupuesto1)){
        Factura factura3(123456,Fecha(19,9,2022), &presupuesto1);
        factura3.mostrarFactura();
    }else{
        Factura factura3(123456,Fecha(19,9,2022), cliente1, obtenerDetallePresupuesto(presupuesto1));
        factura3.mostrarFactura();
    }



    return 0;
}

bool validarFechaPresupuesto(int fechaActual, Presupuesto presupuesto) {

    if (fechaActual < presupuesto.getFechaVencimiento()) {
        return true;
    } else {
        return false;
    }
}

DetalleFactura obtenerDetallePresupuesto(Presupuesto presupuesto){

    return DetalleFactura(presupuesto.getDetallePresupuesto().getProducto(), presupuesto.getDetallePresupuesto().getPrecio());
}