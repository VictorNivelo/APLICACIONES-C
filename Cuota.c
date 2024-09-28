/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <strings.h>

int main()
{
    int mesPlazo, PrestamoSolicitado, Nro;
    int Capital, Total, TotalPagar, Parafinal;
    float interesTotal, interes, interesMensual, pagoMensual;
    printf("Ingrese el prestamo solicitado: ");
    scanf("%d", &PrestamoSolicitado);
    printf("Ingrese el mes plazo:\n");
    scanf("%d", &mesPlazo);
    srand(time(NULL));
    interesTotal = PrestamoSolicitado * 0.02 * mesPlazo;
    interesMensual = interesTotal / mesPlazo;
    pagoMensual = PrestamoSolicitado / mesPlazo;
    Capital = PrestamoSolicitado - pagoMensual;
    Total = pagoMensual + interesMensual;
    Parafinal = (interesMensual * mesPlazo);
    TotalPagar = PrestamoSolicitado + Parafinal;
    time_t t = time(NULL);
    struct tm tiempoLocal = *localtime(&t);
    char fechaHora[70];
    char *formato = ("%Y-%m-%d");
    int bytesEscritos = strftime(fechaHora, sizeof fechaHora, formato, &tiempoLocal);
    printf("--------------------------------------------------------------------------\n");
    printf("\t \t \tTABLA DE AMORTIZACION\n");
    printf("\t \t \t   FINANCIERA ABC\n");
    printf("--------------------------------------------------------------------------\n");
    printf("Fecha de emision: %s\n", fechaHora);
    printf("Nro: %d\n", rand());
    printf("Capital solicitado: %d\n", PrestamoSolicitado);
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
    char *descripcion[mesPlazo] = {"Cuota "};
    for (int i = 0; i < mesPlazo; i++)
    {
        printf("%d\t %s\t%d \t%2.f\t%.2f\t%f\t%d\n", i + 1, descripcion[i], PrestamoSolicitado, pagoMensual, interesMensual, Total);
    }
}
/*char *descripcion[mesPlazo];
    for(int i=0;i<mesPlazo;i++){
        printf("\tCuota %d\n",i+1);*/