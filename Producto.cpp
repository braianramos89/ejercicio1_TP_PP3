#include "Producto.h"


Producto::Producto() {

}

Producto::Producto(string detalle, int cantidad) {
    this->detalle = detalle;
    this->cantidad = cantidad;

}

Producto::~Producto() {

}

void Producto::mostrarProducto() {
    cout << "Detalle: " << this->detalle << endl;
    cout << "Cantidad: " << this->cantidad << endl;
}

