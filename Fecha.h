#ifndef TEMPLATECPP_FECHA_H
#define TEMPLATECPP_FECHA_H
#include <iostream>

using namespace std;

class Fecha {

private:
    int dia;
    int mes;
    int anio;
    int fecha;

public:
    Fecha(int dia, int mes, int anio);
    ~Fecha();
    int mostrarFecha();



};



#endif //TEMPLATECPP_FECHA_H
