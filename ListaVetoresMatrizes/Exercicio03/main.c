#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[10], quadrado[10];

    for(int i=0; i<10; i++) {
        printf("\nDigite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);
        quadrado[i] = vet[i] * vet[i];
    }

    printf("\n");

    for(int i=0; i<10; i++) {
        printf("vetor[%d] ao quadrado = [%d]\n", i, quadrado[i]);
    }

    return 0;
}
