#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int cod, qtd;
    float valor;

    printf("\nCachorro quente (1)");
    printf("\nBauru (2)");
    printf("\nMisto quente (3)");
    printf("\nHamburguer (4)");
    printf("\nCheeseburger (5)");
    printf("\nRefrigerante (6)\n");

    printf("\nEscolha um dos códigos acima: ");
    scanf("%d", &cod);

    printf("\nDigite a quantidade escolhida: ");
    scanf("%d", &qtd);

    if(cod == 1) {
        valor = qtd * 11;
        printf("\nValor a ser pago: R$ %.2f\n", valor);
    } else if(cod == 2) {
        valor = qtd * 8.50;
        printf("\nValor a ser pago: R$ %.2f\n", valor);
    } else if(cod == 3) {
        valor = qtd * 8;
        printf("\nValor a ser pago: R$ %.2f\n", valor);
    } else if(cod == 4) {
        valor = qtd * 9;
        printf("\nValor a ser pago: R$ %.2f\n", valor);
    } else if(cod == 5) {
        valor = qtd * 10;
        printf("\nValor a ser pago: R$ %.2f\n", valor);
    } else if(cod == 6) {
        valor = qtd * 4.50;
        printf("\nValor a ser pago: R$ %.2f\n", valor);
    } else {
        printf("\nCódigo inválido!\n");
    }

    return 0;
}
