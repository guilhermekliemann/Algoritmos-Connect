#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int R[5], S[10], X[5], cont;

    printf("\nPreenche vetor R[]:\n");
    for(int i=0; i<5; i++) {
        printf("Digite o valor para R[%d]: ", i);
        scanf("%d", &R[i]);
    }

    printf("\nPreenche vetor S[]:\n");
    for(int i=0; i<10; i++) {
        printf("Digite o valor para S[%d]: ", i);
        scanf("%d", &S[i]);
    }

    printf("\nImprime vetor X[]:\n");
    for(int i=0; i<5; i++) {
        for(int j=0; j<10; j++) {
            if(R[i] == S[j]) {
                X[i] = R[i];
                printf("X[%d] = %d\n", i, X[i]);
            }
        }
    }

    return 0;
}
