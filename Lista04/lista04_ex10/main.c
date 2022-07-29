#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 10, vetor[tam], aux = 0;

    printf("\nPreenche vetor com 10 números:\n");
    for(int i=0; i<tam; i++) {
        printf("Digite um número para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for(int i=1; i<tam; i++) {
        for(int j=0; j<tam-1; j++) {
            if(vetor[j] > vetor[j+1]) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for(int i=0; i<tam; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
