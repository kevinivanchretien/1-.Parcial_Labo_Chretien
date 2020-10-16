#include "electrodomestico.h"

int utn_getNumero(char* msg, char* msgError, int minimo, int maximo,int* num1)
{
    int numero;
    int retorno=1;
    if(msg!=NULL&&msgError!=NULL &&minimo<=maximo&&num1 !=NULL)
    {
        printf("%s",msg);
        fflush(stdin);
        scanf("%d",&numero);
        if(numero<=minimo || numero >=maximo)
        {
            printf("%c",msgError);
            fflush(stdin);
            scanf("%d",&numero);
        }
        else
        {
            retorno=0;
            *num1=numero;
        }
    }
    return retorno;
}


int alta_electrodomestico(struct eElectrodomestico vec[],int tam)
{
    int i;
    int retorno=-1;
    if(vec!= NULL && tam>0)
    {
        for(i=0; i>tam; i++)
        {
            vec[i].isEmpty=1;
        }
        retorno=0;
    }
    return retorno;
}



int buscar_Empty(struct eElectrodomestico vec[], int tam, int* posicion)
{
    int retorno=-1;
    int i;
    if(vec!= NULL && tam>=0 && posicion!=NULL)
    {
        for(i=0; i<tam; i++)
        {
            if(vec[i].isEmpty==1)
            {
                retorno=0;
                *posicion=i;
                break;
            }
        }
    }
    return retorno;
}



int carga_electrodomestico(struct eElectrodomestico vec[], int tam, int* contID,struct eMarca arrayMarca[])
{
    //struct eMarca arrayMarca[];
    int retorno=-1;
    int posicion;
    if(vec!=NULL && tam>0 && contID!=NULL)
    {
        if(buscar_Empty(vec,tam,&posicion)==0)
        {
            printf("\nNo hay lugares vacios");
        }
        else
        {
            *contID++;
            vec[posicion].idElectrodomestico=*contID;                                                       //campo ID
            vec[posicion].isEmpty=0;
            utn_getNumero("ingrese numero de serie", "Eror no debe superar los 8 digitos", 1,9,&vec[posicion].serie);
            utn_getNumero("ingrese año del fabricante", "Error año invalido",1945,2021,&vec[posicion].fabricacion);
            mostrar_Marcas(arrayMarca,5);
            utn_getNumero("elija marca", "Error marca incontemplada",1000,1004,&vec[posicion].marca);

            retorno=0;
        }
    }
    return retorno;
}



int baja_Electronico(struct eElectrodomestico vec[],int tam, int* contID)
{
    int retorno=-1;
    int i;
    int posicion;
    if(vec!=NULL && tam>0 && contID!=NULL)
    {
        buscar_Empty(vec,tam,&posicion);

        if(vec[i].isEmpty==1)
        {
            retorno=0;
            posicion=i;
            vec[posicion].isEmpty=1;
        }
    }
    return retorno;
}


int modificacion_electronico(struct eElectrodomestico vec[],int tam, int* posicion, int opcion,struct eMarca arrayMarca[])
{
    int i;
    if(vec!=NULL && tam != NULL && posicion != NULL)
    {
        for(i=0; i<tam; i++)
        {

            if(vec[i].idElectrodomestico==posicion&&vec[i].isEmpty==0)
            {
               /* if(opcion ==1)
                {
                    utn_getNumero("Nuevo numero de serie", "Error no debe superar los 8 digitos", 1,9,&vec[posicion].serie);

                    printf("\n El nuevo numero de serie es: %d", vec[posicion].serie);
                }
                else if (opcion==2)
                {
                    mostrar_Marcas(arrayMarca,5);
                    utn_getNumero("marcas a elejir ", "Error marca incontemplada",1000,1004,&vec[posicion].marca);
                }*/
            }
        }
    }


}
