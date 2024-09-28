/**
 * Autor: Victor David Nivelo Yaguana
 * 3.Ingresar una arreglo bidimensional de número enteros, de cualquier longitud (MxN),
 * presentar la matriz ingresada por el usuario, a partir de la matriz ingresada eliminar
 * todos los números que no son primos y presentar el resultado.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct ComponentesMatriz
{
    int filas;
    int columnas;
};

struct ComponentesMatriz ingresarOrdenMatriz();
void ingresarMatriz(struct ComponentesMatriz orden, int matriz[orden.filas][orden.columnas]);
void presentarMatriz(struct ComponentesMatriz orden, int matriz[orden.filas][orden.columnas]);
void eliminarNumerosCompuestos(struct ComponentesMatriz orden, int matriz[orden.filas][orden.columnas]);
void presentarMatrizPrimos(struct ComponentesMatriz orden, int matriz[orden.filas][orden.columnas]);

int main(int argc, char const *argv[])
{
    system("@cls||clear");
    // system("Pause");

    char opcion;

    do
    {
        struct ComponentesMatriz orden = ingresarOrdenMatriz();
        int matriz[orden.filas][orden.columnas];
        ingresarMatriz(orden, matriz);
        printf("================================================\n");
        printf("\tMatriz ingresada de orden [%i] [%i]\t\n", orden.filas, orden.columnas);
        printf("------------------------------------------------\n");
        presentarMatriz(orden, matriz);
        printf("================================================\n");
        presentarMatrizPrimos(orden, matriz);
        printf("Autor: Victor David Nivelo Yaguana  TP   1A\n");
        printf("====================================================================================\n");
        printf("Desea ingresar otra matriz, presione (s) de lo contrario precione cualquier tecla\n");
        getchar();
        scanf("%c", &opcion);
    } while (opcion == 's' || opcion == 's');

    return 0;
}

struct ComponentesMatriz ingresarOrdenMatriz()
{

    struct ComponentesMatriz orden;

    printf("==============================================================================\n");
    printf("Programa que permite mostrar una matriz eliminando sus numeros compuestos\n");
    printf("==============================================================================\n");
    printf("Ingrese el orden de su matriz [filas, columnas]");
    scanf("%i , %i", &orden.filas, &orden.columnas);

    return orden;
}
void ingresarMatriz(struct ComponentesMatriz orden, int matriz[orden.filas][orden.columnas])
{
    printf("Ingrese un matriz de orden [%d][%d]\n", orden.filas, orden.columnas);
    for (int i = 0; i < orden.filas; i++)
    {
        for (int j = 0; j < orden.columnas; j++)
        {
            printf("\tIngrese el valor para [%d][%d]:   ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void presentarMatriz(struct ComponentesMatriz orden, int matriz[orden.filas][orden.columnas])
{
    for (int i = 0; i < orden.filas; i++)
    {
        for (int j = 0; j < orden.columnas; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
void eliminarNumerosCompuestos(struct ComponentesMatriz orden, int matriz[orden.filas][orden.columnas])
{

    int contadorDivisor;

    for (int i = 0; i < orden.filas; i++)
    {
        for (int j = 0; j < orden.columnas; j++)
        {
            int k = 1;
            contadorDivisor = 0;
            while (k <= matriz[i][j])
            {
                if ((matriz[i][j] % k) == 0)
                {
                    contadorDivisor = contadorDivisor + 1;
                }
                k = k + 1;
            }
            if (contadorDivisor != 2)
            {
                matriz[i][j] = 0;
            }
        }
    }
}
void presentarMatrizPrimos(struct ComponentesMatriz orden, int matriz[orden.filas][orden.columnas])
{
    printf("============================================================\n");
    printf("Matriz solo numeros primos de orden [%i] [%i]\n", orden.filas, orden.columnas);
    printf("=============================================================\n");
    eliminarNumerosCompuestos(orden, matriz);
    presentarMatriz(orden, matriz);
    printf("=============================================================\n");
}