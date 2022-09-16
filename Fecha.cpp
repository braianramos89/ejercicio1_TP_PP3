//
// Created by braian on 08/09/2022.
//

#include "Fecha.h"

Fecha::Fecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;


}

Fecha::~Fecha() {

}
                                //02042022
int Fecha::mostrarFecha() {
    int fecha = (this->dia * 1000000 )+ (this->mes * 10000) +this->anio ;
    return fecha;
}

