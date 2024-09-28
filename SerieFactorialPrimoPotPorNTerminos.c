/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

/*
S = (2!)¹ + (3!)² + (5!)³ + (7!)⁴ + (11!)⁵ + (13!)⁶ + ....... (?!)^n
*/

#include <stdio.h>
#include <stdlib.h>

// Declaración de funciones (API)
void ingresarNroTerminos(int *limite);
unsigned long sumar(int nTerminos);
int generarTermino(int numero);
unsigned long factorial(int numero);
short verificarPrimo(int numero);
unsigned long potencia(unsigned long base, int exponente);

// FUNCION PRINCIPAL
int main(int argc, char const *argv[])
{
    char opcion;
    do
    {
        system("@cls||clear");
        int nTerminos;
        unsigned long suma;

        ingresarNroTerminos(&nTerminos);
        suma = sumar(nTerminos);
        printf("\nS = %lu\n", suma);

        printf("****************\n");
        printf("Teclee C (Cancelar ejecución); cualquier tecla para continuar: ");
        scanf(" %c", &opcion);
    } while (opcion != 'C' && opcion != 'c');
    printf("GRACIAS POR UTILIZAR NUESTRO PROGRAMA!!!\n");
    printf("VUELVA PRONTO!!!\n");
    return 0;
}

// Implementacicón de Funciones
void ingresarNroTerminos(int *nTerminos)
{
    printf("\nIngrese el número de términos de la serie: ");
    scanf("%d", nTerminos);
}

unsigned long sumar(int nTerminos)
{
    printf("\nS = ");
    int termino = 2;
    unsigned long fact, suma = 0;
    unsigned long pot;
    for (int i = 1; i <= nTerminos; i++)
    {
        termino = generarTermino(termino);
        fact = factorial(termino);
        pot = potencia(fact, i);
        printf("(%d!)^%d + ", termino, i);
        suma = suma + pot;
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

unsigned long potencia(unsigned long base, int exponente)
{
    unsigned long rta = 1;
    for (int i = 1; i <= exponente; i++)
    {
        rta = rta * base;
    }
    return rta;
}