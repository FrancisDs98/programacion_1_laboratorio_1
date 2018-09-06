#include <stdio.h>
#include <stdlib.h>
#define NUMERO 5

void cargarVector(int[], int);
void ordenarVector(int[], int);


int main()
{
    //int const NUMERO = 5;
    int miVector [NUMERO];
    int i;
    int j;
    int aux;
    int flag=0;

    cargarVector(miVector, NUMERO);
    ordenarVector(miVector, NUMERO);


    printf("Ingrese un numero a buscar: ");
    scanf("%d", &aux);

    for(i=0; i<NUMERO;  i++)
    {
        if(aux==miVector[i])
        {
            flag=1;
            printf("Posicion %d\n", i);
            break;
        }

    }

    if(flag==0)
    {
        printf("No se encontro el dato");
    }

    printf("\nMuestro todos:\n");
    for(i=0; i<NUMERO; i++)
    {
        if(miVector[i]%2==0)
        {
                printf("%d\n",miVector[i]);
        }
    }
    return 0;
}

void cargarVector(int vector[], int tam)//pasamos el vector y su tamaño
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }

}

void ordenarVector(int vector[], int tam)
{


    for(i=0; i<NUMERO-1; i++)//ALGORITMO: BURBUJEo
        {
            for(j=i+1; j<NUMERO; j++)
            {
                if(miVector[i]>miVector[j])//Criterio de ordenamiento
                {
                aux = miVector[i];
                miVector[i]=miVector[j];
                miVector[j]=aux;
                }
            }
        }
}

