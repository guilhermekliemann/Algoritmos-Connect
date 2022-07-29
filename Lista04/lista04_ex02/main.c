#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tam = 20, vet[tam], par = 0, impar = 0, maior50 = 0, menor7 = 0;

    for(int i=1; i<=tam; i++) {
        printf("\nDigite o %d número(0-50): ", i);
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }

        if(vet[i] > 50) {
            maior50++;
        } else if(vet[i] < 7) {
            menor7++;
        }
    }

    printf("\nNúmeros pares: %d\nNúmeros ímpares: %d\nNúmeros maiores que 50: %d\nNúmeros menores que 7: %d\n", par, impar, maior50, menor7);

    return 0;
}
