#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor, n100, n50, n10, n5, n1;

    printf("\nDigite um valor inteiro em reais: ");
    scanf("%d", &valor);

    n100 = valor / 100;
    valor = valor - n100 * 100;

    n50 = valor / 50;
    valor = valor - n50 * 50;

    n10 = valor / 10;
    valor = valor - n10 * 10;

    n5 = valor / 5;
    valor = valor - n5 * 5;

    n1 = valor;

    printf("\nNotas de R$ 100,00: %d", n100);
    printf("\nNotas de R$ 50,00: %d", n50);
    printf("\nNotas de R$ 10,00: %d", n10);
    printf("\nNotas de R$ 5,00: %d", n5);
    printf("\nNotas de R$ 1,00: %d", n1);

    return 0;
}
