/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argcv[])
{
    char cadenaComoConjunto[] = {'H', 'o', 'l', 'a', ' ', 'M', 'u', 'n', 'd', 'o', '.', '\0'};
    char cadenaComoOracion[] = "Hola mundo! :)";
    char cadenaComoOracion1[30] = "\0";

    printf("Cadena como Conjunto: \t %s \n", cadenaComoConjunto);
    printf("LONGITUD Cadena como Conjunto: \t %li \n \n", strlen(cadenaComoConjunto));
    printf("Cadena como Oracion: \t %s \n", cadenaComoOracion);
    printf("LONGITUD Cadena como Oracion: \t %li \n \n", strlen(cadenaComoOracion));
    printf("Cadena como Oracion 1: \t %s \n", cadenaComoOracion1);
    printf("LONGITUD Cadena como Oracion 1: \t %li \n \n", strlen(cadenaComoOracion1));
    strcpy(cadenaComoOracion1, "Hola");
    printf("Cadena como Oracion 1 Despues de Inicializar: \t %s \n", cadenaComoOracion1);
    printf("LONGITUD Cadena como Oracion 1 Despues de Inicializar: \t %li \n \n", strlen(cadenaComoOracion1));

    return 0;
}

void printStingOneByOne(char str[])
{
    int longitud = strlen(str);
    printStingOneByOneWithLenght(str, longitud);
}
void printfOneByOne(char str[])
{
    prinf("Presentando Cadena recorriendo caracter a caracter : \n");
    int longitud = strlen(str);
    for (int i = 0; i < longitud; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}