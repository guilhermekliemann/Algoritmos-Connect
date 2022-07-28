#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float baseMenor, baseMaior, altura, areaTrapezio;

    printf("\nDigite o tamanho da base menor: ");
    scanf("%f", &baseMenor);

    printf("\nDigite o tamanho da base maior: ");
    scanf("%f", &baseMaior);

    printf("\nDigite a altura: ");
    scanf("%f", &altura);

    areaTrapezio = ((baseMaior + baseMenor) * altura) / 2;

    printf("\nÁrea do trapézio: %.2f\n", areaTrapezio);

    return 0;
}
