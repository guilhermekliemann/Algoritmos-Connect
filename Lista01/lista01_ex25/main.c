#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float altura, raio, volume;

    printf("\nQual a altura da caixa d'�gua? ");
    scanf("%f", &altura);

    printf("\nQual o raio da base da caixa d'�gua? ");
    scanf("%f", &raio);

    volume = 3.14 * altura * pow(raio,2);

    printf("\nVolume total da caixa d'�gua �: %.2f litros!\n", volume);

    return 0;
}
