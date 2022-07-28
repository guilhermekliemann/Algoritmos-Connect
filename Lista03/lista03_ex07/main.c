#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 20, vet[tam], soma = 0;

    for(int i=0; i<tam; i++) {
        printf("\nDigite a %dº idade: ", i+1);
        scanf("%d", &vet[i]);
        if(vet[i] > 18) {
            soma += 1;
        }
    }

    printf("\nQuantidade de pessoas que são maiores de idade: %d\n", soma);

    return 0;
}
