/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define IVA = 0.14
#define ICE = 0.05

int main()
{
    system("@cls || clear");
    float subtotalNeto, totalNeto, iva14, ice05, totalPago, descuento;
    int porDescuento;

    printf("Ingrese el valor subtotal Neto: \n");
    scanf("%f", &subtotalNeto);
    printf("Ingrese el porcentaje del descuento: \n");
    scanf("%f", &descuento);
    getchar();

    descuento = (subtotalNeto * (porDescuento / 100));
    totalNeto = (subtotalNeto - descuento);
    iva14 = (totalNeto * 0.14);
    ice05 = (totalNeto * 0.05);
    totalPago = (totalNeto + iva14 + ice05);

    printf("*****************************************************\n")
        printf("Total Neto: %f\n", totalNeto);
    printf("Iva (14): %f\n", iva14);
    printf("Ice (5): %f\n", ice05);
    printf("TOTAL A PAGAR: %f\n", totalPago);
    printf("*****************************************************\n") return 0;
}