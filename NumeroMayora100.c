/*Determinar si el numero es mayor a 100
 * @file Numeromayora100.c
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @date 2021-12-07
 * @copyright Copyright (c) 2021
 * */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("@cls||clear");
    int numero;

    printf("Ingresar un numero \n");
    printf("=======================================\n");
    scanf("%d", &numero);

    if (numero > 100)
    {
        printf("=======================================\n");
        printf("El numero ingresado %d es mayor a 100\n", numero);
        printf("=======================================\n");
    }

    else if (numero == 100)
    {
        printf("=======================================\n");
        printf("El numero ingresado %d es igual a 100\n", numero);
        printf("=======================================\n");
    }

    else if (numero < 100)
    {
        printf("=======================================\n");
        printf("El numero ingresado %d es menor a 100\n", numero);
        printf("=======================================\n");
    }

    printf("=======================================\n");
    printf("@autor Victor David Nivelo Yaguana\n");
    printf("=======================================\n");
    return 0;
}