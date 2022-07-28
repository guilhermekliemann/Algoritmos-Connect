#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float ladoA, ladoB, hipotenuza;

    printf("\nDigite o tamanho do lado A: ");
    scanf("%f", &ladoA);

    printf("\nDigite o tamanho do lado B: ");
    scanf("%f", &ladoB);

    hipotenuza = (ladoA * 2) + (ladoB * 2);

    printf("\nValor da hipotenuza do triângulo: %.2f\n", hipotenuza);

    return 0;
}
