#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "Marcas.h"
#include "electrodomestico.h"


#define MAX 10

int main()
{


    struct eMarca vecMarca[]={{1000,"Wairpoll"},{1001,"Sony"},{1002,"Liliana"},{1003,"Gafa"},{1004,"Philips"}};
    struct eElectrodomestico vecElectro[MAX];

    int opcion;
    int flag=1;
    int i;
    char salir='n';
    //int posicion;
    int contID=0;
    int opcion2;


    alta_electrodomestico(vecElectro,MAX);

    do
    {
        system("CLS");
        printf("MENU DE OPCIONES: \n\n");

        printf("\n 1-ALTA ELECTRODOMESTICOS.");
        printf("\n 2-MODIFICAR ELECTRODOMESTICO");
        printf("\n 3-BAJA ELECTRODOMESTICO.");
        printf("\n 4-LISTAR ELECTRODOMESTICOS.");
        printf("\n 5-LISTAR MARCAS.");
        printf("\n 6-LISTAR SERVICIO.");
        printf("\n 7-ALTA REPARACION.");
        printf("\n 8-LISTAR REPARACIONES.");
        printf("\n 9- SALIR.");
        fflush(stdin);
        scanf("%d",&opcion);


        switch(opcion)
        {
        case 1:

            carga_electrodomestico(vecElectro,MAX,&contID,vecMarca);

                flag=0;
            break;
        case 2:
            if(flag==0)
            {
                printf("Modificar: \n 1-Serie \n 2- Modelo ");
                fflush(stdin);
                scanf("%d",&opcion2);

                modificacion_electronico(vecElectro,MAX,&contID,opcion2,vecMarca);
            }
            else
            {
                printf("No se realizo ningun alta");
            }
            break;
        case 3:
            if(flag==0)
            {
                baja_Electronico(vecElectro,MAX,&contID);
            }
            else
            {
                printf("No se realizo ningun alta");
            }
            break;
        case 4:
            if(flag==0)
            {

            }
            else
            {
                printf("No se realizo ningun alta");
            }
            break;
        case 5:
            if(flag==0)
            {
                  mostrar_Marcas(vecMarca,5);
            }
            else
            {
                printf("No se realizo ningun alta");
            }
            break;
        case 6:
            if(flag==0)
            {

            }
            else
            {
                printf("No se realizo ningun alta");
            }
            break;
        case 7:
            if(flag==0)
            {

            }
            else
            {
                printf("No se realizo ningun alta");
            }
            break;
        case 8:
            if(flag==0)
            {

            }
            else
            {
                printf("No se realizo ningun alta");
            }
            break;
        case 9:
            printf("Desea salir..? s/n \n ");
            fflush(stdin);
            scanf("%c", &salir);
            break;

        }
    }
    while(salir!='s');


    return 0;
}

