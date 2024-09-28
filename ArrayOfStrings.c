/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void ingresarFrases(char *string[], char *autores[], int limite);
void presentarTodasFrases(char *string[], char *autores[], int limite);
int sortearFrase(int rango);
void publicarResultados(char *string[], char *autores[], int posicionElementoGanandor);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, NULL);
    system("@cls||clear");
    int limite = 10;
    // TODO: Ingresar el numero de las frases que deseamos ingresar
    char *frases[limite];
    char *autores[limite];
    printf("Ingresar %d los refranes que usted conozca:  \n", limite);
    ingresarFrases(frases, autores, limite);

    printf("Refranes ingresados  :\n");
    presentarTodasFrases(frases, autores, limite);

    int indiceGanador = sortearFrase(limite);
    publicarResultados(frases, autores, indiceGanador);

    return 0;
}
// sortear frase
int sortearFrase(int rango)
{
    srand(time(NULL));
    int aleatorio = rand() % rango;
    return aleatorio;
}

void publicarResultados(char *strings[], char *autores[], int posicionElementoGanador)
{
    printf("Felicitaciones Gano la frase 2\n");
    printf("[%d]---->", posicionElementoGanador);
    puts(strings[posicionElementoGanador]);
    printf("Autor ---> %s\n", autores[posicionElementoGanador]);
}

void ingresarFrases(char *strings[], char *autores[], int limite)
{
    for (int i = 0; i < limite; i++)
    {
        printf("Ingrese la frase en [%d]:  ", i);
        /*
        char *elementoStr = (char *)malloc(100);
        fgets(elementoStr, 100, stdin);
        stings[i] = elementoStr;
        */
        strings[i] = (char *)malloc(100);
        fgets(strings[i], 100, stdin);

        printf("Ingrese el autor [%d]: ", i);
        autores[i] = (char *)malloc(100);
        fgets(autores[i], 100, stdin);
    }
}

void presentarTodasFrases(char *strings[], char *autores[], int limite)
{
    for (int i = 0; i < limite; i++)
    {
        printf("Frase[%d]\t", i);
        puts(strings[i]);

        printf("\bAutor[%d]\t", i);
        puts(autores[i]);
    }
}
// 2.obtener las palabras de las frases cada frase
// 3.obtemerlas cocales decada frase
// 4.obtener la cantidad de consonantes de cada frase