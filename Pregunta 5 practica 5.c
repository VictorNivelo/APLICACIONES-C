/**Desarrolle un ejemplo pequeño en lenguaje de programación en C donde demuestre la utilización de
funciones con paso de parámetros por valor
Autor : Victor David Nivelo Yaguana 1A  TP  UNL*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("@cls||clear");
    int a = 17;
    int b = 13;
    int resultado;

    resultado = (a + b);
    printf("-----------------------------------------------\n");
    printf("Ejemplo parametros por valor\n");
    printf("a= %d ", a);
    printf("b= %d ", b);
    printf("\n-----------------------------------------------\n");
    printf("La suma de los valores a= %d y b= %d es %d\n", a, b, resultado);
    printf("-----------------------------------------------\n");
    printf("Autor; Victor David Nivelo Yaguana  1 A  TP  UNL\n");
    printf("-----------------------------------------------\n");
    system("pause");
    return resultado;
}