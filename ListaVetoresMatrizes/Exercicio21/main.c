#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 5;
    int A[tam], B[tam];

    for(int i=0; i<tam; i++) {
        printf("Digite um valor para A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\n\n");

    for(int i=0; i<tam; i++) {
        printf("Digite um valor para B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    printf("\n\n");

    for(int i=0; i<tam; i++) {
        printf("A[%d] - B[%d] = %d\n", i, i, A[i] - B[i]);
    }

    return 0;
}
