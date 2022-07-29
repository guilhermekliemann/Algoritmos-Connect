#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetA[10], somaMenor15 = 0, igual15 = 0, maior15 = 0;
    float mediaMaior15;

    for(int i=0; i<10; i++) {
        printf("\nDigite o valor do vetA[%d]: ", i);
        scanf("%d", &vetA[i]);

        if(vetA[i] < 15) {
            somaMenor15 += vetA[i];
        }
        if(vetA[i] == 15) {
            igual15++;
        }
        if(vetA[i] > 15) {
            maior15++;
            mediaMaior15 += vetA[i];
        }
    }

    printf("\nSoma dos elementos menores que 15: %d\nQuantidade de elementos que são iguais a 15: %d\nMédia dos elementos que são maiores que 15: %.2f\n", somaMenor15, igual15, mediaMaior15 / maior15);

    return 0;
}
