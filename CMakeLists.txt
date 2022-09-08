cmake_minimum_required(VERSION 3.22)
project(Templatecpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(Templatecpp main.cpp Cliente.cpp Cliente.h Consumo.cpp Consumo.h Fecha.cpp Fecha.h Presupuesto.cpp Presupuesto.h Factura.cpp Factura.h)
