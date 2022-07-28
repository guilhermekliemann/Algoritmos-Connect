#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario = 1200, c1 = 200, c2 = 120, saldoFinal;

    saldoFinal = salario - ((c1 * 0.98) + (c2 * 0.98));

    printf("\nSaldo final: %.2f\n", saldoFinal);

    return 0;
}
