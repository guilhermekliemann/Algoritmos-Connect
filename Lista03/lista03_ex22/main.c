#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int kmTotal = 0, kmAtual = 0;

    while(kmTotal <= 4000) {
        printf("\nDigite a quilometragem percorrida até a cidade atual: ");
        scanf("%d", &kmAtual);
        kmTotal += kmAtual;
    }

    printf("\nVocê atingiu 4000 quilometros de viagem! Programa encerrado!\n");

    return 0;
}
