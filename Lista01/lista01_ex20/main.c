#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int blusas, novelos = 3;
    float valorTotal;
    // 1 blusa = 3 novelos, 1 novelo = 10 reais


    printf("\nQuantas blusas você deseja fazer? ");
    scanf("%d", &blusas);

    valorTotal = (blusas * novelos) * 10;

    printf("\nO valor total será: %.2f\n", valorTotal);

    return 0;
}
