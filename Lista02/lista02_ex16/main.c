#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float saldoMedio, credito;

    printf("\nDigite o saldo m�dio no �ltimo ano: ");
    scanf("%f", &saldoMedio);

    if(saldoMedio > 0 && saldoMedio <= 200) {
        printf("\nNenhum cr�dito!\n");
    } else if(saldoMedio >= 201 && saldoMedio <= 400) {
        credito = saldoMedio * 0.2;
        printf("\nSaldo m�dio: R$ %.2f\nValor do cr�dito: R$ %.2f\n", saldoMedio, credito);
    } else if(saldoMedio >= 401 && saldoMedio <= 600) {
        credito = saldoMedio * 0.3;
        printf("\nSaldo m�dio: R$ %.2f\nValor do cr�dito: R$ %.2f\n", saldoMedio, credito);
    } else {
        credito = saldoMedio * 0.4;
        printf("\nSaldo m�dio: R$ %.2f\nValor do cr�dito: R$ %.2f\n", saldoMedio, credito);
    }

    return 0;
}
