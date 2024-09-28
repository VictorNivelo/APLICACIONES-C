/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int autosvendidos();
int comision(int nAutos);
int utilidad(int nAutos);
int pagototal(int pagoutilidad, int pagocomision);

#define SueldoMensual 5000

int main()
{
    int nAutos, valorautos, SueldoTotal, pagoutilidad, pagocomision, suma;

    nAutos = autosvendidos();
    pagocomision = comision(nAutos);
    valorautos = utilidad(nAutos);
    pagoutilidad = valorautos * 0.05;
    SueldoTotal = pagototal(pagoutilidad, pagocomision);

    system("@cls||clear");
    printf("\tSueldo Mensual Empleador\n");
    printf("------------------------\n");
    printf("Sueldo Mensual:                  $ 5000\n");
    printf("Comision:                        $ %d\n", pagocomision);
    printf("   Numero de autos vendidos(#%d) \n", nAutos);
    printf("Utilidad:                        $ %d\n", pagoutilidad);
    printf("   Valor de autos vendidos($ %d)\n", valorautos);
    printf("---------------------------------------\n");
    printf("Sueldo Mensaual Final:            $%d\n ", SueldoTotal);
    printf("\tPor Steven Intriago\n");
}
int autosvendidos()
{
    int numeroautos;
    printf("Cuantos autos vendio el empleador durante el mes? ");
    scanf("%d", &numeroautos);
    return numeroautos;
}
int comision(int nAutos)
{
    int valorcomision, i;
    i = 250;
    valorcomision = i * nAutos;

    return valorcomision;
}
int utilidad(int nAutos)
{
    int i, suma, n;
    i = 1;
    suma = 0;
    while (i <= nAutos)
    {
        printf("Ingresa el valor del auto vendido: ");
        scanf("%d", &n);
        suma = suma + n;
        i++;
    }
    return suma;
}
int pagototal(int pagoutilidad, int pagocomision)
{
    int pagofinal, pagomensual;
    pagomensual = 5000;

    pagofinal = pagoutilidad + pagomensual + pagocomision;
    return pagofinal;
}
