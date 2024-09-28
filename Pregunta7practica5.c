/*Indique el error (asuma que se encuentran las importaciones de las librerías), corrija el mismo si existe y/o
depure el siguiente bloque de código en lenguaje de programación C
Autor: Victor David Nivelo Yaguana  1 A  TP  UNL*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int factorial(int numero);
int main()
{
    int resultado, numero;
    // el int numero tiene un valor que se puede omitir//

    printf("--------------------------------------------------\n");
    printf("Leer numero: ");
    scanf("%d", &numero);
    // falta el signo "&""//;
    resultado = factorial(numero);
    printf("%d! = %d", numero, resultado);
    // Falta el termino "numero" antes de resultado//
    printf("\n--------------------------------------------------\n");
    printf("Autor: Victor David Nivelo Yaguana  1 A  TP  UNL\n");
    printf("--------------------------------------------------\n");
}
int factorial(int numero)
{

    if (numero <= 1)
    {
        return 1;
    }
    else
    {
        int resultado = factorial(numero - 1);
        return (numero * resultado);
    }
}