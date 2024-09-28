/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

/*
PROBLEMA
Un productor de leche lleva el registro de lo que produce en litros, pero cuando entrega le pagan en galones.
Realice un algoritmo representado en Pseudo-código, que ayude al productor a saber cuanto recibirá
por la entrega de su producción de un día.

ALGORITMO ventaTotalProduccionLecheDiaria

ProduccionLecheDiaria {
    Entero cantidad;
    Real costo;
}

CONSTANTE:
    Real GALON = 3.785

VARIABLES:
    ProduccionLecheDiaria produccion
    Real totalVenta;
    Real costoProduccionGalones, cantidadGalones;

INICIO
    ESCRIBIR ("Ingrese la cantidad de litros de leche producidos en el día: ");
    LEER (produccion.cantidad);
    ESCRIBIR ("Ingrese el costo de la leche por litro");
    LEER (produccion.costo);

    cantidadGalones =  produccion.cantidad / GALON;
    costoProduccionGalones = produccion.costo * GALON;
    totalVenta = cantidadGalones * costoProduccionGalones;

    ESCRIBIR ("Producción en Galones de leche diaria: " +  cantidadGalones);
    ESCRIBIR ("Venta total en el día: " +  totalVenta);
FIN
*/

#include <stdio.h>
#include <stdlib.h>

#define GALON 3.785

struct ProduccionLecheDiaria
{
    int cantidad;
    float costo;
};

int main(int argc, char **argv)
{
    struct ProduccionLecheDiaria produccion;
    float totalVenta, cantidadGalones, costoProduccionGalones;

    // limpiar la pantalla
    system("@cls||clear");

    printf("Ingrese la cantidad de litros de leche producidos en el dia: ");
    scanf("%d", &produccion.cantidad);
    printf("Ingrese el costo de la leche por litro: ");
    scanf("%f", &produccion.costo);
    // getchar para limpiar mi flujo de entrada (el último enter)
    getchar();

    cantidadGalones = produccion.cantidad / GALON;
    costoProduccionGalones = produccion.costo * GALON;
    totalVenta = cantidadGalones * costoProduccionGalones;

    printf("Producción en Galones de leche diaria: %f\n", cantidadGalones);
    printf("Total de venta diaria: %f\n\n", totalVenta);

    // otra forma como se puede presentar
    printf("*****************************************************\n");
    printf("\tRESUMEN DE PRODUCCION\n");
    printf("******************************************************\n");
    printf("\tMedida\t\tCosto x Medida\t\tTotal de venta\n");
    printf("\t%d litros\t%f x litro\t$ %f\n", produccion.cantidad, produccion.costo, (produccion.cantidad * produccion.costo));
    printf("\t%.2f galon\t%f x galon\t$ %f\n", cantidadGalones, costoProduccionGalones, totalVenta);
    printf("******************************************************\n");
    // Ahora como una pausa para salir del programa
    getchar();
    return 0;
}
