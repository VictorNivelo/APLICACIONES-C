/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct PentagonoRegular
{
	int lado;
	double radio;
};

#define NUM_LADOS 5;

// const int NUM_LADOS = 5;

int main()
{

	struct PentagonoRegular pentagono;
	int perimetro;
	float apotema, area, altura;

	system("@cls||clear");
	printf("Ingrese el lado pentágono regular en esta forma: ");
	scanf("%d", &pentagono.lado);
	printf("Ingrese el radio pentágono regular en esta forma: ");
	scanf("%lf", &pentagono.radio);

	perimetro = pentagono.lado * NUM_LADOS;
	apotema = sqrt(pow(pentagono.radio, 2) - pow((pentagono.lado / 2), 2));
	area = (perimetro * apotema) / 2;
	altura = apotema + pentagono.radio;

	printf("El área del polígono regular es: %.2f\n", area);
	printf("El altura del polígono regular es: %.2f\n", altura);

	printf("---------------------------\n");
	printf("tamanio de memoria de pentagono %li\n", sizeof(pentagono));
	printf("tamanio de memoria de perimetro %li\n", sizeof(perimetro));
	printf("tamanio de memoria de apotema %li\n", sizeof(apotema));
	printf("tamanio de memoria de area %li\n", sizeof(area));
	printf("tamanio de memoria de altura %li\n", sizeof(altura));
	printf("tamanio de memoria de un double %li\n", sizeof(double));
	// printf("tamanio de memoria de un NUM_LADOS %li\n", sizeof(NUM_LADOS));

	long totalMemoria = sizeof(pentagono) + sizeof(perimetro) + sizeof(apotema) + sizeof(area) + sizeof(altura);

	printf("TAMANIO TOTAL DE MEMORIA: %li\n", totalMemoria);
	return 0;
}
