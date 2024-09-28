/**
 * @author: Victor David Nivelo Yaguana
 * generar y sumar la siguiente serie ingresando el numero de terminos
 * EJEMPLOS DE TERMINOS A 7
 * S = +(1 / 3)^1 + (3 / 9)^1 – (5 / 15)^2 + (7 / 21)^3 + (9 / 27)^5 - (11 / 33)^8 + (13 / 39)^13 + …
 * */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

double generarterminosserie(int nterminos);
int generarsigno(int *contadorsigno, int signoactual);
double calculartermino(int signo, long numerador, double denominador, int fibo);
void generarnumerador(int *numero, int termino);
int generardenominador(int numerador);
void generarfibo(int *fibo, int *anteriorfibo);

int main(int argc, char const *argv[])
{
    int nterminos;
    system("@cls||clear");
    printf("\n*******************************************\n");
    printf("Ingresar el numero de terminos: ");
    scanf("%i", &nterminos);
    printf("\n********************************************\n");
    double suma = generarterminosserie(nterminos);
    printf("\n********************************************\n");
    printf("La sumatoria de la serie es\t s= %f", suma);
    printf("\n********************************************\n");
    printf("autor: Victor David Nivelo Yaguana");
    printf("\n********************************************\n");
    printf("\t \t \t Fin del programa");
    printf("\n********************************************\n");
    getchar();
    getchar();
    return 0;
}

double generarterminosserie(int nterminos)
{

    int fibo = 0;
    int anteriorfibo = 1;
    int numerador = 1;
    int contadorsigno = 1, signoactual = 1;
    double suma = 0;

    for (int i = 1; 1 <= nterminos; i++)
    {
        signoactual = generarsigno(&contadorsigno, signoactual);
        generarnumerador(&numerador, 1);
        int denominador = generardenominador(numerador);
        generarfibo(&fibo, &anteriorfibo);
        suma = suma + calculartermino(signoactual, numerador, denominador, fibo);
    }
    printf("\n");
    return suma;
}
int generarsigno(int *contadorsigno, int signoactual)
{
    int limite = 2;
    if (*contadorsigno > limite)
    {
        *contadorsigno = 1;
        signoactual = signoactual * (-1);
        printf(" - ");
    }
    else
    {
        (*contadorsigno)++;
        signoactual = 1;
        printf(" + ");
    }
    return signoactual;
}
void generarNumerador(int *numero, int termino)
{
    if (termino == 1)
    {
        *numero = 1;
    }
    else
    {
        *numero = *numero + 2;
    }
    printf("%i", *numero);
}
int generardenominador(int numerador)
{
    int denominador = numerador * 3;
    printf("%i", denominador);
    return denominador;
}
void generarfibo(int *fibo, int *anteriorfibo)
{
    int proximofibo = *fibo + *anteriorfibo;
    *anteriorfibo = *fibo;
    *fibo = proximofibo;
    printf("^%i", fibo);
}
double calculartermino(int signo, long numerador, double denominador, int fibo)
{
    return signo * pow((numerador * 1.0) / denominador, fibo);
}