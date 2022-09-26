#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[10];

    for(int i=0; i<10; i++) {
        printf("Digite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);

        if(vet[i] < 0) {
            vet[i] = 0;
        }
    }

    for(int i=0; i<10; i++) {
        printf("\nvetor[%d] = %d", i, vet[i]);
    }

    return 0;
}
