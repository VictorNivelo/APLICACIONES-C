/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>

void generarMatriz(int tabla[][10]);
int main()
{
    system("@cls||clear");
    int tabla[10][10];
    generarMatriz(tabla);

    system("Pause");
}
void generarMatriz(int tabla[][10])
{
    int x, j;
    for (x = 0; x <= 10; x++)
    {
        tabla[x][x] = x;
        printf("%d\t", tabla[x][x]);
        for (j = 1; j <= 10; j++)
        {
            tabla[j][j] = j;
            printf("%d\t", tabla[j][j]);
        }
        printf("\n");
    }
    printf("====================================================================================\n");
    printf("Autor: Victor David Nivelo Yaguana  TP  1A\n");
    printf("====================================================================================\n");
}