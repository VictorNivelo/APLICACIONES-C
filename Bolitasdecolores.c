/*En una tienda se efectua una promocion en la cual se hace un descuento sobre el valor de la compra total segun el color de la bolita que el
cliente saque en el sorteo al pagar en caja. si la bolita es de color blanco no se le hara descuento alguno, si es de verde se le hara un
descuento de 10%, si es de amarilla un 25%, si es azul un 50%, uy si es roja un 100%.
 *determinar la cantidad final que el cliente debe pagar por su compra; se sabe que solo hay una bolita de los coloresmencionados en el sorteo*
 * Autor: Victor David Nivelo Yaguana
 * @version 0.1
 * @date 2021-12-04
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int bolita;
    float cantidad_a_pagar, descuento, importe_de_la_compra;
    srand((unsigned)time(NULL));
    printf("Ingresa el valor de la compra: ");
    scanf("%f", &importe_de_la_compra);

    (void)getchar();
    descuento = 0;
    bolita = rand() % 5;
    if (bolita == 0)
        printf("Bolita blanca.\n");
    if (bolita == 1)
    {
        descuento = importe_de_la_compra * 0.1;
        printf("Bolita verde.\n");
    }
    if (bolita == 2)
    {
        descuento = importe_de_la_compra * 0.25;
        printf("Bolita amarilla.\n");
    }
    if (bolita == 3)
    {
        descuento = importe_de_la_compra * 0.5;
        printf("Bolita azul.\n");
    }
    if (bolita == 4)
    {
        descuento = importe_de_la_compra;
        printf("Bolita roja.\n");
    }
    cantidad_a_pagar = importe_de_la_compra - descuento;
    printf("Valor de bolita: %d\n", bolita);
    printf("Valor de cantidad a pagar: %g\n", cantidad_a_pagar);
    printf("Valor de descuento: %g\n", descuento);
    putchar('\n');
    system("pause");
    return 0;
}