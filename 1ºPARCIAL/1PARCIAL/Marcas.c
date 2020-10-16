#include "Marcas.h"


int mostrar_Marcas(struct eMarca vec[],int tam)
{
    int i;
    if(vec != NULL && tam >0)
    {
        for(i=0;i<tam;i++)
        {
            printf("%d  %c ",vec[i].idMarca, vec[i].descripcion);
        }
    }
    return 0;
}


