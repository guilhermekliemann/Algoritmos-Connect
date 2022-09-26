#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[8], x, y, soma;

    for(int i=0; i<8; i++) {
        printf("\nDigite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\nDigite um valor para X (entre 0 e 8): ");
    scanf("%d", &x);

    printf("\nDigite um valor para Y (entre 0 e 8): ");
    scanf("%d", &y);

    soma = vet[x] + vet[y];

    printf("\nSoma das posições X e Y do vetor é: %d\n", soma);

    return 0;
}
