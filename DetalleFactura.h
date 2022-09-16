
#ifndef TEMPLATECPP_CONSUMO_H
#define TEMPLATECPP_CONSUMO_H
#include <iostream>
#include "Producto.h"


using namespace std;

class DetalleFactura {

private:
    Producto producto;
    float precio;

public:
    DetalleFactura(Producto producto, float precio);
    DetalleFactura();
    ~DetalleFactura();
    void mostrarDetalleFactura();
    float getTotal();
};


inline float DetalleFactura::getTotal() {
    return this->precio * producto.getCantidad();
}




#endif //TEMPLATECPP_CONSUMO_H
