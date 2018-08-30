#include <stdio.h>
#include <stdlib.h>

int sumar(void);                                 //Funcion que no recibe ni devuelve.

int main()
{
    int suma;
    int numeroUno;
    int numeroDos;

    printf("Ingrese el primero numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = sumar(numeroUno, numeroDos);

    printf("El resultado es: %d", suma);

    return 0;
}

int sumar(int numeroUno, int numeroDos)
{
    //TODO LO QUE ESTA DENTRO DE LAS LLAVES DE DENOMINA SCOPE

    int suma;

    suma = numeroUno + numeroDos;

    return suma;
}
