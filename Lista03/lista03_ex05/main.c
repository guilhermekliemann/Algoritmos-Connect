#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 10, vet[tam], soma = 0;

    for(int i=0; i<tam; i++) {
        printf("\nDigite o %d� n�mero: ", i+1);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    printf("\nSoma total dos n�meros: %d\n", soma);

    return 0;
}
