#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int sanduiche;
    float queijo = 50, presunto = 50, hamburguer = 100, pesoTotal;

    printf("\nQual a quantidade de sanduiches que você deseja fazer? ");
    scanf("%d", &sanduiche);

    queijo = sanduiche * queijo * 2;
    presunto = sanduiche * presunto;
    hamburguer = sanduiche * hamburguer;

    printf("\nQuantidade em gramas necessaria para comprar:\nQueijo: %.0f g\nPresunto: %.0f g\nHamburguer: %.0f g\n", queijo, presunto, hamburguer);

    return 0;
}
