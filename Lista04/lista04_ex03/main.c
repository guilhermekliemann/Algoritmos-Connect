#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 3, vetA[tam], vetB[tam];

    printf("\nPreenche vetor A:\n");
    for(int i=0; i<tam; i++) {
        printf("Digite o %d número: ", i+1);
        scanf("%d", &vetA[i]);
        vetB[i] = vetA[i] * 2;
    }

    printf("\nImprime vetor B:");
    for(int i=0; i<tam; i++) {
        printf("\nvetB[%d] = %d", i, vetB[i]);
    }
    printf("\n");

    return 0;
}
