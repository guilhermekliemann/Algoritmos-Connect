#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int TAM = 10;
    int vet1[TAM], vet2[TAM], vet3[TAM];

    for(int i=0; i<TAM; i++) {
        printf("Digite o valor para o vet1[%d]: ", i);
        scanf("%d", &vet1[i]);
    }

    printf("\n");
    for(int i=0; i<TAM; i++) {
        printf("Digite o valor para o vet2[%d]: ", i);
        scanf("%d", &vet2[i]);
    }

    printf("\n");
    for(int i=0; i<TAM; i++) {
        vet3[i] = vet1[i] + vet2[i];
        printf("vet1[%d] + vet2[%d] = vet3[%d] \n", vet1[i], vet2[i], vet3[i]);
    }

    return 0;
}
