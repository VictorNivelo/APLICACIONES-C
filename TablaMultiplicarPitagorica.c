/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMITE_MULTIPLICADOR 12

int main(int argc, char const *argv[])
{
    system("@cls||clear");

    int numeroTabla;
    printf("************* TABLA DE MULTIPLICAR PITAGÓRICA*************\n");
    printf("Hasta que número de tabla pitagórica desea mostrar? ");
    scanf("%d", &numeroTabla);

    // Mostrar encabezado de las columnas
    printf("X\t");
    for (int col = 1; col <= numeroTabla; col++)
    {
        printf("%d\t", col);
    }
    printf("\n");

    // Mostrar el cuerpo de la tabla pitágorica
    for (int fila = 1; fila <= LIMITE_MULTIPLICADOR; fila++)
    {
        // Para el encabezado de la fila
        printf("%d\t", fila);
        for (int col = 1; col <= numeroTabla; col++)
        {
            printf("%d\t", (fila * col));
        }
        printf("\n");
    }
    return 0;
}
