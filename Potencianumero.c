/*Obtener un algoritmo para encontrar la potencia de un numero
 *determinar la potencia de un numero;*
 * Autor: Victor David Nivelo Yaguana
 * @version 0.1
 * @date 2021-12-15
 * @copyright Copyright (c) 2021
ANALISIS

ALGORITMO

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int exponente;
    printf("=========================================================\n");
    printf("\nIntroduzca la base: ");
    scanf("%d", &base);
    printf("\nIntroduzca el exponente: ");
    scanf("%d", &exponente);
    printf("=========================================================\n");

    printf("===============================================================================\n");
    printf("\n%d elevado a la %d es: %d\n", base, exponente, Potencia(base, exponente));
    printf("===============================================================================\n");
    return 0;
}