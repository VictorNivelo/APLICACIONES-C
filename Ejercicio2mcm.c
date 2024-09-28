/*Obtener un algoritmo para encontrar el minimo comun multiplo
 * Obtener el minimo comun multiplo
 * Autor: Victor David Nivelo Yaguana
 * @version 0.1
 * @date 2021-12-16
 * @copyright Copyright (c) 2021*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    system("@cls||clear");
    int numero1, numero2, a, b, producto;
    int residuo, mcd, mcm;

    printf("CALCULAR EL MINIMO COMUN MULTIPLO ENTRE DOS NUMEROS\n");
    printf("--------------------------------------------------------\n");
    printf("\tIngrese el primer numero:  ");
    scanf("%d", &numero1);
    printf("\tIngrese el segundo numero:  ");
    scanf("%d", &numero2);
    printf("--------------------------------------------------------\n");

    if (numero1 > numero2)
    {
        a = numero1;
        b = numero2;
    }
    else
    {
        a = numero2;
        b = numero1;
    }
    while (b != 0)
    {
        mcd = b;
        b = a % b;
        a = mcd;
    }
    producto = numero1 * numero2;
    mcm = producto / mcd;
    printf("\t\tMCM: %d\n", mcm);
    printf("--------------------------------------------------------\n");
    printf("@autor: Victor David Nivelo Yaguana   UNL");

    return 0;
}
