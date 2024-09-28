/*Realizar un programa que me permita sumar dos números binarios ingresados desde teclado.
Utilizar programación modular (identificar y usar funciones) y estructura de datos
estáticas (Arreglos Unidimensionales y/o Strings). Validar el ingreso de dígitos
correspondiente al sistema numérico (binario).
@author: Victor David Nivelo Yaguana | TP | 1 A | UNL
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumabinarios[8];
void ingresarTerminos();

int main()
{
    int uno, dos;
    int i = 0, acarreo = 0, sumabinarios[8];
    ingresarTerminos(uno, dos);
    while (uno != 0 || dos != 0)
    {
        sumabinarios[i++] = (uno % 10 + dos % 10 + acarreo) % 2;
        acarreo = (uno % 10 + dos % 10 + acarreo) / 2;
        uno = uno / 10;
        dos = dos / 10;
    }
    if (acarreo != 0)
    {
        sumabinarios[i++] = acarreo;
    }
    --i;
    printf("Suma en binrio: ");
    while (i >= 0)
    {
        printf("%d", sumabinarios[i--]);
    }
    getchar();
    getchar();
    return 0;
}
void ingresarTerminos(int uno, int dos)
{
    system("@cls || clear");
    printf("PROGRAMA PARA SUMAR DOS NUMEROS BINARIOS\n");
    printf("----------------------------------------------------------\n");
    printf("\nIngrese el primer numero: ");
    scanf("%ld", &uno);
    printf("Ingrese el segundo numero: ");
    scanf("%ld", &dos);
    printf("----------------------------------------------------------\n");
    printf("\nAutor: Victor David Nivelo Yaguana | 1 A  | TP  | UNL\n");
}