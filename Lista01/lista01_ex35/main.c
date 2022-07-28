#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float area, diagonalMenor, diagonalMaior;

    printf("\nQual o tamanho da diagonal menor? ");
    scanf("%f", &diagonalMenor);

    printf("\nQual o tamanho da diagonal maior? ");
    scanf("%f", &diagonalMaior);

    area = (diagonalMaior * diagonalMenor) / 2;

    printf("\n¡rea do losango: %.2f\n", area);

    return 0;
}
