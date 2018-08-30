#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int pedirNumero(char* texto/*[]*/);/*los [] se utilizan para indicarle a la funcion que va a
recibir una cadena de caracteres.
*/
int main()
{
    //int numero;

    int legajo;
    int nota;
    int edad;
    int dni;


    legajo = pedirNumero("ingrese un legajo: ");
    nota = pedirNumero("ingrese una nota: ");
    edad = pedirNumero("ingrese una edad: ");
    dni = perdirNumero("ingrese dni");

    /*numero = pedirNumero();

    printf("El numero que ingreso es: %d", numero);*/

    return 0;
}

int pedirNumero(char* texto/*[]*/)
{

    int numero;

    printf("%s", texto);
    scanf("%d",&numero);


    return numero;
}
