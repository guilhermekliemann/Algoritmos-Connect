#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 20, vet[tam], cont = 0;

    for(int i=0; i<tam; i++) {
        printf("\nDigite o %d� n�mero: ", i+1);
        scanf("%d", &vet[i]);

        if(vet[i] > 0 && vet[i] < 100) {
            cont += 1;
        }
    }

    printf("\nQuantidade de n�meros que est�o entre 0 e 100: %d\n", cont);

    return 0;
}
