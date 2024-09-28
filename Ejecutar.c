/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

/*float Capital(int mesPlazo, float PrestamoSolicitado);
float Valor(int mesPlazo, float PrestamoSolicitado);
float Interes(int mesPlazo, float PrestamoSolicitado);
float Total(int mesPlazo, float PrestamoSolicitado);
float TotalPagar(int mesPlazo, float PrestamoSolicitado);
float InteresMensual(int mesPlazo, float PrestamoSolicitado);
void presentarTabla(int mesPlazo, float PrestamoSolicitado);
void ingresarCliente(int mesPlazo, float PrestamoSolicitado);
void ingresarPrestamo(int mesPlazo, float PrestamoSolicitado);

int main(int argc, char const *argv[]){
    int i=0;
    int mesplazo =0;
    int Nro[mesplazo];
    int PrestamoSolicitado[mesplazo]={i+1};
    presentarTabla(mesplazo, PrestamoSolicitado[mesplazo]);
    ingresarCliente(mesplazo, PrestamoSolicitado[mesplazo]);
    ingresarPrestamo(mesplazo, PrestamoSolicitado[mesplazo]);

    return 0;
}

void ingresarPrestamo(int mesPlazo, float PrestamoSolicitado){
    char*Nro[]={"1","999"};
    for(int i=0; i < mesPlazo; i++){
        printf("Nro %s :",Nro[i]);
    }
}*/

int main(int argc, char const *argv[])
{
    time_t t = time(NULL);
    struct tm tiempoLocal = *localtime(&t);
    char fechaHora[70];
    char *formato = ("%Y-%m-%d");
    int bytesEscritos = strftime(fechaHora, sizeof fechaHora, formato, &tiempoLocal);
    int mesesPlazo, i, Capital, Total, TotalPagar, Parafinal;
    printf("Ingrese el prestamo solicitado: ");
    scanf("%d", &PrestamoSolicitado);
    printf("Ingrese el mes plazo; ");
    scanf("%d", &mesesPlazo);
    float PrestamoSolicitado, interesTotal, interes, interesMensual, pagoMensual;
    interesTotal = PrestamoSolicitado * 0.02 * mesesPlazo;
    interesMensual = interesTotal / mesesPlazo;
    srand(time(NULL));
    pagoMensual = PrestamoSolicitado / mesesPlazo;
    Capital = PrestamoSolicitado - pagoMensual;
    Total = pagoMensual + interesMensual;
    Parafinal = (interesMensual * mesesPlazo);
    TotalPagar = PrestamoSolicitado + Parafinal;

    printf("--------------------------------------------------------------------------\n");
    printf("\t \t \tTABLA DE AMORTIZACION\n");
    printf("\t \t \t   FINANCIERA ABC\n");
    printf("--------------------------------------------------------------------------\n");
    //*printf("El interes mensuales de $%.2f\n", interesMensual);*/
    printf("El interes total es de $%.2f\n", interesTotal);
    printf("Fecha de emision: %s\n", fechaHora);
    printf("Nro: %d\n", rand());
    printf("Taza de interes mensual (2): \n");
    printf("Cliente\n");
    printf("--------------------------------------------------------------------------\n");
    printf("Nombres: \n");
    printf("Cedula: \n");
    printf("Correo: \n");
    printf("Direccion: \n");
    printf("Id: \n");
    printf("--------------------------------------------------------------------------\n");
    printf("Cuota\n");
    printf("--------------------------------------------------------------------------\n");
    printf("Nro\tDescripcion\tCapital\t\tValor\tInteres\t\tTotal\t\n");
    printf("%d\t%s\t\t%d\t\t%.2f\t%.2f\t\t%d\n", i, PrestamoSolicitado, pagoMensual, interesMensual, Total);
    printf("%d\t%s\t\t %d\t\t%.2f\t%.2f\t\t%d\t\t\n", i, Capital, pagoMensual, interesMensual, Total);
    printf("--------------------------------------------------------------------------\n");
    printf("Total interes: %.2f\n", interesTotal);
    printf("--------------------------------------------------------------------------\n");
    printf("Total a pagar: %d\n", TotalPagar);
    printf("--------------------------------------------------------------------------\n");
    printf("\t\t\tGRACIAS POR CONFIAR\n");
    printf("--------------------------------------------------------------------------\n");
    printf("Programado por: Victor David Nivelo Yaguana  TP  1A\n");
    printf("--------------------------------------------------------------------------\n");
}