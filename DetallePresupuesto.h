#ifndef CONSUMO_H_DETALLEPRESUPUESTO_H
#define CONSUMO_H_DETALLEPRESUPUESTO_H
#include <iostream>
#include "Producto.h"

using namespace std;

class DetallePresupuesto {

private:
    Producto producto;
    float precio;

public:
    DetallePresupuesto(Producto producto, float precio);
    DetallePresupuesto();
    ~DetallePresupuesto();
    void mostrarDetallePresupuesto();
    float getTotalPresupuesto();
};

inline float DetallePresupuesto::getTotalPresupuesto() {
    return this->precio;
}


#endif //CONSUMO_H_DETALLEPRESUPUESTO_H
