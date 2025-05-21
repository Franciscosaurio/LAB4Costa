/*********************************************************************************************************************
Copyright (c) 2024, Costa_Francisco Lucas Sebastian

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
documentation files (the "Software"), to deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit
persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the
Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

SPDX-License-Identifier: MIT
*********************************************************************************************************************/

/** @file digital.c
 ** @brief Código fuente del modulo para gestion de entradas y salidas digitales
 **/

/* === Headers files inclusions ==================================================================================== */

#include "digital.h"
#include "config.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
/* === Macros definitions ========================================================================================== */


/* === Private data type declarations ============================================================================== */

/*! estructura que representa una salida digital*/

struct digital_output_s{
    uint8_t port; /*!< puerto al que pertenece la salida*/
    uint8_t pin; /*!< pin al que pertenece la salida*/
    bool estado; /*!< estado de la salida*/

};
// el fabricante me da las cosas para hacer el toggle
//si no me las da lo mismo le puedo hacer un toggle
// tenemos las funciones para hacer set, clear y toggle a nivel fisico


/* === Private function declarations =============================================================================== */



/* === Private variable definitions ================================================================================ */

/* === Public variable definitions ================================================================================= */

/* === Private function definitions ================================================================================ */


/* === Public function definitions ============================================================================== */

digital_output_t digital_output_create(uint8_t port, uint8_t pin){
    digital_output_t self = malloc(sizeof(struct digital_output_s));
    if (self != NULL){
        self->port = port;
        self->pin=pin;

    }
    return self;
}
//implemento una funcion implementando malloc,si le devolvio algo entonces recien asigna el puerto y pin
//que recibio a la estructura
//hay que configurar la capa fisica

//sigo creando funciones vacias y despues transportamos las funciones del main adentro
//de las funciones vacias y veo que siga funcionando

void digital_output_activate(digital_output_t self){

}

void digital_output_deactivate(digital_output_t self){

}

void digital_output_toggle(digital_output_t self){
    
}
/* === End of documentation ======================================================================================== */
