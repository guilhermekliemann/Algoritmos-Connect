#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[6];

    for(int i=0; i<6; i++) {
        printf("\nDigite um número para vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    for(int i=5; i>=0; i--) {
        printf("\nvetor[%d] = %d", i, vet[i]);
    }

    printf("\n");

    return 0;
}
