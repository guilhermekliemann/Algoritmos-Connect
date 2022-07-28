#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float pequena = 10, media = 12, grande = 15, valorTotal;
    int qtdPequena, qtdMedia, qtdGrande;

    printf("\nDigite a quantidade de camisetas pequenas: ");
    scanf("%d", &qtdPequena);
    printf("\nDigite a quantidade de camisetas médias: ");
    scanf("%d", &qtdMedia);
    printf("\nDigite a quantidade de camisetas grandes: ");
    scanf("%d", &qtdGrande);

    valorTotal = (qtdPequena * pequena) + (qtdMedia * media) + (qtdGrande * grande);
    printf("\nValor total da venda foi de: R$ %.2f", valorTotal);

    return 0;
}
