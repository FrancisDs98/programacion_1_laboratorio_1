#include <stdio.h>
#include <stdlib.h>

void sumar(int , int );                                 //Funcion que no recibe ni devuelve.

int main()
{
    int numeroUno;
    int numeroDos;
    printf("Ingrese el primero numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    sumar(numeroUno, numeroDos);

    return 0;
}

void sumar(int n1, int n2)//recibe cosas pero no devuelve
{
            //TODO LO QUE ESTA DENTRO DE LAS LLAVES DE DENOMINA SCOPE

    int suma;

    suma = n1 + n2;

    printf("El resultado de la suma es: %d", suma);
}
