cmake_minimum_required(VERSION 3.15)
project(prueba)

set(CMAKE_CXX_STANDARD 14)

add_executable(prueba main.cpp tipos.h empleado.cpp empleado.h calculadora_contable.cpp calculadora_contable.h planilla.cpp planilla.h)