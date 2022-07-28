#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 20, vet[tam], soma = 0;

    for(int i=0; i<tam; i++) {
        printf("\nDigite a %dº idade: ", i+1);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    printf("\nMédia de idade de 20 pessoas: %d anos!\n", soma / 20);

    return 0;
}
