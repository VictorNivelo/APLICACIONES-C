/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>

int main()
{
    int c;
    int n;
    float sum;
    c = 1;
    sum = 0;
    while (c <= 5)
    {
        printf("Ingrese numero %i ;\n", c);
        scanf("%i", &n);
        sum = sum + n;
        c = c + 1;
    }
    printf("La suma es %f\n", sum);
    printf("El promedio es %f\n", sum / 5);
    return 0;
}