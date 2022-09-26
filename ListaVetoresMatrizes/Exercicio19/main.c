#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[50];

    for(int i=0; i<50; i++) {
        vet[i] = (i + 5 * i) % (i + 1);
        printf("vetor[%d] = %d\n", i, vet[i]);
    }

    return 0;
}
