/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>

#define AZUL "\33[36m"
#define DEFAULT "\33[0m"

struct BINARIOS
{
    long NrBinario1, NrBinario2;
};

struct BINARIOS IngresarNumeros();
void CalcularSuma(struct BINARIOS SumaBinaria);

int main(int argc, char const *argv[])
{

    struct BINARIOS SumaBinaria;
    int Repetir;

    do
    {
        printf("%s", AZUL);
        printf("\tSUMA DE DOS NUMEROS BINARIOS\n");
        printf("%s", DEFAULT);
        SumaBinaria = IngresarNumeros();
        CalcularSuma(SumaBinaria);

        printf("\n\nIngrese 1 para una nueva suma\n");
        printf("Ingrese 2 para salir del programa\n");
        scanf("%i", &Repetir);

    } while (Repetir == 1);

    printf("=====================================================\n");
    printf("********GRACIAS POR USAR NUESTRO PROGRAMA**********\n");
    printf("=====================================================\n\n");
    printf("Realizador por: Thais Cartuche");
    return 0;
}

struct BINARIOS IngresarNumeros()
{
    struct BINARIOS SumaBinaria;
    printf("Ingrese el primer numero binario: ");
    scanf("%lu", &SumaBinaria.NrBinario1);
    printf("Ingrese el segundo numero binario: ");
    scanf("%lu", &SumaBinaria.NrBinario2);

    return SumaBinaria;
}

void CalcularSuma(struct BINARIOS SumaBinaria)
{
    int i = 0, sobrante = 0, suma[20];
    while (SumaBinaria.NrBinario1 != 0 || SumaBinaria.NrBinario2 != 0)
    {
        suma[i++] = (SumaBinaria.NrBinario1 % 10 + SumaBinaria.NrBinario2 % 10 + sobrante) % 2;
        sobrante = (SumaBinaria.NrBinario1 % 10 + SumaBinaria.NrBinario2 % 10 + sobrante) / 2;
        SumaBinaria.NrBinario1 = SumaBinaria.NrBinario1 / 10;
        SumaBinaria.NrBinario2 = SumaBinaria.NrBinario2 / 10;
    }
    if (sobrante != 0)
    {
        suma[i++] = sobrante;
    }
    --i;
    printf("%s", AZUL);
    printf("Suma de los numeros binarios: ");
    printf("%s", DEFAULT);
    while (i >= 0)
    {
        printf("%d", suma[i--]);
    }
}
