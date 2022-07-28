#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 20, vet[tam], opcao1 = 0, opcao2 = 0, opcao3 = 0;

    for(int i=0; i<tam; i++) {
        printf("\nDigite o %dº número: ", i+1);
        scanf("%d", &vet[i]);

        if(vet[i] >= 0 && vet[i] <= 100) {
            opcao1 += 1;
        } else if(vet[i] >= 101 && vet[i] <= 200) {
            opcao2 += 1;
        } else {
            opcao3 += 1;
        }
    }

    printf("\nEntre 0 a 100: %d\nEntre 101 a 200: %d\nAcima de 200: %d\n", opcao1, opcao2, opcao3);

    return 0;
}
