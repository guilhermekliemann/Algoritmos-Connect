#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int R[5], A[10], pontos = 0;

    printf("\nDigite o gabarito da LOTO:\n");
    for(int i=0; i<5; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &R[i]);
    }

    printf("\nDigite os números apostados:\n");
    for(int i=0; i<10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &A[i]);
    }

    for(int i=0; i<5; i++) {
        for(int j=0; j<10; j++) {
            if(R[i] == A[j]) {
                pontos += 1;
            }
        }
    }

    printf("\nTotal de pontos que o apostador fez: %d\n", pontos);

    return 0;
}
