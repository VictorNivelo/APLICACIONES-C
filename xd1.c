/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>

int maximo_comun_divisor(int a, int b)
{
    int temporal;
    while (b != 0)
    {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

int minimo_comun_multiplo(a, b)
{
    return (a * b) / maximo_comun_divisor(a, b);
}

int main(void)
{
    int a = 72, b = 50;
    int mcm = minimo_comun_multiplo(a, b);
    printf("MCM de %d y %d = %d\n", a, b, mcm);
    return 0;
}