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
    const Producto &getProducto() const;
    float getPrecio() const;
};

inline float DetallePresupuesto::getTotalPresupuesto() {
    return this->precio;
}

inline const Producto &DetallePresupuesto::getProducto() const {
    return producto;
}

inline float DetallePresupuesto::getPrecio() const {
    return precio;
}

#endif //CONSUMO_H_DETALLEPRESUPUESTO_H
