#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float area, lado;

    printf("\nQual o tamanho dos lados do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("\n¡rea do quadrado: %.2f\n", area);

    return 0;
}
