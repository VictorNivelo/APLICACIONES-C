/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int ingresarNTerminos();
bool verificarPrimo(int numero);
long calcularFactorial(int numero);
int potencia(int base, int exponente);
long generarValores(int nTerminos);
void presentarSerie(long sumatoria);

int main(int argc, char const *argv[])
{
    int nTerminos, b, numero, base, exponente;
    nTerminos = ingresarNTerminos();
    long suma = generarValores(nTerminos);
    exponente = potencia(base, exponente);
    presentarSerie(suma);
    printf("-------------------------------------------------------------------------\n");
    printf("AUTOR:\n\t Victor Nivelo\n");
    printf("-------------------------------------------------------------------------\n");
}
int ingresarNTerminos()
{
    int limite;
    system("@cls||clear");
    printf("PROGRAMA PARA CALCULAR SECUENCIAS\n");
    printf("---------------------------------\n");
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &limite);
    return limite;
}
bool verificarPrimo(int numero)
{
    int i = 2;
    bool esPrimo = true;
    while (i < numero && esPrimo)
    {
        if (numero % i == 0)
        {
            esPrimo = false;
        }
        i++;
    }
    return esPrimo;
}
long calcularFactorial(int numero)
{
    long factorial = 1;
    for (int i = 2; i <= numero; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
long generarValores(int nTerminos)
{
    long suma = 0;
    int i = 1, termino = 2, base, exponente, numero, b = 1;
    int pot = potencia(base, exponente);
    while (i <= nTerminos)
    {
        bool esPrimo = verificarPrimo(termino);
        if (esPrimo)
        {
            while (b <= nTerminos)
            {
                int a = 0, fibo = 0;
                fibo = a + b;
                a = b;
                b = fibo;
                b++;
            }
            printf("%d!/%d^%d + ", termino, b, pot);
            suma = suma + calcularFactorial(termino);
            i++;
            pot++;
        }
        termino++;
    }
    return suma;
}
int potencia(int base, int exponente)
{
    int a = 0, b = 0;
    long pot = 1;
    for (int i = 1; i < exponente; i++)
    {
        pot = pot * base;
    }
    return pot;
}
void presentarSerie(long sumatoria)
{
    printf("\nS = %li\n", sumatoria);
}