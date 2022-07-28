#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 20, vet[tam], cont = 0;

    for(int i=0; i<tam; i++) {
        printf("\nDigite o %dº número: ", i+1);
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0) {
            cont += 1;
        }
    }

    printf("\nQuantidade de números pares: %d\n", cont);

    return 0;
}
