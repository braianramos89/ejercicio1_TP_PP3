//
#ifndef TEMPLATECPP_CLIENTE_H
#define TEMPLATECPP_CLIENTE_H
#include <iostream>

using namespace std;

class Cliente {

private:
    string nombre;
    string apellido;
    string dni;
    string direccion;

public:

    Cliente(string nombre, string apellido, string dni, string direccion);
    ~Cliente();
    void mostrarDatosCliente();
};


#endif //TEMPLATECPP_CLIENTE_H
