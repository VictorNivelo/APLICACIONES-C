/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>

#define PrecioKW 1.25
#define PreservacionAmbiente 0.07
#define AlumbradoPublico 1.50

int main()
{

    float ConsumoKW, EnergiaElectrica, MedioAmbiente, TotalPagar;

    printf("Ingrese el valor del consumo mensual de energia electrica en KW:\t");
    scanf("%f", &ConsumoKW);

    EnergiaElectrica = ConsumoKW.PrecioKW;
    MedioAmbiente = EnergiaElectrica.MedioAmbiente;
    TotalPagar = EnergiaElectrica + MedioAmbiente + AlumbradoPublico;

    printf("Lectura Consumo KW: %.4f\n", ConsumoKW);
    printf("Precio KW: %.2f\n", PrecioKW);
    printf("*****************************************************\n");
    printf("Consumo Energia Electrica: %.4f\n", EnergiaElectrica);
    printf("Valor Alumbrado Publico: %.2f\n", AlumbradoPublico);
    printf("Preservacion del medio ambiente: .\n", MedioAmbiente);
    printf("*****************************************************\n");
    printf("Total a pagar: %.4f", TotalPagar);
}