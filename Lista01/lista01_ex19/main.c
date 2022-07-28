#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int qtdFrangos;
    float anelChip, anelAlimento, gastoTotal;

    printf("\nQuantos frangos tem na granja? ");
    scanf("%d", &qtdFrangos);

    anelChip = qtdFrangos * 4;
    anelAlimento = qtdFrangos * (3.50 + 3.50);
    gastoTotal = anelChip + anelAlimento;

    printf("\nGasto total da granja: R$ %.2f\n", gastoTotal);

    return 0;
}
