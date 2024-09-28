/*Determinar si el numero es numero perfecto, abundante o deficiente
 * @file determinarnumero
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @date 2022-01-17
 * @copyright Copyright (c) 2021
 * */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, i, suma;

    printf("Numero abundante,perfecto o deficiente\n");
    printf("---------------------------\n");
    printf("\nIngrese el numero:  \n");
    printf("---------------------------\n");
    scanf("%d", &num);

    do
    {
        printf("Ingrese numero para determinar:  \n");
        scanf("%d", num);
    } while (num < 2);
    suma = 0;
    for (i = 1; 1 < num; i++)
    {
        if (num % i == 0)
        {
            suma += 1;
        }
    }
    if (suma > num)
    {
        printf("---------------------------\n");
        printf("El numero es abundante\n");
    }
    else if (suma == num)
        printf("El numero es perfecto\n");
    else
        printf("El numero es deficiente\n");
    printf("---------------------------\n");
    return 0;
}