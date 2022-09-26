#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float vet[10], soma = 0;
    int qtdNegativos = 0;

    for(int i=0; i<10; i++) {
        printf("\nDigite um valor para vetor[%d]: ", i);
        scanf("%f", &vet[i]);

        if(vet[i] >= 0) {
            soma += vet[i];
        } else {
            qtdNegativos++;
        }
    }

    printf("\nSoma dos números positivos: %.1f\nQuantidade de números negativos: %d\n", soma, qtdNegativos);

    return 0;
}
