#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b, resultado;

    printf("\nDigite o valor de A: ");
    scanf("%d", &a);

    printf("\nDigite o valor de B: ");
    scanf("%d", &b);

    if(a == b) {
        resultado = a + b;
        printf("\nNúmeros iguais, resultado da somatória: %d\n", resultado);
    } else {
        resultado = a * b;
        printf("\nNúmero diferentes, resultado da multiplicação: %d\n", resultado);
    }

    return 0;
}
