#include <iostream>
#include "Cliente.h"
#include "Presupuesto.h"
#include "Fecha.h"
#include "Consumo.h"
#include "Factura.h"


int main() {

    Cliente cliente1("Braian", "Perez", "12345678", "Calle falsa 123");
    Fecha fecha1(29,04,2022);
    Presupuesto presupuesto1(1, fecha1, cliente1, "Cable", 1000);
    presupuesto1.mostrarPresupuesto();
    cout<<"-----------------------------------"<<endl;
    Consumo consumo1("Cable", 1000);

    Factura factura1(1, fecha1, cliente1, consumo1);
    factura1.mostrarFactura();



    return 0;
}
