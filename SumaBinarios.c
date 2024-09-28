/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

/*Realizar un programa que me permita sumar dos números binarios ingresados desde teclado.
Utilizar programación modular (identificar y usar funciones) y estructura de datos
estáticas (Arreglos Unidimensionales y/o Strings). Validar el ingreso de dígitos
correspondiente al sistema numérico (binario).
@author: Victor David Nivelo Yaguana | TP | 1 A | UNL
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ingresarTermino(char mensaje[]);
void transformarBinario(int termino);
void decimalaABinario(int *termino, int *resto);
void presentarTerminos(int termino[], int i);
void invertirArreglo(int binario[], int longitud, int binarioInvertido[]);

int main()
{
    system("@cls || clear");
    printf("=============== Sumadora de Binarios ===============\n");
    int termino1 = ingresarTermino("primer ");
    int termino2 = ingresarTermino("segundo");
    int suma = termino1 + termino2;
    int sumaDecimal = termino1 + termino2;
    printf("----------------------------------------------------\n");
    printf("La suma en binarios es: ");
    transformarBinario(termino1);
    printf(" + ");
    transformarBinario(termino2);
    printf(" = ");
    transformarBinario(suma);
    printf("\nLa suma en numeros decimales es: %d", sumaDecimal);
    printf("\n----------------------------------------------------\n");
    printf("Autor: Victor David Nivelo Yaguana \n");
    printf("----------------------------------------------------\n");
    system("pause");
}

int ingresarTermino(char mensaje[])
{
    int termino;
    printf("Ingrese el %s termino en notacion decimal:  ", mensaje);
    scanf("%i", &termino);
    return termino;
}

void transformarBinario(int termino)
{
    int binario[50]; // dandole tamaño de manera arbitrarea
    int resto = 0, i = 0;
    while (termino > 0)
    {
        decimalaABinario(&termino, &resto);
        binario[i] = resto;
        i++;
    }
    int binarioInvertido[i];
    invertirArreglo(binario, i, binarioInvertido);
    presentarTerminos(binarioInvertido, i);
}

void decimalaABinario(int *termino, int *resto)
{
    *resto = *termino % 2;
    *termino /= 2;
}

void presentarTerminos(int termino[], int i)
{
    for (int j = 0; j < i; j++)
    {
        printf("%i", termino[j]);
    }
}

void invertirArreglo(int binario[], int longitud, int binarioInvertido[])
{
    int j = 0;
    for (int i = longitud - 1; i >= 0; i--)
    {
        binarioInvertido[j] = binario[i];
        j++;
    }
}