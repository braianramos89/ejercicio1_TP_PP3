#ifndef CONSUMO_H_PRODUCTO_H
#define CONSUMO_H_PRODUCTO_H
#include <iostream>

using namespace std;

class Producto {

private:
    string detalle;
    int cantidad;

public:
    Producto();
    Producto(string detalle, int cantidad);
    ~Producto();
    void mostrarProducto();
    string getDetalle();
    int getCantidad();

};
inline string Producto::getDetalle() {
    return this->detalle;
}
inline int Producto::getCantidad() {
    return this->cantidad;
}



#endif //CONSUMO_H_PRODUCTO_H
