/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>

void presentarMatrizFloat(int limiteFilas, int limiteColumnas, float arregloBidimensional[limiteFilas][limiteColumnas]);
void presentarMatrizInt(int limiteFilas, int limiteColumnas, int arregloBidimensional[limiteFilas][limiteColumnas]);
void ingresarMatrizFloat(int limiteFilas, int limiteColumnas, float arregloBidimensional[limiteFilas][limiteColumnas]);

int **ingresarMatrizBajoDemanda(int limiteFilas, int limiteColumnas);
void presentarMatrizFloatPtr(int limiteFilas, int limiteColumnas, int **arregloBidimensional);

int main(int argc, char const *argv[])
{
    system("@cls||clear");

    // Declaración de un arreglo Bidimensional
    float matriz[3][3]; // Matriz cuadrada

    // Declarando un arreglo Bidimensional e inicializandolo
    int matrizInicializada[5][4] = {
        // col 0        (4-1)
        {1, 2, 5, 7}, // --> fila 0
        {10, -9, 8, 100},
        {20, 4, 9, 500},
        {5, 3, 10, 9},
        {1, 3, 7, 6} // --> fila 5 - 1 = 4

    };

    printf("PRESENTADO MATRIZ SOLO DECLARADA: \n");
    presentarMatrizFloat(3, 3, matriz);

    printf("PRESENTADO MATRIZ DECLARADA E INCIALIZADA: \n");
    presentarMatrizInt(5, 4, matrizInicializada);

    ingresarMatrizFloat(3, 3, matriz);
    presentarMatrizFloat(3, 3, matriz);
    getchar();

    int opcion;
    printf("Te tenemos una sorpresa elige 1 o 2? ");
    scanf("%d", &opcion);
    getchar();

    if (opcion == 1)
    {
        int **matrizPorDemanda = ingresarMatrizBajoDemanda(2, 3);
        presentarMatrizFloatPtr(2, 3, matrizPorDemanda);
    }

    return 0;
}

void presentarMatrizFloat(int limiteFilas, int limiteColumnas, float arregloBidimensional[limiteFilas][limiteColumnas])
{
    printf("Direccion de Memoria en presentarMatriz() --> %p\n\n", arregloBidimensional);
    printf("PRESENTANDO ARREGLO BIDIMENSIONAL DE ORDEN [%d][%d]\n", limiteFilas, limiteColumnas);
    // Recorre las filas (los arreglos apilados)
    for (int i = 0; i < limiteFilas; i++)
    {
        // Recorrer las cols (por cada arreglo apilado recorres sus elementos)
        for (int j = 0; j < limiteColumnas; j++)
        {
            // printf("[%d][%d]: %f\n", i , j,  arregloBidimensional[i][j]);
            printf("%f\t", arregloBidimensional[i][j]);
        }
        printf("\n");
    }
}

void presentarMatrizFloatPtr(int limiteFilas, int limiteColumnas, int **arregloBidimensional)
{
    printf("Direccion de Memoria en presentarMatriz() --> %p\n\n", arregloBidimensional);
    printf("PRESENTANDO ARREGLO BIDIMENSIONAL DE ORDEN [%d][%d]\n", limiteFilas, limiteColumnas);
    // Recorre las filas (los arreglos apilados)
    for (int i = 0; i < limiteFilas; i++)
    {
        // Recorrer las cols (por cada arreglo apilado recorres sus elementos)
        for (int j = 0; j < limiteColumnas; j++)
        {
            // printf("[%d][%d]: %f\n", i , j,  arregloBidimensional[i][j]);
            printf("%d\t", arregloBidimensional[i][j]);
        }
        printf("\n");
    }
}

void presentarMatrizInt(int limiteFilas, int limiteColumnas, int arregloBidimensional[limiteFilas][limiteColumnas])
{
    printf("Direccion de Memoria en presentarMatriz() --> %p\n\n", arregloBidimensional);
    printf("PRESENTANDO ARREGLO BIDIMENSIONAL DE ORDEN [%d][%d]\n", limiteFilas, limiteColumnas);
    // Recorre las filas (los arreglos apilados)
    for (int i = 0; i < limiteFilas; i++)
    {
        // Recorrer las cols (por cada arreglo apilado recorres sus elementos)
        for (int j = 0; j < limiteColumnas; j++)
        {
            // printf("[%d][%d]: %d\n", i , j,  arregloBidimensional[i][j]);
            printf("%d\t", arregloBidimensional[i][j]);
        }
        printf("\n");
    }
}

void ingresarMatrizFloat(int limiteFilas, int limiteColumnas, float arregloBidimensional[limiteFilas][limiteColumnas])
{
    printf("INGRESANDO MATRIZ DE ODEN [%d][%d]\n", limiteFilas, limiteColumnas);
    // Recorre las filas (los arreglos apilados)
    for (int i = 0; i < limiteFilas; i++)
    {
        // Recorrer las cols (por cada arreglo apilado recorres sus elementos)
        for (int j = 0; j < limiteColumnas; j++)
        {
            printf("Ingrese el elemento de la posición [%d][%d]: ", i, j);
            float aux;
            scanf("%f", &aux);
            arregloBidimensional[i][j] = aux;
        }
    }
}

/**
 * @brief Crear una matriz bajo demanda (arreglo bidimensional) y lo va inicilizar desde el teclado
 *
 * @param limiteFilas
 * @param limiteColumnas
 * @return int** matriz (arreglo bidimensional) creado bajo demanda devolviendo PTR
 */
int **ingresarMatrizBajoDemanda(int limiteFilas, int limiteColumnas)
{
    printf("INGRESANDO MATRIZ DE ODEN [%d][%d]\n", limiteFilas, limiteColumnas);
    // int **matriz = (int **)malloc(sizeof(int*) *limiteFilas);
    //  RESERVO ESPACIO DE MEMORIA PARA EL APILAMIENTO DE ARREGLOS (FILAS)
    int **matriz = malloc(limiteFilas);
    for (int i = 0; i < limiteFilas; i++)
    {
        // Para cada arreglo apilado (Fila), reservo el espacio de memoria para los elementos (columns)
        matriz[i] = (int *)malloc(sizeof(int) * limiteColumnas);
        for (int j = 0; j < limiteColumnas; j++)
        {
            printf("Ingrese el elemento de la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    return matriz;
}