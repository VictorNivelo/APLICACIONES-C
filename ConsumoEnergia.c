/**
 * @file Consumoenergia.c
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @date 2021-11-29
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define AlumbradoPublico 1.50
#define PrecioKW 1.25
#define PreservacionAmbiente 0.07

int main()
{

    float ConsumoKW, EnergiaElectrica, MedioAmbiente, TotalPagar;

    system("@cls||clear");

    printf("Ingrese el valor del consumo mensual de energia electrica en KW:\t");
    scanf("%f", &ConsumoKW);

    EnergiaElectrica = ConsumoKW * PrecioKW;
    MedioAmbiente = EnergiaElectrica * PreservacionAmbiente;
    TotalPagar = EnergiaElectrica + MedioAmbiente + AlumbradoPublico;

    printf("Lectura Consumo KW: %.4f\n", ConsumoKW);
    printf("Precio KW: %.2f\n", PrecioKW);
    printf("*****************************************************\n");
    printf("Consumo Energia Electrica: %.4f\n", EnergiaElectrica);
    printf("Valor Alumbrado Publico: %.2f\n", AlumbradoPublico);
    printf("Preservacion del medio ambiente: %.4f\n", MedioAmbiente);
    printf("*****************************************************\n");
    printf("Total a pagar: %.4f", TotalPagar);
}