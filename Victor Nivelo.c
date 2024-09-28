/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>

#define Alumbradopublico 1.50
#define Costokw 1.25
#define Medioambiente 0.07

int main()
{

    float ConsumoKW, EnergiaElectrica, MedioAmbiente, TotalPagar;

    system("@cls||clear");

    printf("Ingrese el consumo de energia en kw:\t");
    scanf("%f", &ConsumoKW);

    EnergiaElectrica = ConsumoKW * Costokw;
    MedioAmbiente = EnergiaElectrica * MedioAmbiente;
    TotalPagar = EnergiaElectrica + MedioAmbiente + Alumbradopublico;

    printf("Lectura de consumo en kw: %.4f\n", ConsumoKW);
    printf("Costokw: %.2f\n", Costokw);
    printf("*****************************************************\n");
    printf("Consumo Energia Electrica: %.4f\n", EnergiaElectrica);
    printf("Valor Alumbrado Publico: %.2f\n", Alumbradopublico);
    printf("Preservacion del medio ambiente: .\n", MedioAmbiente);
    printf("*****************************************************\n");
    printf("Total a pagar: %.4f", TotalPagar);
}