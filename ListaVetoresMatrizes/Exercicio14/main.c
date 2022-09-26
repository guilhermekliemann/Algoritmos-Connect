#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 10;
    int vet[tam], vetIgual[tam];

    for(int i=0; i<tam; i++) {
        printf("Digite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    int aux = 1, n = 0;

    for(int i=0; i<tam; i++) {
        for(int j=i+1; j<tam; j++) {
            if(vet[i] == vet[j]) {
                for(int k=0; k<n; k++) {
                    if(vet[i] == vetIgual[k]) {
                        aux = 0;
                    }
                }

                if(aux) {
                    vetIgual[n] = vet[i];
                    n++;
                }
            }
            aux = 1;
        }
    }

    printf("\nNúmeros repetidos:\n");
    for(int i=0; i<n; i++) {
        printf("[%d] ", vetIgual[i]);
    }

    return 0;
}
