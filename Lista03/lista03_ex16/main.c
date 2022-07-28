#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int qtdProdutos;
    float valor, valorFinal;

    printf("\nQuantos produtos o cliente comprou? ");
    scanf("%d", &qtdProdutos);

    for(int i=0; i<qtdProdutos; i++) {
        printf("\nDigite o valor do %dº produto: ", i+1);
        scanf("%f", &valor);
        valorFinal += valor;
    }

    printf("\nValor final da compra: R$ %.2f\n", valorFinal);

    return 0;
}
