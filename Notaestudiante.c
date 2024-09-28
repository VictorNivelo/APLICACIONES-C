/*Determinar la nota final del estudiante para saber si esta aprobado o reprobado
 * @file Noraestudiante.c
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
    int Nota;

    printf("Ingresar la nota del estudiante \n");
    printf("***********************************************\n");
    scanf("%d", &Nota);

    if (Nota >= 7)
    {
        printf("***********************************************\n");
        printf("La nota del estudiante es mayor o igual a 7\n");
        printf("El estudiante esta aprobado\n");
        printf("***********************************************\n");
    }

    else if (Nota < 7)
    {
        printf("***********************************************\n");
        printf("La nota del estudiante es menor a 7\n");
        printf("El estudiante esta reprobado\n");
        printf("***********************************************\n");
    }

    printf("@autor Victor David Nivelo Yaguana\n");
    printf("***********************************************\n");
    return 0;
}