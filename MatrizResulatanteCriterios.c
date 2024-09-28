/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

// int fechaHora();

int main(int argc, char const *argv[])
{
    int mesPlazo;
    printf("Ingrese el mes plazo; ");
    scanf("%d", &mesPlazo);
    printf("--------------------------------------------------------------------------\n");
    printf("\t \t \tTABLA DE AMORTIZACION\n");
    printf("\t \t \t   FINANCIERA ABC\n");
    printf("--------------------------------------------------------------------------\n");
    /*printf("El interes mensuales de $%.2f\n", interesMensual);
    printf("El interes total es de $%.2f\n", interesTotal);*/
    printf("Fecha de emision: %s\n", fechaHora);
}
/*int fechaHora(){
    time_t t = time(NULL);
    struct tm tiempoLocal = *localtime(&t);
    char fechaHora[70];
    char *formato = "%Y-%m-%d";
    int bytesEscritos =strftime(fechaHora, sizeof fechaHora, formato, &tiempoLocal);
}*/
