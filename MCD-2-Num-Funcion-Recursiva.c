/*
 * @author Victor Nivelo
 * @brief
 * @version 0.1
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>

int mcd_2(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return mcd_2(num2, num1 % num2);
    }
}

int main()
{
    int num1, num2, resultado;
    printf("Porfavor ingrese el primer numero ");
    scanf("%d", &num1);
    printf("Porfavor ingrese el segundo numero");
    scanf("%d", &num2);
    resultado = mcd_2(num1, num2);
    printf("El mcd es = %d", resultado);
}
