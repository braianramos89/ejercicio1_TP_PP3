
#include "DetalleFactura.h"




DetalleFactura::DetalleFactura(Producto producto, float precio) : producto(producto) {
    this->precio = precio;

}

DetalleFactura::DetalleFactura() {

}

DetalleFactura::~DetalleFactura() {

}

void DetalleFactura::mostrarDetalleFactura() {
    cout << "Detalle: " << producto.getDetalle() << endl;
    cout << "SubTotal: " << this->precio * producto.getCantidad() << endl;
}