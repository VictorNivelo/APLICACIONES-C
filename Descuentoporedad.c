/*Determinar La cantidad de articulos y su precio final
 * @file Cantidaddearticulos.c
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
    int EDAD;

    printf("Ingresar la edad de la persona \n");
    printf("=======================================\n");
    scanf("%d", &EDAD);

    if (EDAD > 65)
    {
        printf("=======================================\n");
        printf("La edad de la persona es mayor a 65 años\n");
        printf("La persona recibe un 50 porciento de descuento\n");
        printf("=======================================\n");
    }

    else if (EDAD == 65)
    {
        printf("=======================================\n");
        printf("La edad de la persona es igual a 65\n");
        printf("La persona recibe un 25 porciento de descuento\n");
        printf("=======================================\n");
    }

    else if (EDAD < 65)
    {
        printf("=======================================\n");
        printf("La edad de la persona es menor a 65\n");
        printf("La persona no recibe un descuento\n");
        printf("=======================================\n");
    }

    printf("=======================================\n");
    printf("@autor Victor David Nivelo Yaguana\n");
    printf("=======================================\n");
    return 0;
}