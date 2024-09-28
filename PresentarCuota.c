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
#include <string.h>

struct Cliente
{
    float nombres[20];
    float apellidos[20];
    char cedula[20];
    char correo[100];
    char direccion[100];
    int id[11];
};

void presentarInteresTotal();
void presentarTotalPagar();
void presentarNumeroAleatorio();
void presentarFechaActual();
void presentarFormatoCuota();

void datosCliente(struct Cliente *cliente);
void ingresarNombres(struct Cliente *cliente);
void ingresarApellidos(struct Cliente *cliente);
void ingresarCedula(struct Cliente *cliente);
void ingresarCorreo(struct Cliente *cliente);
void ingresarDireccion(struct Cliente *cliente);
void ingresarId(struct Cliente *cliente);

int mesPlazo, Nro, numeroAleatorio, fechaActual, descripcion;
float PrestamoSolicitado, capital, interesTotal, TotalPagar, interesMensual, Total, pagoMensual;

int main(int argc, char const *argv[])
{
    struct Cliente cliente;
    printf("INGRESAR LOS DATOS DEL PRESTAMO\n");
    printf("Ingrese el prestamo solicitado: $ ");
    scanf("%f", &PrestamoSolicitado);
    printf("Ingresar el mes plazo:");
    scanf("%d", &mesPlazo);
    printf("INGRESAR LOS DATOS DEL USUARIO\n");
    datosCliente(&cliente);
    system("@cls||clear");
    printf("-------------------------------------------------------------------------------------\n");
    printf("\t \t \t \tTABLA DE AMORTIZACION\n");
    printf("\t \t \t  \t FINANCIERA ABC\n");
    printf("-------------------------------------------------------------------------------------\n");
    printf("Fecha de emision: ");
    presentarFechaActual();
    printf("Nro: ");
    presentarNumeroAleatorio();
    printf("Capital solicitado: $ %.2f\n", PrestamoSolicitado);
    printf("Plazo (%d) meses\n", mesPlazo);
    printf("Taza de interes mensual (2%c): \n", 37);
    printf("\nCliente\n");
    printf("-------------------------------------------------------------------------------------\n");
    printf("Nombres: \n");
    printf("Cedula: \n");
    printf("Correo: \n");
    printf("Direccion: \n");
    printf("Id: \n");
    printf("-------------------------------------------------------------------------------------\n");
    printf("Cuota\n");
    printf("-------------------------------------------------------------------------------------\n");
    printf("Nro\tDescripcion\t\tCapital\t\tValor\t\tInteres\t\tTotal\n");
    presentarFormatoCuota();
    printf("-------------------------------------------------------------------------------------\n");
    printf("Total interes: ");
    presentarInteresTotal();
    printf("-------------------------------------------------------------------------------------\n");
    printf("Total a pagar: ");
    presentarTotalPagar();
    printf("-------------------------------------------------------------------------------------\n");
    printf("\t\t\t\tGRACIAS POR CONFIAR\n");
    printf("=====================================================================================\n");
    printf("Programado por: Victor David Nivelo Yaguana  TP  1A\n");
    printf("=====================================================================================\n");
}
void presentarNumeroAleatorio()
{
    srand(time(NULL));
    printf("%d\n", rand());
}
void presentarFechaActual()
{
    time_t t = time(NULL);
    struct tm tiempoLocal = *localtime(&t);
    char fechaHora[70];
    int bytesEscritos = strftime(fechaHora, sizeof fechaHora, "%Y-%m-%d", &tiempoLocal);
    printf("%s\n", fechaHora);
}

void presentarFormatoCuota()
{
    capital = PrestamoSolicitado;
    pagoMensual = PrestamoSolicitado / mesPlazo;
    for (int i = 0; i < mesPlazo; i++)
    {
        Nro = i + 1;
        char *descripcionMes[mesPlazo];
        descripcion = i + 1;
        interesMensual = PrestamoSolicitado * 0.02;
        Total = pagoMensual + interesMensual;
        printf("%d \tCuota %d \t\t %.2f  \t %.2f \t\t %.2f \t\t %.2f \n", Nro, descripcion, capital, pagoMensual, interesMensual, Total);
        capital = (capital - pagoMensual);
    }
}
/*void presentarNumero(){
    for(int i=0;i<mesPlazo;i++){
        Nro=i+1;
        printf("%d\n",Nro);
    }
}
void presentarCuota(){
    char *descripcionMes[mesPlazo];
    for(int i=0;i<mesPlazo;i++){
        descripcion=i+1;
        printf("\tCuota %d\n",descripcion);
    }
}
void presentarCapital(){
    capital = PrestamoSolicitado;
    pagoMensual = PrestamoSolicitado / mesPlazo;
    for(int i=0;i<mesPlazo;i++){
        printf("\t\t\t%.2f\n", capital);
        capital = (capital - pagoMensual);
    }
}
void presentarPagoMensual(){
    for(inti=0;i<mesPlazo;i++){
        printf("\t\t\t\t\t%.2f\n",pagoMensual);
    }
}
void presentarInteresMensual(){
    for(int i=0;i<mesPlazo;i++){
        interesMensual=PrestamoSolicitado*0.02;
        printf("\t\t\t\t\t\t\t%.2f\n",interesMensual);
    }
}
void presentarTotal(){
    for(int i=0;i<mesPlazo;i++){
        Total=pagoMensual+interesMensual;
        printf("\t\t\t\t\t\t\t\t\t%.2f\n",Total);
    }
}*/

void presentarInteresTotal()
{
    interesTotal = PrestamoSolicitado * 0.02 * mesPlazo;
    printf("%.2f\n", interesTotal);
}
void presentarTotalPagar()
{
    TotalPagar = interesTotal + PrestamoSolicitado;
    printf("%.2f\n", TotalPagar);
}
void datosCliente(struct Cliente *cliente)
{
    ingresarNombres(cliente);
    ingresarApellidos(cliente);
    ingresarCedula(cliente);
    ingresarCorreo(cliente);
    ingresarDireccion(cliente);
    ingresarId(cliente);
}
void ingresarNombres(struct Cliente *cliente)
{
    printf("Ingresar los nombres del usuario:  ");
    scanf("%[^\n]", (*cliente).nombres);
    getchar();
}
void ingresarApellidos(struct Cliente *cliente)
{
    printf("Ingresar los apellidos del usuario:  ");
    scanf("%[^\n]", (*cliente).apellidos);
    getchar();
}
void ingresarCedula(struct Cliente *cliente)
{
    printf("Ingresar el cedula del usuario:  ");
    scanf("%[^\n]", (*cliente).cedula);
    getchar();
}
void ingresarCorreo(struct Cliente *cliente)
{
    printf("Ingresar el correo del usuario:  ");
    scanf("%[^\n]", (*cliente).correo);
    getchar();
}
void ingresarDireccion(struct Cliente *cliente)
{
    printf("Ingresar la direccion del usuario:  ");
    scanf("%[^\n]", (*cliente).direccion);
    getchar();
}
void ingresarId(struct Cliente *cliente)
{
    printf("Ingresar el ID del usuario:  ");
    scanf("%[^\n]", (*cliente).id);
    getchar();
}