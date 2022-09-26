#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[10], par = 0;

    for(int i=0; i<10; i++) {
        printf("\nDigite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0) {
            par++;
        }
    }

    printf("\nExistem %d números pares no vetor!\n", par);

    return 0;
}
