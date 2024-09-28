/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>

float potencia(int base, int exponente)
{
	if (exponente > 1)
	{
		return base * potencia(base, exponente - 1);
	}
	else
	{
		if (exponente < 0)
		{
			return 1.0 / potencia(base, -exponente);
		}
		else
		{
			if (exponente == 0)
			{
				return 1;
			}
			else
			{
				return base;
			}
		}
	}
}

int main()
{
	int base, exponente;
	float resultado;
	printf("Ingrese la base: ");
	scanf("%d", &base);
	printf("Ingrese el exponente: ");
	scanf("%d", &exponente);
	resultado = potencia(base, exponente);
	printf("El resultado %d^%d =  %.6f\n", base, exponente, resultado);
	return 0;
}

/*
int main (){
	float resultado;
	resultado = potencia (3,5);
	printf("El resultado 3 expo 5 es %f\n", resultado);
	resultado = potencia (3,0);
	printf("El resultado 3 expo 0 es %f\n", resultado);
	resultado = potencia (3,-3);
	printf("El resultado 3 expo -3 es %f\n", resultado);
	return  0;
}
*/
