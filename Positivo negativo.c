/*Realiza un programa que muestre si un número es positivo o negativo*
 * @file determinar si es positivo o negativo.c
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @date 2021-12-02
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int positivo = 0;
    int negativo = 0;
    int contar = 0;
    int numero;

    console.writeline("Introduce un numero");
    numero = int32.parse(console.readline());
    while (numero != 5)
    {
        contar numero + 1;
        if (numero > 0)
        {
            positivo = positiva + 1 : console.writeline("Introduce un numero");
            numero = int32.parse(console.readline());
        }
        else
        {
            negativo = negativo - 1;
            console.writeline("Introduce un numero");
            numero = int32.parse(console.readline());
        }
        console.writeline("Has introducido el numero (0)", contar);
        console.writeline("Y son positivos (0)", contar);
        console.writeline("Y son negativos (0)", contar);
        console.read();
    }