#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int pagamento;
    float valor;

    printf("\nPagamento no � vista dinheiro, digite: (1)");
    printf("\nPagamento no � vista cheque, digite: (2)");
    printf("\nPagamento no � vista no cart�o de cr�dito, digite: (3)");
    printf("\nPagamento em duas vezes, pre�o normal sem juros, digite: (4)");
    printf("\nPagamento em duas vezes, pre�o normal com juros de 10 porcento, digite: (5)\n");
    printf("\nDIGITE UMA DAS OP��ES: ");
    scanf("%d", &pagamento);

    printf("\nDIGITE O VALOR DO PRODUTO: ");
    scanf("%f", &valor);

    if(pagamento == 1) {
        valor = valor * 0.9;
        printf("\nValor do produto com 10 porcento de desconto ap�s pagamento no dinheiro � vista: R$ %.2f\n", valor);
    } else if(pagamento == 2) {
        valor = valor * 0.9;
        printf("\nValor do produto com 10 porcento de desconto ap�s pagamento no cheque � vista: R$ %.2f\n", valor);
    } else if(pagamento == 3) {
        valor = valor * 0.85;
        printf("\nValor do produto com 15 porcento de desconto ap�s pagamento no cr�dito � vista: R$ %.2f\n", valor);
    } else if(pagamento == 4) {
        valor = valor / 2;
        printf("\nValor do produto parcelado em 2x de R$ %.2f sem juros\n", valor);
    } else if(pagamento == 5) {
        valor = (valor / 2) * 1.10;
        printf("\nValor do produto parcelado em 2x de R$ %.2f com juros de 10 porcento\n", valor);
    } else {
        printf("\nOp��o inv�lida\n");
    }

    return 0;
}
