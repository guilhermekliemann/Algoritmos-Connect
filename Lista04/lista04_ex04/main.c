#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 10;
    int vetA[tam], vetB[tam], vetC[tam];

    for(int i=0; i<tam; i++) {
        printf("Digite o valor para o vetA[%d]: ", i);
        scanf("%d", &vetA[i]);
    }

    printf("\n");
    for(int i=0; i<tam; i++) {
        printf("Digite o valor para o vetB[%d]: ", i);
        scanf("%d", &vetB[i]);
    }

    printf("\n");
    for(int i=0; i<tam; i++) {
        vetC[i] = vetA[i] + vetB[i];
        printf("vetA[%d] + vetB[%d] = vetC[%d] \n", vetA[i], vetB[i], vetC[i]);
    }

    return 0;
}
