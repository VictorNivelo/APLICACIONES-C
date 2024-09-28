/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ingresarMatriz(int filas, int columnas, int arreglo[filas][columnas]);
void presentarMatriz(int filas, int columnas, int arrayUno[filas][columnas]);
void simetria(int filas, int columnas, int arreglo[filas][columnas]);
void igual(int filas, int columnas, int arreglo[filas][columnas], int arregloDos[filas][columnas]);

int main(int argc, char const *argv[])
{

    int m, n;
    int matrizUno[m][n];
    int matrizDos[m][n];

    printf("\tPrograma para COMPARAR Matrices\n");
    printf("==========================================\n");
    printf("Ingrese el orden de las matrices\n");
    printf("\tOrden(M): ");
    scanf("%d", &m);
    printf("\tOrden(N): ");
    scanf("%d", &n);
    ingresarMatriz(m, n, matrizUno);
    ingresarMatriz(m, n, matrizDos);
    presentarMatriz(m, n, matrizUno);
    presentarMatriz(m, n, matrizDos);
    printf("==========================================\n");
    simetria(m, n, matrizUno);
    printf("==========================================\n");
    igual(m, n, matrizUno, matrizDos);
    printf("==========================================\n");
    printf("@author: Victor David Nivelo Yaguana\n");
    printf("==========================================\n");

    return 0;
}

void ingresarMatriz(int filas, int columnas, int arreglo[filas][columnas])
{
    printf("INGRESAR la  MATRIZ de orden [%d][%d]\n", filas, columnas);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese valor [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arreglo[i][j]);
        }
    }
}

void presentarMatriz(int filas, int columnas, int arreglo[filas][columnas])
{
    printf("PRESENTANDO LA MATRIZ DE ORDEN [%d][%d]\n", filas, columnas);
    for (int i = 0; i < filas; i++)
    {
        printf("|\t");
        for (int j = 0; j < columnas; j++)
        {
            printf("%d\t", arreglo[i][j]);
        }
        printf("|\n");
    }
}

void simetria(int filas, int columnas, int arreglo[filas][columnas])
{
    if (filas = columnas)
    {
        printf("\tSON matrices simetricas\n");
    }
    else
    {
        printf("\tNO son matrices simetricas\n");
    }
}

void igual(int filas, int columnas, int arreglo[filas][columnas], int arregloDos[filas][columnas])
{
    if (arreglo = arregloDos)
    {
        printf("\tSON matrices iguales\n");
    }
    else
    {
        printf("\tNO son matrices iguales\n");
    }
}