
#ifndef TEMPLATECPP_CONSUMO_H
#define TEMPLATECPP_CONSUMO_H
#include <iostream>
#include "Producto.h"


using namespace std;

class DetalleFactura {

private:
    Producto producto;
    float total;

public:
    DetalleFactura(Producto producto, float total);
    DetalleFactura();
    ~DetalleFactura();
    void mostrarDetalleFactura();
    float getTotal();
};


inline float DetalleFactura::getTotal() {
    return this->total * producto.getCantidad();
}




#endif //TEMPLATECPP_CONSUMO_H
