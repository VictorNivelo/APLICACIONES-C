/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>

int factorial(int numero);

int main()
{
    int numero, resultado;
    printf("\n***** PROGRAMA PARA CALCULAR FACTORIAL EN FORMA RECURSIVA *****\n");
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    resultado = factorial(numero);
    printf("%d! = %d", numero, resultado);
    printf("\n*****GRACIAS POR USAR EL PROGRAMA*****\n");
    return 0;
}

int factorial(int numero)
{
    if (numero <= 1)
    {
        return 1;
    }
    else
    {
        return (numero * factorial(numero - 1));
    }
}
