
#include "DetalleFactura.h"




DetalleFactura::DetalleFactura(Producto producto, float total) : producto(producto) {
    this->total = total;

}

DetalleFactura::DetalleFactura() {

}

DetalleFactura::~DetalleFactura() {

}

void DetalleFactura::mostrarDetalleFactura() {
    cout << "Detalle: " << producto.getDetalle() << endl;
    cout << "SubTotal: " << this->total * producto.getCantidad() << endl;
}