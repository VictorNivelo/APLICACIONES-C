/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>

// Declaración de funciones (API)
int ingresarNroTerminos();
unsigned long sumar(int nTerminos);
int generarTermino(int numero);
unsigned long factorial(int numero);
short verificarPrimo(int numero);

int main(int argc, char const *argv[])
{
    char opcion;
    do
    {
        system("@cls||clear");
        int nTerminos;
        unsigned long suma;

        nTerminos = ingresarNroTerminos();
        suma = sumar(nTerminos);
        printf("\nS = %lu\n", suma);
        printf("Teclee C (Cancelar ejecución); cualquier tecla para continuar: ");
        scanf(" %c", &opcion);
    } while (opcion != 'C' && opcion != 'c');
    printf("GRACIAS POR UTILIZAR NUESTRO PROGRAMA!!!\n");
    printf("VUELVA PRONTO!!!\n");
    return 0;
}

// Implementacicón de Funciones
int ingresarNroTerminos()
{
    int nTerminos;
    printf("\nIngrese el número de la serie: ");
    scanf("%d", &nTerminos);
    return nTerminos;
}

unsigned long sumar(int nTerminos)
{
    printf("\nS = ");
    int termino = 2;
    unsigned long fact, suma = 0;
    for (int i = 1; i <= nTerminos; i++)
    {
        termino = generarTermino(termino);
        fact = factorial(termino);
        printf("%d! + ", termino);
        suma = suma + fact;
        termino++;
    }
    return suma;
}

int generarTermino(int numero)
{
    short esPrimo;
    do
    {
        esPrimo = verificarPrimo(numero);
        if (!esPrimo)
        {
            numero++;
        }
    } while (!esPrimo);
    return numero;
}

unsigned long factorial(int numero)
{
    unsigned long rta = 1;
    for (int i = 2; i <= numero; i++)
    {
        rta *= i;
    }
    return rta;
}

short verificarPrimo(int numero)
{
    short esPrimo = 1;
    int i = 2;
    while (esPrimo && i < numero)
    {
        esPrimo = !(numero % i == 0);
        /*if (numero % i == 0) {
            esPrimo = 0;
        }*/
        i++;
    }
    return esPrimo;
}