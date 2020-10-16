#ifndef ELECTRODOMESTICO_H_INCLUDED
#define ELECTRODOMESTICO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "Marcas.h"


struct eElectrodomestico
{

    int idElectrodomestico;
    int serie;
    int marca;
    int fabricacion;
    int isEmpty;
};

#endif // ELECTRODOMESTICO_H_INCLUDED

/** \brief inicializa la carga buscando espacio libre
 *
 * \param vec[] struct eElectrodomestico
 * \param tam
 * \return int
 *
 */
 int alta_electrodomestico(struct eElectrodomestico vec[],int tam);




/** \brief busca el primer espacio libre y d
 *
 * \param vec[] struct eElectrodomestico
 * \param tam int tamaño del array
 * \param posicion int* devuelve el espacio libre encontrado
 * \return int
 *
 */
int buscar_Empty(struct eElectrodomestico vec[], int tam, int* posicion);


int carga_electrodomestico(struct eElectrodomestico vec[],int tam,int* contID,struct eMarca arrayMarca[]);

int baja_Electronico(struct eElectrodomestico vec[],int tam,int* contID);

int modificacion_electronico(struct eElectrodomestico vec[],int tam, int* posicion, int opcion,struct eMarca arrayMarca[]);
