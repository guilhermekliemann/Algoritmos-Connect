#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[5], maior = 0, menor = 9999999, posMaior, posMenor;

    for(int i=0; i<5; i++) {
        printf("Digite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);

        if(vet[i] > maior) {
            maior = vet[i];
            posMaior = i;
        }

        if(vet[i] < menor) {
            menor = vet[i];
            posMenor = i;
        }
    }

    printf("\nMaior número está na posição [%d]\nMenor número está na posição [%d]\n", posMaior, posMenor);

    return 0;
}
