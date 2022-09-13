#include "DetallePresupuesto.h"



DetallePresupuesto::DetallePresupuesto(Producto producto, float total) : producto(producto) {
    this->total = total;

}

DetallePresupuesto::DetallePresupuesto() {

}

DetallePresupuesto::~DetallePresupuesto() {

}

void DetallePresupuesto::mostrarDetallePresupuesto() {
    cout << "Detalle: " << producto.getDetalle() << endl;
    cout << "Total: " << this->total * producto.getCantidad() << endl;
}
