#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float area, raio, pi = 3.14;

    printf("\nQual o raio da pizza? ");
    scanf("%f", &raio);

    area = pi * pow(raio, 2);

    printf("\nA �rea da pizza �: %.2f", area);

    return 0;
}
