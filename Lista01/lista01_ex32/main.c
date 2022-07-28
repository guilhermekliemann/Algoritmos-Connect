#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float pesoEmKg, pesoEmGramas;

    printf("\nQual o seu peso em kg? ");
    scanf("%f", &pesoEmKg);

    pesoEmGramas = pesoEmKg * 1000;

    printf("\nPeso em gramas: %.2f g\n", pesoEmGramas);

    return 0;
}
