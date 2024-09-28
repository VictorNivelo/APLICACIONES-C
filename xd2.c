/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int num1, num2, mcm, men, i;
    printf("Ingrese el primer numero:\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &num2);
    men = min(num1, num2);
    for (i = 1; i <= men; i++)
    {

        if (num1 % i == 0 && num2 % i == 0)
        {
            int mcd = i;

            mcm = (num1 * num2) / mcd;
        }
    }
    printf("El M.C.M entre %d y %d es: %d", num1, num2, mcm);
}

int min(int num1, int num2)
{
    if (num1 <= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}