/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a, b, c, d, e, f, g, h;
int ingresarDatos();
int suma();
int resta();
int producto();
int division();

int main(int argc, char const *argv[])
{
    int a, b, c, d, e, f, g, h;
    ingresarDatos();
    printf("============================================\n");
    suma();
    resta();
    producto();
    division();
    printf("============================================\n");
    printf("|@author:Victor Nivelo | 1A | TP |\n");
    printf("============================================\n");
    return 0;
}
int ingresarDatos()
{
    system("@cls||clear");
    printf("============================================\n");
    printf("\tPROGRAMA PARA OPERAR FRACCIONES\n");
    printf("============================================\n");
    printf("Ingrese los datos de la Primera fraccion:\n");
    printf("\tNumerador: ");
    scanf("%d", &a);
    printf("\tDenominador: ");
    scanf("%d", &b);
    printf("Ingrese los datos de la Segunda fraccion:\n");
    printf("\tNumerador: ");
    scanf("%d", &c);
    printf("\tDenominador: ");
    scanf("%d", &d);
    printf("Ingrese los datos de la Tercer fraccion:\n");
    printf("\tNumerador: ");
    scanf("%d", &e);
    printf("\tDenominador: ");
    scanf("%d", &f);
    printf("Ingrese los datos de la Cuarta fraccion:\n");
    printf("\tNumerador: ");
    scanf("%d", &g);
    printf("\tDenominador: ");
    scanf("%d", &h);
    printf("SUS FRACCIONES SON: ");
    printf("%d/%d  ,  %d/%d ,  %d/%d  ,  %d/%d  ", a, b, c, d, e, f, g, h, "\n");
    printf("============================================\n");
    printf("\nPresione ENTER para confirmar...\n");
    printf("============================================\n");
    getchar();
    getchar();
    return a, b, c, d, e, f, g, h;
}
int suma()
{
    float numeSuma = (a * d) + (b * c) + (e * h) + (f * g);
    float denoSuma = (b * d * f * h);
    float simpSuma = numeSuma / denoSuma;
    printf("Solucion     SUMA: %.0f/%.0f = %.2f\n", numeSuma, denoSuma, simpSuma);
    return numeSuma, denoSuma;
}
int resta()
{
    float numeResta = (a) - (c) - (e) - (g);
    float denoResta = (b) - (d) - (f) - (h);
    float simpResta = numeResta / denoResta;
    printf("Solucion    RESTA: %.0f/%.0f = %.2f\n", numeResta, denoResta, simpResta);
    return numeResta, denoResta;
}
int producto()
{
    float numePro = a * c * e * g;
    float denoPro = b * d * f * h;
    float simpPro = numePro / denoPro;
    printf("Solucion PRODUCTO: %.0f/%.0f = %.2f\n", numePro, denoPro, simpPro);
    return numePro, denoPro;
}
int division()
{
    float numeDivi = a * d * e * h;
    float denoDivi = b * c * f * g;
    float simpDivi = numeDivi / denoDivi;
    printf("Solucion DIVISION: %.0f/%.0f = %.2f\n", numeDivi, denoDivi, simpDivi);
    return numeDivi, denoDivi;
}