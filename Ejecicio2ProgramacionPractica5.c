/** Programa que permita Jugar El 7 gana Todo; este
 juego consiste en lanzar dos Dados y el resultado de estos
 lanzamientos obtenemos entre ellos el número 7..
 hemos ganado Todo!!!, caso contrario hemos perdido, puede
 hacerlo más interesante que el jugador ingrese
 una apuesta si pierde gana la casa  y se sumará en su arca,
 pues si gana, ganará todo el contenido de la arca…
 Cada vez que se juega la casa apuesta $20 versus la apuesta del jugador.
 Autor: Victor David Nivelo Yaguana 1 A TP UNL **/

#include <iostream>
#include <stdlib.h>
#include <time.h>

class Dado
{
private:
    int Lado;

public:
    Dado(int valor = 0)
    {
        Lado = valor;
    }

    int getLado()
    {
        return Lado;
    }

    void serLado(int a)
    {
        Lado = a;
    }

    int sumaDados(Dado dado2)
    {
        int Total = dado2.Lado + Lado;
        return Total;
    }
};

float PresentarBote(float a);
Dado LanzarDados1();
Dado LanzarDados2();

int main(int argc, char const *argv[])
{
    system("@cls||clear");

    float apuesta, Bote;
    int resultado;

    printf("--------------------------------------------\n");
    printf("\t JUEGO EL 7 GANA TODO\n");
    printf("--------------------------------------------\n");

    printf("Ingrese la cantidad que va apostar:   ");
    scanf("%f", &apuesta);

    Bote = PresentarBote(apuesta);

    getchar();

    Dado dado1 = LanzarDados1();
    Dado dado2 = LanzarDados2();

    resultado = dado1.sumaDados(dado2);

    printf("Un total de = %d\n", resultado);

    if (resultado != 7)
    {
        printf("\tLastima, suerte para la proxima\n");
        printf("\tHa perdido $%.2f\n", apuesta);
    }
    else
    {
        printf("\tA ganado el tiro premio de $%.2f\n", Bote);
        Bote = 0;
    }
    printf("---------------------------------------------------\n");
    printf("Autor: Victor David Nivelo Yaguana  1 A  TP  UNL\n");
    printf("---------------------------------------------------\n");

    return 0;
}

float PresentarBote(float a)
{
    printf("La banca depositara $20.00 al Bote\n");
    float total = a + 20;
    printf("El bote total es $%.2f\n", total);
    printf("\n");
    return total;
}

Dado LanzarDados1()
{
    srand(time(NULL));
    int Lado = rand() % 6 + 1;
    printf("--------------------------------------------\n");
    printf("\tResultados de los dados\n");
    printf("Primer dado %d\n", Lado);
    // int Lado = rand() % 0;
    Dado dado = Dado(Lado);
    return dado;
}

Dado LanzarDados2()
{
    // srand(time(NULL));
    int Lado = rand() % 1 + 5;
    printf("Segundo dado %d\n", Lado);
    printf("\n");
    printf("----------------------------------------------\n");
    // int Lado = rand() % 0;
    Dado dado = Dado(Lado);
    return dado;
}
