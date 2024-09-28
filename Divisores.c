/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>

int main()
{
    int num;
    int cont;

    printf("-------------------------------------------------------\n");
    printf("Introduce un numero para encontrar sus divisores: \n");
    scanf("%d", &num);
    printf("-------------------------------------------------------\n");

    cont = 0;

    do
    {
        if (num % (num - cont) == 0)
        {
            printf("%d es divisor de %d\n", (num - cont), num), "\n";
        }
        cont++;
    }

    while (cont != num);

    return 0;
}