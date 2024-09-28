/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ingresarDatos(int limite, float arreglo[]);
int anioInforme(int actual);
void presentarVentas(int limite, float arreglo[]);
float totalAnual(int limite, float arreglo[]);
float promedioVentas(int limite, float arreglo[]);
float mayorVenta(int limite, float arreglo[]);
float menorVenta(int limite, float arreglo[]);
float proyeccion(int limite, float arreglo[]);
void presentarResultados(int limite, float arreglo[]);

int main(int argc, char const *argv[])
{
    int limite = 12;
    float meses[limite];
    system("@cls||clear");
    int anio = 2021;
    ingresarDatos(limite, meses);
    anioInforme(anio);
    presentarVentas(limite, meses);
    float presentarAnual = totalAnual(limite, meses);
    printf("==========================================\n");
    printf("El TOTAL de ventas en el a%co es:|%.2f |\n", 164, presentarAnual);
    float presentarPromedio = promedioVentas(limite, meses);
    printf("==========================================\n");
    printf("El PROMEDIO de ventas es:  \t |%.2f|\n", presentarPromedio);
    presentarResultados(limite, meses);
    return 0;
}
void ingresarDatos(int limite, float arreglo[])
{
    printf("\t  VENTAS MENSUALES\n");
    printf("==========================================\n");
    char *mes;
    for (int i = 0; i < limite; i++)
    {
        switch (i)
        {
        case 0:
            mes = "Enero";
            break;
        case 1:
            mes = "Febrero";
            break;
        case 2:
            mes = "Marzo";
            break;
        case 3:
            mes = "Abril";
            break;
        case 4:
            mes = "Mayo";
            break;
        case 5:
            mes = "Junio";
            break;
        case 6:
            mes = "Julio";
            break;
        case 7:
            mes = "Agosto";
            break;
        case 8:
            mes = "Septiembre";
            break;
        case 9:
            mes = "Octubre";
            break;
        case 10:
            mes = "Noviembre";
            break;
        case 11:
            mes = "Diciembre";
            break;
        }
        printf("Ingrese la venta del mes %s: ", mes);
        scanf("%f", &arreglo[i]);
    }
}
int anioInforme(int actual)
{
    system("@cls||clear");
    printf("==========================================\n");
    printf("\t  INFORME DEL A%cO %d\n", 164, actual);
    printf("==========================================\n");
}
void presentarVentas(int limite, float arreglo[])
{
    printf("|    MES    |\t\t\t| VALOR |\n");
    printf("==========================================\n");
    char *mes;
    for (int i = 0; i < limite; i++)
    {
        switch (i)
        {
        case 0:
            mes = "Enero\t";
            break;
        case 1:
            mes = "Febrero";
            break;
        case 2:
            mes = "Marzo\t";
            break;
        case 3:
            mes = "Abril\t";
            break;
        case 4:
            mes = "Mayo\t";
            break;
        case 5:
            mes = "Junio\t";
            break;
        case 6:
            mes = "Julio\t";
            break;
        case 7:
            mes = "Agosto\t";
            break;
        case 8:
            mes = "Septimebre";
            break;
        case 9:
            mes = "Octubre";
            break;
        case 10:
            mes = "Noviembre";
            break;
        case 11:
            mes = "Diciembre";
            break;
        }
        printf("|%s\t\t\t|  %.2f |\n", mes, arreglo[i]);
    }
}
float totalAnual(int limite, float arreglo[])
{
    float suma = 0;
    for (int i = 0; i < limite; i++)
    {
        suma = suma + arreglo[i];
    }
    return suma;
}
float promedioVentas(int limite, float arreglo[])
{
    float sumaAnual = totalAnual(limite, arreglo);
    float promedio = sumaAnual / limite;
    return promedio;
}
float mayorVenta(int limite, float arreglo[])
{
    float mayor = 0;
    for (int i = 0; i < limite; i++)
    {
        if (arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }
    }
    return mayor;
}
float menorVenta(int limite, float arreglo[])
{
    float menor = mayorVenta(limite, arreglo);
    for (int i = 0; i < limite; i++)
    {
        if (arreglo[i] < menor)
        {
            menor = arreglo[i];
        }
    }
    return menor;
}
float proyeccion(int limite, float arreglo[])
{
    float sumaAnual = totalAnual(limite, arreglo);
    float porcentaje = sumaAnual * 0.1;
    float proyeccionAnual = sumaAnual + porcentaje;
    return proyeccionAnual;
}
void presentarResultados(int limite, float arreglo[])
{
    float mayor = mayorVenta(limite, arreglo);
    float menor = menorVenta(limite, arreglo);
    float presentarProyeccion = proyeccion(limite, arreglo);
    printf("==========================================\n");
    printf("MAYOR venta del a%co: \t\t |%.2f| \n", 164, mayor);
    printf("==========================================\n");
    printf("MENOR venta del a%co: \t\t |%.2f| \n", 164, menor);
    printf("==========================================\n");
    printf("Proyeccion para el PROXIMO a%co: |%.2f|\n", 164, presentarProyeccion);
    printf("==========================================\n");
    printf("@author: Victor Nivelo\n");
    printf("==========================================\n");
}