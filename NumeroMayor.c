/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    system("@cls||clear");
    int numero1, numero2, numero3, mayor;

    printf("PROGRAMA QUE PERMITE ENCONTRAR EL NÚMERO MAYOR DE LOS NUMEROS ENTEROS INGRESADOS\n");
    printf("*********************************************************************************\n");

    printf("Ingresar los 3 número que desea verificar: (#,#,#...) ");
    scanf("%d,%d,%d", &numero1, &numero2, &numero3);
    getchar();

    mayor = numero1;

    if (numero2 > mayor)
    {
        mayor = numero2;
    }
    if (numero3 > mayor)
    {
        mayor = numero3;
    }

    printf("El número mayor es: %d\n\n", mayor);
    printf("*********************************************************************************\n");
    printf("Desarrollado por: wduck \n");
    printf("Gracias por usar nuestro programa!!");

    getchar();
    return 0;
}
