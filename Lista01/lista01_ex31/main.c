#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float pesoNormal, pesoAcima, pesoAbaixo;

    printf("\nQual o seu peso normal? ");
    scanf("%f", &pesoNormal);

    pesoAcima = pesoNormal * 1.15;
    pesoAbaixo = pesoNormal * 0.8;

    printf("\nPeso se a pessoa engordar 15 porcento: %.2f kg\nPeso se a pessoa emagrecer 20 porcento: %.2f kg\n", pesoAcima, pesoAbaixo);

    return 0;
}
