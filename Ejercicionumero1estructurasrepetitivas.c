/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{

    system("@cls|clear");
    int i, nTerminos, divisor = 0;
    float resultadoSuma, resultadoPotencia;

    printf("\n----------------------------------------------------------------------------------\n");
    printf("Ingresar el numero de terminos: ");
    scanf("%d", &nTerminos);
    printf("\n----------------------------------------------------------------------------------\n");

    for (i = 1; i <= nTerminos; i++)
    {
        divisor = divisor + i;
        printf("%d^3/%d", i, divisor);
        resultadoPotencia = pow(i, 3) / divisor;
        if (i % 2 == 0)
        {
            resultadoSuma = resultadoSuma - resultadoPotencia;
            printf(" + ");
        }
        else
        {
            resultadoSuma = resultadoSuma + resultadoPotencia;
            printf(" - ");
        }
    }
    printf("\n----------------------------------------------------------------------------------\n");
    printf("\n LA SUMATORIA DE LA SERIE ES IGUAL A S= %f", resultadoSuma);
    printf("\n----------------------------------------------------------------------------------\n");
    printf("AUTOR:\n\t Victor Nivelo");
    printf("\n----------------------------------------------------------------------------------\n");
    printf("\t \t \t FIN DEL PROGRAMA");
    printf("\n----------------------------------------------------------------------------------\n");
    getchar();
    getchar();
}