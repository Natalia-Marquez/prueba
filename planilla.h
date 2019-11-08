//
// Created by utec on 8/11/19.
//

#ifndef PRUEBA_PLANILLA_H
#define PRUEBA_PLANILLA_H

#include "tipos.h"
#include "empleado.h"

class planilla_t {
public:
    vector<empleado_t*> empleados;
    calculadora_contable calculadora;

    planilla_t (porcentaje_t timp, porcentaje_t tafp);
    void listar_empleados();
    importe_t calcular_remuneracion_total();
    importe_t calcular_impuesto_total();
    void adicionar_empleado (empleado_t* emple);
    void remover_empleado (empleado_t* emple);
    empleado_t* obtener_empleado (texto_t dni);
};


#endif //PRUEBA_PLANILLA_H
