/**Desarrolle un ejemplo pequeño en lenguaje de programación en C
 donde demuestre la utilización de funciones con paso de parámetros por referencia
 Autor : Victor David Nivelo Yaguana 1A  TP  UNL
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("@cls||clear");
    int a;
    int b;
    int Suma;

    printf("-----------------------------------------------\n");
    printf("Ejemplo parametros por referencia\n");
    printf("Ingrese a:   ");
    scanf("%d", &a);
    printf("Ingrese b:   ");
    scanf("%d", &b);
    Suma = (a + b);
    printf("\n-----------------------------------------------\n");
    printf("La suma de los valores a= %d y b= %d es %d \n", a, b, Suma);
    printf("-----------------------------------------------\n");
    printf("Autor; Victor David Nivelo Yaguana  1 A  TP  UNL\n");
    printf("-----------------------------------------------\n");
    system("pause");

    return Suma;
}