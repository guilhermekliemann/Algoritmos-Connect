#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[6];

    for(int i=0; i<6; i++) {
        int aux;
        printf("\nDigite um número PAR para vetor[%d]: ", i);
        scanf("%d", &aux);

        if(aux % 2 == 0) {
            vet[i] = aux;
        } else {
            printf("\nNúmero ÍMPAR inválido!\n");
            i--;
        }
    }

    for(int i=5; i>=0; i--) {
        printf("\nvetor[%d] = %d", i, vet[i]);
    }

    printf("\n");

    return 0;
}
