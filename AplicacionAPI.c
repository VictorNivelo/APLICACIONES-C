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

struct Persona
{
    char nombres[50];
    char apellidos[50];
};

struct Persona ingreseDatosPersona();
char *crearNombresCompletos(struct Persona persona);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, NULL);
    system("@cls||clear");

    struct Persona persona = ingreseDatosPersona();
    char *nombresCompletos = crearNombresCompletos(persona);

    printf("Sus nombres completos: %s\n", nombresCompletos);
    printf("Utilizando puts: --> \n");
    puts(nombresCompletos);

    printf("El tamaño de %s ==> %ld\n", persona.nombres, strlen(persona.nombres));
    printf("El tamaño de %s ==> %ld\n", persona.apellidos, strlen(persona.apellidos));

    printf("El tamaño de %s ==> %ld\n", nombresCompletos, strlen(nombresCompletos));

    // TODO:
    // 0) Cambair el formato de los nombres completos: Apellidos y Nombres//

    int main(int argc, char const *argv[])
    {
        char nombresCompletos[] = "Nombres y apellidos, en mayuscula";
        printf("Nombres en mayusculas: %s\n", nombresCompletos);

        // Convertir cada char a mayúscula
        // usando toupper
        for (int i = 0; nombresCompletos[indice] != '\0'; ++i)
        {
            nombresCompletos[i] = toupper(nombresCompletos[i]);
        }
        printf("Cadena despues de ser convertida: %s\n", nombresCompletos);
        return 0;
    }
    // 1) Presentar nombres completos en Mayúsculas
    // 2) Indicar cuantas vocales existen en sus nombres completos (A-a)
    // 3) Indicar cuantas vocales mínúsculas existen en sus nombres completos
    // 4) Indicar cuantas vocales mayúsculas existen en sus nombres completos
    int contarVocales(char *nombresCompletos)
    {
        int vocales = 0;

        // Recorrer toda la cadena
        for (int o = 0; nombresCompletos[o] != '\0'; ++o)
        {

            // Obtener el char de la posición en donde está el índice
            // y por otro lado convertirla a minúscula

            // Así no importa si ponen 'A' o 'a', ambas letras serán convertidas a 'a'
            char letraActual = tolower(nombresCompletos[o]);

            if (
                letraActual == 'a' ||
                letraActual == 'e' ||
                letraActual == 'i' ||
                letraActual == 'o' ||
                letraActual == 'u')
            {
                vocales++;
            }
        }
        for (int o = 0; nombresCompletos[o] != '\0'; ++o)
        {
            char letraActual = tolower(nombresCompletos[o]);
            if (
                letraActual == 'A' ||
                letraActual == 'E' ||
                letraActual == 'I' ||
                letraActual == 'O' ||
                letraActual == 'U')
            {
                vocales++;
            }
            return vocales;
        }

        return 0;
    }

    struct Persona ingreseDatosPersona()
    {
        struct Persona persona;
        printf("Ingrese sus nombres: ");
        // scanf("%[^\n]", nombres);
        fgets(persona.nombres, 50, stdin);
        // eliminar el enter;
        int tamanioNombres = strlen(persona.nombres);
        persona.nombres[tamanioNombres - 1] = '\0';
        // getchar();

        printf("Ingrese sus apellidos: ");
        fgets(persona.apellidos, 50, stdin);
        // scanf("%[^\n]", apellidos);
        int indexCoincidencia = strcspn(persona.apellidos, "\n");
        persona.apellidos[indexCoincidencia] = '\0';

        return persona;
    }

    char *crearNombresCompletos(struct Persona persona)
    {
        char *nombresFull = (char *)malloc(101);
        strcpy(nombresFull, persona.nombres);
        strcat(nombresFull, " ");
        strcat(nombresFull, persona.apellidos);
        return nombresFull;
    }