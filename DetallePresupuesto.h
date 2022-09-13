#ifndef CONSUMO_H_DETALLEPRESUPUESTO_H
#define CONSUMO_H_DETALLEPRESUPUESTO_H
#include <iostream>
#include "Producto.h"

using namespace std;

class DetallePresupuesto {

private:
    Producto producto;
    float total;

public:
    DetallePresupuesto(Producto producto, float total);
    DetallePresupuesto();
    ~DetallePresupuesto();
    void mostrarDetallePresupuesto();
    float getTotalPresupuesto();
};

inline float DetallePresupuesto::getTotalPresupuesto() {
    return this->total;
}


#endif //CONSUMO_H_DETALLEPRESUPUESTO_H
