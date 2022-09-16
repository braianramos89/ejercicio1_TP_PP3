#include "DetallePresupuesto.h"



DetallePresupuesto::DetallePresupuesto(Producto producto, float precio) : producto(producto) {
    this->precio = precio;

}

DetallePresupuesto::DetallePresupuesto() {

}

DetallePresupuesto::~DetallePresupuesto() {

}

void DetallePresupuesto::mostrarDetallePresupuesto() {
    cout << "Detalle: " << producto.getDetalle() << endl;
    cout << "Total: " << this->precio * producto.getCantidad() << endl;
}
