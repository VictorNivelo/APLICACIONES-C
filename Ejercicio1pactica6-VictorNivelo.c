/**
 * Autor: Victor David Nivelo Yaguana
 * Un agente de ventas necesita emitir un informe de ventas realizadas por
 * su empresa durante un año especícfico, para lo cual debe ingresar el
 * total de ventas mensual realizado por la empresa para ese año.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void ingresarVentas(int limite, float valorVentas[]);
int anioInforme();
void presentarVentas(int limite, float valorVentas[]);
float sumaVentas(int limite, float valorVentas[]);
float promedio(int limite, float valorVentas[]);
void presentarInforme(int longitud, float valorVentas[]);
float proyeccion(int limite, float valorVentas[]);
float vantaMayor(int limite, float valorVentas[]);
float ventaMenor(int limite, float valorVentas[]);

int main(int argc, char const *argv[])
{
    system("@cls||clear");

    int limite = 12;
    float mes[limite];
    ingresarVentas(limite, mes);
    presentarVentas(limite, mes);
    presentarInforme(limite, mes);

    return 0;
}

void ingresarVentas(int limite, float valorVentas[])
{
    char *mes[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    for (int i = 0; i < limite; i++)
    {
        printf("Ingrese las ventas registradas del mes %s :", mes[i]);
        scanf("%f", &valorVentas[i]);
    }
}

int anioInforme()
{
    time_t currentime;
    time(&currentime);
    struct tm *actualTiempo = localtime(&currentime);
    return actualTiempo->tm_year + 1900;
}

void presentarVentas(int limite, float valorVentas[])
{
    char *mes[] = {"Enero\t   ", "Febrero\t   ", "Marzo\t   ", "Abril\t   ", "Mayo\t   ", "Junio\t   ", "Julio\t   ", "Agosto\t   ", "Septiembre   ", "Octubre\t   ", "Noviembre   ", "Diciembre   "};
    printf("=====================================================\n");
    printf("\t\tInforme de ventas\n");
    printf("\t\tVentas del a%Co\t\t\t\n", 164, anioInforme());
    printf("=====================================================\n");
    printf("Mes\t\t Nro. de mes\t \tVentas\t \n");
    for (int i = 0; i < limite; i++)
    {
        printf("%s\t \t%d\t \t $ %.2f\t \n", mes[i], i + 1, valorVentas[i]);
    }
}

float sumaVentas(int limite, float valorVentas[])
{
    float sumaTotal = 0;
    for (int i = 0; i < limite; i++)
    {
        sumaTotal = sumaTotal + valorVentas[i];
    }
    return sumaTotal;
}

float promedio(int limite, float valorVentas[])
{
    return sumaVentas(limite, valorVentas) / limite;
}

float proyeccion(int limite, float valorVentas[])
{
    float porcentaje = 0.1;
    return (sumaVentas(limite, valorVentas) + (sumaVentas(limite, valorVentas) * porcentaje));
}

float ventaMayor(int limite, float valorVentas[])
{
    float mayor = 0;
    for (int i = 0; i < limite; i++)
    {
        if (valorVentas[i] > mayor)
        {
            mayor = valorVentas[i];
        }
    }
    return mayor;
}

float ventaMenor(int limite, float valorVentas[])
{
    float menor = ventaMayor(limite, valorVentas);
    for (int i = 0; i < limite; i++)
    {
        if (valorVentas[i] < menor)
        {
            menor = valorVentas[i];
        }
    }
    return menor;
}

void presentarInforme(int limite, float valorVentas[])
{
    printf("=============================================================\n");
    printf("Venta mayor del a%co: \t\t\t\t  $ %.2f\t \n", 164, ventaMayor(limite, valorVentas));
    printf("Venta menor del a%co: \t\t\t\t  $ %.2f\t \n", 164, ventaMenor(limite, valorVentas));
    printf("Total de ventas en al a%co\t\t\t  $ %.2f\t \n", 164, sumaVentas(limite, valorVentas));
    printf("Promedio de ventas alcanzadas el proximo a%co      $ %.2f\t \n", 164, promedio(limite, valorVentas));
    printf("Proyeccion de ventas para el proximo a%co \t  $ %.2f\t \n", 164, proyeccion(limite, valorVentas));
    printf("=============================================================\n");
    printf("Autor: Victor David Nivelo Yaguana  TP  1A\n");
    printf("=============================================================\n");
}