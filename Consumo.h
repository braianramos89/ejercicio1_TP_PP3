
#ifndef TEMPLATECPP_CONSUMO_H
#define TEMPLATECPP_CONSUMO_H
#include <iostream>


using namespace std;

class Consumo {

private:
    string detalle;
    float total;

public:
    Consumo(string detalle, float total);
    Consumo();
    ~Consumo();
    void mostrarConsumo();
    string getDetalle();
    float getTotal();
};

inline string Consumo::getDetalle() {
    return this->detalle;
}
inline float Consumo::getTotal() {
    return this->total;
}




#endif //TEMPLATECPP_CONSUMO_H
