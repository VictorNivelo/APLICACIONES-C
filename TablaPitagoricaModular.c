/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMITE_MULTIPLICADOR 12

#define DEFAULT_COLOR_CONSOLE "\033[0m"
#define VERDE_COLOR_LETRA "\033[32m"
#define AMARILLO_COLOR_LETRA "\033[33m"
#define ROJO_COLOR_LETRA "\033[31m"
#define GRIS_COLOR_LETRA "\033[37m"

#define NEGRITA "\033[1m"
#define SUBRAYADO "\033[4m"

int solicitarNumeroTabla();
void generarTablaPitagorica(int numTabla);
void presentarEncabezadoTablaPitagorica(int numTabla);
void presentarCuerpoTablaPitagorica(int numTabla, int limite);

int main(int argc, char const *argv[])
{
    int numeroTabla;
    char opcion;
    do
    {
        system("@cls||clear");
        printf("TABLA PITAGÓRICA\n");
        numeroTabla = solicitarNumeroTabla();
        generarTablaPitagorica(numeroTabla);

        printf("Presione cualquier tecla para continuar ['S' para salir]? ");
        scanf("%c", &opcion);
        getchar();

    } while (opcion != 's' && opcion != 'S');
    printf("%s", GRIS_COLOR_LETRA);
    printf("Gracias por usar nuestro programa, Vuelva pronto!!\n");

    return 0;
}

int solicitarNumeroTabla()
{
    int numeroTabla;
    printf("Hasta que número de tabla pitagórica desea mostrar? ");
    scanf("%d", &numeroTabla);
    getchar();
    return numeroTabla;
}

void generarTablaPitagorica(int numTabla)
{
    presentarEncabezadoTablaPitagorica(numTabla);
    presentarCuerpoTablaPitagorica(numTabla, LIMITE_MULTIPLICADOR);
}

void presentarEncabezadoTablaPitagorica(int numTabla)
{
    printf("\n\n");
    printf("X\t");
    for (int i = 1; i < numTabla; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
}

void presentarCuerpoTablaPitagorica(int numTabla, int limite)
{

    for (int fila = 1; fila <= limite; fila++)
    {
        // Para el encabezado de la fila
        printf("%s%s", AMARILLO_COLOR_LETRA, NEGRITA);
        printf("%d\t", fila);
        // printf("%s", DEFAULT_COLOR_CONSOLE);
        printf("%s%s", GRIS_COLOR_LETRA, NEGRITA);
        for (int col = 1; col <= numTabla; col++)
        {
            printf("%d\t", (fila * col));
        }
        printf("\n");
    }
}
