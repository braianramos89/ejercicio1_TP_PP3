
#include "Consumo.h"




Consumo::Consumo(string detalle, float total) {
    this->detalle = detalle;
    this->total = total;

}

Consumo::Consumo() {

}

Consumo::~Consumo() {

}

void Consumo::mostrarConsumo() {
    cout << "Detalle: " << this->detalle << endl;
    cout << "Total: " << this->total << endl;
}