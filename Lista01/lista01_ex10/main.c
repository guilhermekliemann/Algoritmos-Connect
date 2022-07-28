#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float xa, ya, xb, yb, distancia;

    printf("\nQual o valor da abcissa A: ");
    scanf("%f", &xa);

    printf("\nQual o valor da abcissa B: ");
    scanf("%f", &xb);

    printf("\nQual o valor da ordenada A: ");
    scanf("%f", &ya);

    printf("\nQual o valor da ordenada B: ");
    scanf("%f", &yb);

    distancia = sqrt(pow((xa-xb),2) + pow((ya-yb),2));

    printf("\nA distância entre os pontos é: %.2f \n", distancia);

    return 0;
}
