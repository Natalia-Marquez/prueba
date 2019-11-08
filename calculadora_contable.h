//
// Created by utec on 8/11/19.
//

#ifndef PRUEBA_CALCULADORA_CONTABLE_H
#define PRUEBA_CALCULADORA_CONTABLE_H

#include "tipos.h"
#include "empleado.h"

class calculadora_contable_t {
public:
    porcentaje_t tasa_impuesto;
    porcentaje_t tasa_afp;

    calculadora_contable_t (porcentaje_t timpue, porcentaje_t tafp);
    importe_t calcular_remuneracion_neta(empleado_t &emple);
    importe_t calcular_impuesto(empleado_t &imp);
    importe_t calcular_afp(empleado_t &afp);
};


#endif //PRUEBA_CALCULADORA_CONTABLE_H
