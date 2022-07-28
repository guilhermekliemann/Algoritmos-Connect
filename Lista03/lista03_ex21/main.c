#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int mesas = 50, fumantes = 0, nfumantes = 0, opcao;

    for(int i=0; i<mesas; i++) {
        printf("\nDigite se a mesa é para fumantes(0) ou não fumantes(1):");
        scanf("%d", &opcao);

        if(opcao == 0) {
            fumantes++;
        } else if(opcao == 1) {
            nfumantes++;
        } else {
            printf("\nOpção inválida!\n");
            i--;
        }
    }

    printf("\nMesas reservadas para fumantes: %d\nMesas reservadas para não fumantes: %d\n", fumantes, nfumantes);

    return 0;
}
