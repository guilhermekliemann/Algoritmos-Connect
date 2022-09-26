#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[5], maior = 0, menor = 9999999;
    float total;

    for(int i=0; i<5; i++) {
        printf("\nDigite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);

        total += vet[i];

        if(vet[i] > maior) {
            maior = vet[i];
        }
        if(vet[i] < menor) {
            menor = vet[i];
        }
    }

    for(int i=0; i<5; i++) {

    }

    printf("")

    return 0;
}
