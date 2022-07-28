#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int ano;
    float valor, imposto;

    printf("\nDigite o ano do carro: ");
    scanf("%d", &ano);

    if(ano < 1990 && ano > 1886) {
        printf("\nDigite o valor de tabela do carro: ");
        scanf("%f", &valor);
        imposto = valor * 0.01;
        printf("\nAno do carro: %d\nValor de tabela do carro: %.2f\nImposto a ser pago: %.2f\n", ano, valor, imposto);
    } else if(ano > 1990 && ano < 2024) {
        printf("\nDigite o valor de tabela do carro: ");
        scanf("%f", &valor);
        imposto = valor * 0.015;
        printf("\nAno do carro: %d\nValor de tabela do carro: %.2f\nImposto a ser pago: %.2f\n", ano, valor, imposto);
    } else {
        printf("\nAno do carro inválido!\n");
    }

    return 0;
}
