/*Programa para dar a conocer el mes por el numero de mes del 1 al 12
 *determinar el mes por el numero del 1 al 12;*
 * Autor: Victor David Nivelo Yaguana
 * @version 0.1
 * @date 2021-12-07
 * @copyright Copyright (c) 2021*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     int i;
     printf("=========================================================\n");
     printf("Introduzca numero del 1 al 12 para determinar el mes:\n");
     printf("=========================================================\n");
     scanf("%d", &i);

     switch (i)
     {
     case 1:
          printf("********************************\n");
          printf("El mes es Enero\n");
          printf("********************************\n");
          break;
     case 2:
          printf("********************************\n");
          printf("El mes es Febrero\n");
          printf("********************************\n");
          break;
     case 3:
          printf("********************************\n");
          printf("El mes es Marzo\n");
          printf("********************************\n");
          break;
     case 4:
          printf("********************************\n");
          printf("El mes es Abril\n");
          printf("********************************\n");
          break;
     case 5:
          printf("********************************\n");
          printf("El mes es Mayo\n");
          printf("********************************\n");
          break;
     case 6:
          printf("********************************\n");
          printf("El mes es Junio\n");
          printf("********************************\n");
          break;
     case 7:
          printf("********************************\n");
          printf("El mes es Julio\n");
          printf("********************************\n");
          break;
     case 8:
          printf("********************************\n");
          printf("El mes es Agosto\n");
          printf("********************************\n");
          break;
     case 9:
          printf("********************************\n");
          printf("El mes es Septiembre\n");
          printf("********************************\n");
          break;
     case 10:
          printf("********************************\n");
          printf("El mes es Octubre\n");
          printf("********************************\n");
          break;
     case 11:
          printf("********************************\n");
          printf("El mes es Noviembre\n");
          printf("********************************\n");
          break;
     case 12:
          printf("********************************\n");
          printf("El mes es Diciembre\n");
          printf("********************************\n");
          break;
     default:
          printf("********************************************************\n");
          printf("La opcion no es valida porque solo existen 12 meses\n");
          printf("********************************************************\n");
          break;
     }

     system("PAUSE");
     return 0;
}