#include <stdio.h>
#include <stdlib.h>


int main()
{
    int flag = 1, opcion;
    int operandoUno;
    int operandoDos;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    float resultadoFactorizacion;


    do
    {
        printf("1. Ingrese el 1er operando\n2. Ingrese 2do operando\n");
        printf("\nIngrese una opcion del menu:");
        scanf("%d", &opcion);

            switch (opcion)
            {
                case 1:
                        ingresarNumero(&operandoUno);//ingresarNumero();
                    break;
                case 2:
                        ingresarNumero(&operandoUno);
                    break;
                case 3:
                        suma();
                        resta();
                        multiplicacion();
                        division();
                        factorizacion();
                        printf("Calculando...");
                    break;
                case 4:
                    printf ()

                case 5:
                    printf("Saliendo. Gracias por utilizar el programa");
                    flag = 0;
                    break;
                default:
                    printf("Ingrese una opcion valida!\n");
            }
            __fpurge(stdin);
            printf("\nIngrese ENTER para continuar...");
            getchar();
            system("clear");
    }
    while(flag != 0);

    return 0;
}
