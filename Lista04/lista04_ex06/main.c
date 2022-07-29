#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetA[10], maior = 0, menor = 999999, posicaoMaior = 0, posicaoMenor = 0;

    for(int i=0; i<10; i++) {
        printf("Digite a idade para o vetA[%d]: ", i);
        scanf("%d", &vetA[i]);

        if(vetA[i] > maior) {
            maior = vetA[i];
            posicaoMaior = i;
        }
        if(vetA[i] < menor) {
            menor = vetA[i];
            posicaoMenor = i;
        }
    }

    printf("\nA maior idade está na posição %d do vetA, com idade de %d anos!\nA menor idade está na posição %d do vetA, com idade de %d anos!\n", posicaoMaior, maior, posicaoMenor, menor);

    return 0;
}
