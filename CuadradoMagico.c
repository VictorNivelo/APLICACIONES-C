/**
 * @file CuadradoMagico
 * @author Victor David Nivelo Yaguana
 * @brief
 * @version 0.1
 * @date 2022-03-08
 *
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct ComponentesMatriz
{
    int filas;
    int columnas;
};

void ingresarMatriz(struct ComponentesMatriz orden, int matriz[orden.filas][orden.columnas]);
void presentarMatriz(struct ComponentesMatriz orden, int matriz[orden.filas][orden.columnas]);

int main(int argc, char const *argv[])
{
    int orden, matriz;
    printf("==============================================================================\n");
    printf("Programa que permite mostrar si una  matriz es un cuadrado magico\n");
    printf("==============================================================================\n");
    printf("Ingrese el tamaño de la matriz: ");
    scanf("%d", &tamanoMatriz);
    printf("==============================================================================\n");
    ingresarMatriz(orden, matriz);
    printf("==============================================================================\n");
    presentarMatriz(orden, matriz);
    printf("==============================================================================\n");
}

/*void ingresarMatriz(int valorMatriz, int tamanoMatriz){
    for(int i=0; i < tamanoMatriz+tamanoMatriz; i++){
        printf("Ingrese el valor para la matriz: [%d]",i+1);
        scanf("%d",&valorMatriz);
    }
}*/
void ingresarMatriz(struct ComponentesMatriz orden, int matriz[orden.filas][orden.columnas])
{
    printf("Ingrese un matriz de orden [%d][%d]\n", orden.filas, orden.columnas);
    for (int i = 0; i < orden.filas; i++)
    {
        for (int j = 0; j < orden.columnas; j++)
        {
            printf("\tIngrese el valor para la matriz [%d][%d]:   ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
/*void presentarMatriz(int valorMatriz, int tamanoMatriz){
    for(int i=0; i <tamanoMatriz+tamanoMatriz; i++){
        printf("%d\t",valorMatriz);
    }
    printf("\n");
}*/
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