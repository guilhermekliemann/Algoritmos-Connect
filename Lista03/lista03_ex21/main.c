#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int mesas = 50, fumantes = 0, nfumantes = 0, opcao;

    for(int i=0; i<mesas; i++) {
        printf("\nDigite se a mesa � para fumantes(0) ou n�o fumantes(1):");
        scanf("%d", &opcao);

        if(opcao == 0) {
            fumantes++;
        } else if(opcao == 1) {
            nfumantes++;
        } else {
            printf("\nOp��o inv�lida!\n");
            i--;
        }
    }

    printf("\nMesas reservadas para fumantes: %d\nMesas reservadas para n�o fumantes: %d\n", fumantes, nfumantes);

    return 0;
}
