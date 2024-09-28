/*
 * Autor: Victor David Nivelo Yaguana
 * Programa que permite calcular el monto a pagar para un trabagador por sus horas de trabajo.
 * @version 0.1
 * @date 2021-12-04
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    system("@cls||clear");
    int horasTrabajadas, horasExtra, pagoHoras;
    const int PORCADAHORA = 16, ADICIONAL = 5, HORASLABORABLES = 40;
    printf("Digitalizar el numero de horas trabajadas, ejemplo; 57:  ", 163);
    scanf("%i", &horasTrabajadas);
    getchar();
    printf("=======================================================\n");

    if (horasTrabajadas <= HORASLABORABLES)
    {
        pagoHoras = horasTrabajadas * PORCADAHORA;
        printf("El trabajadpr hizo; %i horas por lo cual no cuenta con horas extras. \n", horasTrabajadas);
        printf("El pago que recibira el trabajador es: %i $ \n", pagoHoras);
    }
    else
    {
        if (horasTrabajadas > HORASLABORABLES)
        {
            horasExtra = horasTrabajadas - HORASLABORABLES;
            pagoHoras = ((horasTrabajadas * PORCADAHORA) + (horasExtra * ADICIONAL));
            printf("El trabajador hizo: %i horas extras.\n", horasExtra);
            printf("El pago que recibira el trabajador es: %i $\n", pagoHoras);
        }
    }
    printf("========================================================\n");
    printf("@autor:\t Victor David Nivel Yaguana|Grupo.\n");
    printf("========================================================\n");
    printf("Presione cualquier tecla para salir... ");
    getchar();
    return 0;
}