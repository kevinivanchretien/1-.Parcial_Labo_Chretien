#ifndef MARCAS_H_INCLUDED
#define MARCAS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>


struct eMarca
{
    int idMarca;//arranca en 1000
    char descripcion[20];
};

#endif // MARCAS_H_INCLUDED

int mostrar_Marcas(struct eMarca vec[],int tam);
