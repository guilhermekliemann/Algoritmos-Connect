#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 10;

    int vet[10], impar[tam];

    for(int i=0, j=0; i<10; i++) {
        printf("Digite um valor entre 0 e 50: ");
        scanf("%d", &vet[i]);

        if(vet[i] % 2 != 0) {
            impar[j] = vet[i];
            tam--;
            j++;
        }
    }

    printf("\n");

    for(int i=0, j=0; i<10 || j<tam; i++, j++) {
        if(j < tam) {
            printf("vetor[%d] = %d     impar[%d] = %d\n", i, vet[i], j, impar[j]);
        } else {
            printf("vetor[%d] = %d\n", i, vet[i]);
        }
    }

    return 0;
}
