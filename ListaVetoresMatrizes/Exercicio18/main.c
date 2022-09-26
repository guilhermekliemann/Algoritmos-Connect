#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[10], x, qtd = 0;

    for(int i=0; i<10; i++) {
        printf("Digite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\nDigite um valor para (x): ");
    scanf("%d", &x);
    printf("\n");

    for(int i=0; i<10; i++) {
        if(vet[i] % x == 0) {
            printf("vetor[%d] = %d\n", i, vet[i]);
            qtd++;
        }
    }

    printf("\nQuantidade de múltiplos de x: %d\n", qtd);

    return 0;
}
