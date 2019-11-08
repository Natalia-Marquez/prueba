//
// Created by utec on 8/11/19.
//

#ifndef PRUEBA_EMPLEADO_H
#define PRUEBA_EMPLEADO_H

#include "tipos.h"

class empleado_t {

public:
    texto_t nombre;
    texto_t apellido;
    texto_t dni;
    importe_t remuneracion;

    empleado_t (texto_t nomb, texto_t apell, importe_t remuneracion, texto_t dni);
    texto_t get_nombre();
    texto_t get_apellido();
    importe_t get_remuneracion();
    texto_t get_dni();

};


#endif //PRUEBA_EMPLEADO_H
