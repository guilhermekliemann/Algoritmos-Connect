#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[10], maior = 0, menor = 99999999;

    for(int i=0; i<10; i++) {
        printf("\nDigite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);

        if(vet[i] > maior) {
            maior = vet[i];
        }

        if(vet[i] < menor) {
            menor = vet[i];
        }
    }

    printf("\nMaior elemento do vetor : %d\nMenor elemento do vetor: %d\n", maior, menor);

    return 0;
}
