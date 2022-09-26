#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[6];

    for(int i=0; i<6; i++) {
        printf("\nDigite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\n");

    for(int i=0; i<6; i++) {
        printf("vetor[%d] = %d\n", i, vet[i]);
    }

    return 0;
}
