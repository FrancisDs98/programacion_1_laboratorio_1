#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//para toupper

int main()
{
    char opcion;

    do
    {
        printf("(A)lta usuario\n");
        printf("(B)aja usuario\n");
        printf("(M)odificacion usuario\n");
        printf("(S)alir\n");
        printf("Elija una opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);
        opcion=toupper(opcion);

        switch(opcion)
        {
            case 'A':
                printf("Alta de usuario");
                    break;
            case 'B':
                printf("Baja de usuario");
                    break;
            case 'M':
                printf("Estoy modificando de usuario");
                    break;
            case 'S':
                printf("Gracias por utilizar el programa de usuario");
                    break;
        }
        system("pause");
        system("cls"); ES PARA WINDOWS


    }while(opcion!='S');

    return 0;
}
