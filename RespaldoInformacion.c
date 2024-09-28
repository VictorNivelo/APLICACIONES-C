/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define GB 1024
#define CAPACIDAD_CD 700

int main(int argc, char const *argv[])
{
    system("@cls||clear");

    float almacenamientoGB, tamanioEnMB;
    int cantidadCD;

    printf("Ingrese la cantidad de almacenamiento que se necesita respaldar (en GB): ");
    scanf("%f", &almacenamientoGB);
    getchar();

    tamanioEnMB = almacenamientoGB * GB;
    cantidadCD = (int)ceil(tamanioEnMB / CAPACIDAD_CD);

    printf("%f GB se necesitan: %d CD(s)\n", almacenamientoGB, cantidadCD);

    return 0;
}

/*
Calcular el número de CD necesarios para realizar una copia de seguridad de la información
almacenada cuya capacidad se conoce en GigaBytes. Un CD virgen su capacidad de
almacenamiento 700 MegaBytes y un GigaByte es igual a 1024 MegaBytes
(Usar estructuras de control estudiadas)

ANALISIS Y DTERMINACIÓN DE REQUERIMIENTOS
==========================================

Datos de Entrada						Datos de Salida
- Capacidad en GB (capacidadGB)	- Cantidad a discos a utilizar (cantidadCD)


ESQUEMAS ADICIONALES
---------------------
1 GB = 1024 MB
Capacidad_CD = 700 MB

tamanioEnMB = capacidadGB * 1024
cantidadCD = tamanioEnMB / capacidad_CD; --> OJO REDONDEAR


REQUERIMIENTOS
---------------
* Calcular el cantidad de CD que se necesitan para realizar una copia de seguridad desde GB


DISEÑO
-------
1) Solicitar la cantidad de almacenamiento que se necesita respaldar (en GB).
2) Calcular el tamanio en B desde la cantida de almacenamiento (tamanioEnMB = capacidadGB * 1024)
3) Calcular la cantidad de CD cantidadCD = tamanioEnMB / capacidad_CD; y REDONDEAR
4) Presentar la cantidad de CD necesarios


IMPLEMENTACIÓN
---------------

ALGORITMO RespaldoInformación

CONSTANTES
    Entero GB = 1024;
    Entero CAPACIDAD_CD = 700

VARIABLES
        Real almacenamientoGB, tamanioEnMB;
        Entero cantidadCD;

INICIO
    ESCRIBIR ("Ingrese la cantidad de almacenamiento que se necesita respaldar (en GB): ");
    LEER (capacidadGB);
    tamanioEnMB = almacenamientoGB * GB
    cantidadCD = redondear(tamanioEnMB / capacidad_CD);
    ESCRIBIR ("La cantidad de CD es de: " + cantidadCD);
FIN

*/