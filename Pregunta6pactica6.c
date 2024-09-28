/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ingresarLimiteArreglo(int limite);
int *ingresarElementos(int tamanio);
void presentarArregloIngresado(int array[], int tamanio);
void eliminarElementos(int array[], int tamanio, int numeroEliminar);

int main()
{
    system("@cls||clear");

    int numeroEliminado;

    int tamanio = ingresarLimiteArreglo(tamanio);
    int *elementosArreglos = ingresarElementos(tamanio);
    printf("==================================================================\n");
    printf("\t\t\tArreglo ingresado\n\t");
    presentarArregloIngresado(elementosArreglos, tamanio);
    printf("\n==================================================================\n");
    eliminarElementos(elementosArreglos, tamanio, numeroEliminado);
    printf("\nAutor: Victor David Nivelo Yaguana   TP    1A\n");
    printf("==================================================================\n");

    return 0;
}

int ingresarLimiteArreglo(int limite)
{
    printf("\tPrograma que elimina un elemento del arreglo\n");
    printf("Ingresar el numero que desea que tenga el arreglo:   ");
    scanf("%i", &limite);

    return limite;
}

int *ingresarElementos(int tamanio)
{
    int tamanioMemoria = tamanio * sizeof(int);
    int *array = (int *)malloc(tamanioMemoria);
    printf("==================================================================\n");
    printf("\t\t\t Ingrese los elementos\n");
    for (int i = 0; i < tamanio; i++)
    {
        printf("Ingrese el elemento [%i]:  ", i + 1);
        scanf("%i", &array[i]);
    }
    return array;
}
void presentarArregloIngresado(int array[], int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        printf("%i\t", array[i]);
    }
}
void eliminarElementos(int array[], int tamanio, int numeroEliminar)
{
    printf("Ingrese un numero que desee eliminar del arreglo que ingreso:  \n");
    scanf("%i", &numeroEliminar);
    for (int i = 0; i < tamanio; i++)
    {
        if (array[i] == numeroEliminar)
        {
            array[i] = 0;
        }
    }
    printf("==================================================================\n");
    printf("Arreglo con elementos eliminado\n");
    presentarArregloIngresado(array, tamanio);
}