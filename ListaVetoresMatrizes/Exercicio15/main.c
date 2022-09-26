#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 10;
    int vet[tam];

    for(int i=0; i<tam; i++) {
        printf("Digite um valor para vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    for(int i=0; i<tam; i++) { //posicao inicial do vetor
        for(int j=i+1; j<tam; j++) { // compara com a segunda posicao...
            if(vet[j] == vet[i]) { // verfica se o valor de vet[i] é igual a vet[j]
                for(int k=j; k<tam; k++) {
                    vet[k] = vet[k+1];
                }
                tam--;
            }
        }
    }

    printf("\n");
    for(int i=0; i<tam; i++) {
        printf("vetor[%d] = %d\n", i, vet[i]);
    }

    return 0;
}
