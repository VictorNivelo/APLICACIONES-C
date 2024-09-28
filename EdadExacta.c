/*
 * Autor: Victor David Nivelo Yaguana
 * Programa que permite calcular la edad exacta de una persona a parte de la fecha actual en años, meses, dias
 * @version 0.1
 * @date 2021-12-04
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    system("@cls||clear");

    int Edadexacta, Añoactual, Mesactual, Diaactual;
    int Añonacimiento, Mesnacimiento, Dianacimiento;

    Printf("Escribe la fecha actual, en años, mes y dia");
    scanf(&Añoactual, &Mesactual, &Diaactual);
    Printf("Escribe la fecha de nacimineto en Año, Mes, Dia");
    scanf(&Añonacimiento, &Mesnacimiento, &Dianacimiento);

    Edadexacta = (Añoactual, Mesactual, Diaactual) - (Añonacimiento, Mesnacimiento, Dianacimiento);

    if (Mesnacimiento > Mesactual)
        ;
    {
        Edadexacta = Edadexacta - 1;
    }
    if
        else(Mesactual == Mesnacimiento);
    {
        if (Dianacimiento > Diaactual)
            ;
    }
    if (Dianacimiento == Diaactual)
        ;
    {
        printf("Felicidades estas cumpliendo años");
    }
    Printf("Tu edad actual es: ", Edadexacta "Años");

    getchar();
    return 0;
}