#include <stdio.h>
#include <stdlib.h>

void sumar(void);                                 //Funcion que no recibe ni devuelve.

int main()
{
    sumar();
    return 0;
}

void sumar(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primero numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    printf("El resultado de la suma es: %d", suma);
}
