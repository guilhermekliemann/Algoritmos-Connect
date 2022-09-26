#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[15], total;
    float media;

    for(int i=0; i<15; i++) {
        printf("\nDigite a %dº nota: ", i+1);
        scanf("%d", &vet[i]);
        total += vet[i];
    }

    media = total / 15.0;

    printf("\nMédia total das notas dos alunos: %.1f\n", media);

    return 0;
}
