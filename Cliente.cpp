//
// Created by braian on 08/09/2022.
//

#include "Cliente.h"

Cliente::Cliente(string nombre, string apellido, string dni, string direccion) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->dni = dni;
    this->direccion = direccion;

}

Cliente::~Cliente() {

}

void Cliente::mostrarDatosCliente() {
    cout << "Nombre: " << this->nombre << endl;
    cout << "Apellido: " << this->apellido << endl;
    cout << "DNI: " << this->dni << endl;
    cout << "Direccion: " << this->direccion << endl;
}
