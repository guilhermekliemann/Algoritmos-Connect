#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float precoInicial, precoFinal;

    printf("\nDigite o valor inicial do produto: ");
    scanf("%f", &precoInicial);

    precoFinal = precoInicial * 0.9;

    printf("\nPreço final do produto: R$ %.2f\n", precoFinal);

    return 0;
}
