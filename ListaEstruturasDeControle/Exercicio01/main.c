#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[3];
    int maior = 0, menor = 9999999;

    for(int i=0; i<3; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vet[i]);

        if(vet[i] > maior) {
            maior = vet[i];
        }

        if(vet[i] < menor) {
            menor = vet[i];
        }
    }

    printf("\nO maior número digitado é %d!\n", maior);
    printf("\nO menor número digitado é %d!\n", menor);

    return 0;
}
