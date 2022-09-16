#include <iostream>
#include "Cliente.h"
#include "Presupuesto.h"
#include "Fecha.h"
#include "DetalleFactura.h"
#include "Factura.h"
#include "DetallePresupuesto.h"


int main() {

    Cliente cliente1("Braian", "Perez", "12345678", "Calle falsa 123");
    Fecha fecha1(10,04,2022);
    Producto producto1("Coca Cola", 5);
    //DetallePresupuesto detallePresupuesto1(producto1, 150);
    Presupuesto presupuesto1(1, 5, fecha1, cliente1, DetallePresupuesto(producto1, 150));
    presupuesto1.mostrarPresupuesto();
    cout<<"-----------------------------------"<<endl;

    DetalleFactura detalleFactura1(producto1, 160);
    Factura factura1(1,Fecha (29,04,2022), cliente1, detalleFactura1);
    factura1.mostrarFactura();

    cout<<"-----------------------------------"<<endl;
    Factura factura2(23,Fecha(20,04,2022),cliente1, &presupuesto1);


    factura2.mostrarFactura();




    return 0;
}
