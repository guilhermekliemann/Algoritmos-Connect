#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int D1[10], D2[10], cont = 0;

    printf("\nPreenche vetor:\n");
    for(int i=0; i<10; i++) {
        printf("Digite o valor de D1[%d]: ", i);
        scanf("%d", &D1[i]);
    }

    for(int i=0; i<10; i++) {
        if(D1[i] > 0) {
            D2[cont] = D1[i];
            cont++;
        }
    }

    printf("\nImprime vetor sem números negativos ou nulos:\n");
    for(int i=0; i<cont; i++) {
        printf("D2[%d] = %d\n", i, D2[i]);
    }

    return 0;
}
