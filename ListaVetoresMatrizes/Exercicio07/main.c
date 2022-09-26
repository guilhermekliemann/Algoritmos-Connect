#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[10], maior = 0, menor = 99999999, posicaoMenor = 0, posicaoMaior = 0;

    for(int i=0; i<10; i++) {
        printf("Digite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);

        if(vet[i] > maior) {
            maior = vet[i];
            posicaoMaior = i;
        }

        if(vet[i] < menor) {
            menor = vet[i];
            posicaoMenor = i;
        }
    }

    printf("\n");

    for(int i=0; i< 10; i++) {
        printf("vetor[%d] = %d\n", i, vet[i]);
    }

    printf("\nMaior elemento do vetor é %d, e está na posição [%d]\nMenor elemento do vetor é %d, e está na posição [%d]\n", maior, posicaoMaior, menor, posicaoMenor);

    return 0;
}
