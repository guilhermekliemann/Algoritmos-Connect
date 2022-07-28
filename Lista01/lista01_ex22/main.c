#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int moeda_1, moeda_5, moeda_10, moeda_25, moeda_50, moeda_1_real;
    float totalGuardado;

    printf("\nQuantas moedas de 1 centavo você tem guardado? ");
    scanf("%d", &moeda_1);

    printf("\nQuantas moedas de 5 centavos você tem guardado? ");
    scanf("%d", &moeda_5);

    printf("\nQuantas moedas de 10 centavos você tem guardado? ");
    scanf("%d", &moeda_10);

    printf("\nQuantas moedas de 25 centavos você tem guardado? ");
    scanf("%d", &moeda_25);

    printf("\nQuantas moedas de 50 centavos você tem guardado? ");
    scanf("%d", &moeda_50);

    printf("\nQuantas moedas de 1 real você tem guardado? ");
    scanf("%d", &moeda_1_real);

    totalGuardado = (moeda_1/100.0) + (moeda_5/20.0) + (moeda_10/10.0) + (moeda_25/4.0) + (moeda_50/2.0) + moeda_1_real;

    printf("\nTotal guardado: R$ %.2f\n", totalGuardado);

    return 0;
}
