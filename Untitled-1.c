/*En una tienda se efectua una promocion en la cual se hace un descuento sobre el valor de la compra total segun la edad o discapacidad de la
persona que el si presenta un discapacidad se hace un descuento de 40%, si es de tercera edad se realiza un descuento de 50%, si presenta
discapacidad fisica se hara un descuento de 60% y si no presenta
ningun problema no habra descuento.
 *determinar la cantidad final que el cliente debe pagar por su compra;*
 * Autor: Victor David Nivelo Yaguana
 * @version 0.1
 * @date 2021-12-07
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct ResumenComprobante
{
    float subTotal;
    short porcentajeDscto;
    float valorDscto;
    float total;
};

enum Problema
{
    Normal,
    MayorEdad,
    Discapacitado,
    DiscapacidadFisica
};

#define Total_descuento_persona 5;

int main(int argc, char const *argv[])
{
    system("@cls||clear");

    struct ResumenComprobante comprobante;
    enum ColorBolita colorBolitaSorteada;

    printf("BIENVENIDOS A LA TIENDA XYZ!!\n");
    printf("Ingrese el valor de la compra del cliente: ");
    scanf("%f", &comprobante.subTotal);
    getchar();

    printf("Ud. ha obtenido la bolita de color: ");
    switch (colorBolitaSorteada)
    {
    case Normal:
    {
        printf("VERDE\n");
        comprobante.porcentajeDscto = 10;
        break;
    }
    case MayorEdad:
    {
        printf("AZUL\n");
        comprobante.porcentajeDscto = 25;
        break;
    }
    case Discapacitado:
    {
        printf("AMARILLO\n");
        comprobante.porcentajeDscto = 50;
        break;
    }
    case DiscapacidadFisica:
    {
        printf("ROJA\n");
        comprobante.porcentajeDscto = 100;
        break;
    }
    }

    comprobante.valorDscto = comprobante.subTotal * ((float)comprobante.porcentajeDscto / 100);
    comprobante.total = comprobante.subTotal - comprobante.valorDscto;
    printf("Resumen pago del comprobante:\n");
    printf("SUBTOTAL --> %f\n", comprobante.subTotal);
    printf("DESCUENTO (%hi %%) --> %.2f\n", comprobante.porcentajeDscto, comprobante.valorDscto);
    printf("PAGO TOTAL --> %.2f\n", comprobante.total);

    getchar();
    return 0;
}