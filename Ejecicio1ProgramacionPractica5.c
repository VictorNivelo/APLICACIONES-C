/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct binomios
{

    int PrimerBinomio;
    int SegundoBinomio;
    int TercerBinomio;
    int CuartoBinomio;
};

void ingresarDatos(struct binomios *x, struct binomios *y);
int xSuma(struct binomios *x);
int ySuma(struct binomios *y);
int xResta(struct binomios *x);
int yResta(struct binomios *y);
int productoFinalX(struct binomios *x, struct binomios *y);
int productoFinalY(struct binomios *x, struct binomios *y);
float divisionX(struct binomios *x, struct binomios *y);
float divisionY(struct binomios *x, struct binomios *y);
void presentar(int xSuma, int ySuma, int xResta, int yResta, int productoFinalX, int productoFinalY, int divisionX, int divisionY);

int main(int argc, char const *argv[])
{

    system("@cls || clear");
    struct binomios x, y;
    ingresarDatos(&x, &y);
    int presentarSumaUno = xSuma(&x);
    int presentarSumaDos = ySuma(&y);
    int presentarRestaUno = xResta(&x);
    int presentarRestaDos = yResta(&y);
    int presentarProductoUno = productoFinalX(&x, &y);
    int presentarProductoDos = productoFinalY(&x, &y);
    int presentarDivisionUno = divisionX(&x, &y);
    int presentarDivisionDos = divisionY(&x, &y);

    presentar(presentarSumaUno, presentarSumaDos, presentarRestaUno, presentarRestaDos, presentarProductoUno, presentarProductoDos, presentarDivisionUno, presentarDivisionDos);
    printf("\n-----------------------------------------------------------------------");
    printf("\nAutor: Victor David Nivelo Yaguana 1 A TP UNL");
    printf("\n-----------------------------------------------------------------------");
    printf("\nPulse ENTER para salir");
    getchar();
    getchar();
    return 0;
}

void ingresarDatos(struct binomios *x, struct binomios *y)
{
    printf("-----------------------------------------------------------------------\n");
    printf("\tPROGRAMA PARA OPERAR NUMEROS COMPLEJOS DE LA FORMA BINOMICA\n");
    printf("\t\tIngresar los datos en formato (x, y)\n");
    printf("Primer Binomio: ");
    scanf("%i, %i", &x->PrimerBinomio, &y->PrimerBinomio);
    printf("Segundo Binomio: ");
    scanf("%i, %i", &x->SegundoBinomio, &y->SegundoBinomio);
    printf("Tercer Binomio: ");
    scanf("%i, %i", &x->TercerBinomio, &y->TercerBinomio);
    printf("Cuarto Binomio: ");
    scanf("%i, %i", &x->CuartoBinomio, &y->CuartoBinomio);
}

int xSuma(struct binomios *x)
{
    int xSuma = (x->PrimerBinomio + x->SegundoBinomio + x->TercerBinomio + x->CuartoBinomio);
    return xSuma;
}
int ySuma(struct binomios *y)
{
    int ySuma = (y->PrimerBinomio + y->SegundoBinomio + y->TercerBinomio + y->CuartoBinomio);
    return ySuma;
}
int xResta(struct binomios *x)
{
    int xResta = (x->PrimerBinomio - x->SegundoBinomio - x->TercerBinomio - x->CuartoBinomio);
    return xResta;
}
int yResta(struct binomios *y)
{
    int yResta = (y->PrimerBinomio - y->SegundoBinomio - y->TercerBinomio - y->CuartoBinomio);
    return yResta;
}
int productoFinalX(struct binomios *x, struct binomios *y)
{
    int primerProductoX = ((x->PrimerBinomio * x->SegundoBinomio) - (y->PrimerBinomio * y->SegundoBinomio));
    int primerProductoY = ((x->PrimerBinomio * y->SegundoBinomio) + (y->PrimerBinomio * x->SegundoBinomio));
    int segundoProductoX = ((x->TercerBinomio * x->CuartoBinomio) - (y->TercerBinomio * y->CuartoBinomio));
    int segundoProductoY = ((x->TercerBinomio * y->CuartoBinomio) + (y->TercerBinomio * x->CuartoBinomio));
    int productoFinalX = ((primerProductoX * segundoProductoX) - (primerProductoY * segundoProductoY));
    return productoFinalX;
}
int productoFinalY(struct binomios *x, struct binomios *y)
{
    int primerProductoX = ((x->PrimerBinomio * x->SegundoBinomio) - (y->PrimerBinomio * y->SegundoBinomio));
    int primerProductoY = ((x->PrimerBinomio * y->SegundoBinomio) + (y->PrimerBinomio * x->SegundoBinomio));
    int segundoProductoX = ((x->TercerBinomio * x->CuartoBinomio) - (y->TercerBinomio * y->CuartoBinomio));
    int segundoProductoY = ((x->TercerBinomio * y->CuartoBinomio) + (y->TercerBinomio * x->CuartoBinomio));
    int productoFinalY = ((primerProductoX * segundoProductoY) + (primerProductoY * segundoProductoX));
    return productoFinalY;
}
float divisionX(struct binomios *x, struct binomios *y)
{
    float primeroX = (float)((x->PrimerBinomio * x->SegundoBinomio) - (y->PrimerBinomio * y->SegundoBinomio) / (pow(x->SegundoBinomio, 2) + pow(y->SegundoBinomio, 2)));
    float segundoY = (float)((x->PrimerBinomio * y->SegundoBinomio) + (y->PrimerBinomio * x->SegundoBinomio) / (pow(x->SegundoBinomio, 2) + pow(y->SegundoBinomio, 2)));
    float terceroX = (float)((x->TercerBinomio * x->CuartoBinomio) - (y->TercerBinomio * y->CuartoBinomio) / (pow(x->CuartoBinomio, 2) + pow(y->CuartoBinomio, 2)));
    float cuartoY = (float)((x->TercerBinomio * y->CuartoBinomio) + (y->TercerBinomio * x->CuartoBinomio) / (pow(x->CuartoBinomio, 2) + pow(y->CuartoBinomio, 2)));
    float divisionX = (float)((primeroX * terceroX) - (segundoY * cuartoY) / (pow(terceroX, 2) + pow(cuartoY, 2)));
    return divisionX;
}
float divisionY(struct binomios *x, struct binomios *y)
{
    float primeroX = (float)((x->PrimerBinomio * x->SegundoBinomio) - (y->PrimerBinomio * y->SegundoBinomio) / (pow(x->SegundoBinomio, 2) + pow(y->SegundoBinomio, 2)));
    float segundoY = (float)((x->PrimerBinomio * y->SegundoBinomio) + (y->PrimerBinomio * x->SegundoBinomio) / (pow(x->SegundoBinomio, 2) + pow(y->SegundoBinomio, 2)));
    float terceroX = (float)((x->TercerBinomio * x->CuartoBinomio) - (y->TercerBinomio * y->CuartoBinomio) / (pow(x->CuartoBinomio, 2) + pow(y->CuartoBinomio, 2)));
    float cuartoY = (float)((x->TercerBinomio * y->CuartoBinomio) + (y->TercerBinomio * x->CuartoBinomio) / (pow(x->CuartoBinomio, 2) + pow(y->CuartoBinomio, 2)));
    float divisionY = (float)((primeroX * cuartoY) + (segundoY * terceroX) / (pow(terceroX, 2) + pow(cuartoY, 2)));
    return divisionY;
}
void presentar(int xSuma, int ySuma, int xResta, int yResta, int productoFinalX, int productoFinalY, int divisionX, int divisionY)
{

    printf("-----------------------------------------------------------------------\n");
    printf("\t\t\t\tRESULTADOS:\n");
    if (ySuma > 0)
    {
        printf("Suma= (%i + %ii)", xSuma, ySuma);
    }
    else
    {
        printf("Suma= (%i  %ii)", xSuma, ySuma);
    }
    if (yResta > 0)
    {
        printf("\nResta= (%i + %ii)", xResta, yResta);
    }
    else
    {
        printf("\nResta= (%i  %ii)", xResta, yResta);
    }
    if (productoFinalY > 0)
    {
        printf("\nMultiplicacion= (%i + %ii)", productoFinalX, productoFinalY);
    }
    else
    {
        printf("\nMultiplicacion= (%i  %ii)", productoFinalX, productoFinalY);
    }
    if (divisionY > 0)
    {
        printf("\nDivision= (%i + %ii)\n", divisionX, divisionY);
    }
    else
    {
        printf("\nDivision= (%i  %ii)\n", divisionX, divisionY);
    }
}