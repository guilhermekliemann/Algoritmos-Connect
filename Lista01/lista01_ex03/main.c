#include <stdio.h>
#include <stdlib.h>

int main()
{

    int qtdPaes, qtdBroas;
    float valorPaes, valorBroas, paesVendidos, broasVendidas, totalVenda, poupanca;
    valorPaes = 0.12;
    valorBroas = 1.50;

    printf("\nQual a quantidade de paes vendidos hoje: ");
    scanf("%d", &qtdPaes);

    printf("\nQual a quantidade de broas vendidas hoje: ");
    scanf("%d", &qtdBroas);

    paesVendidos = qtdPaes * valorPaes;
    broasVendidas = qtdBroas * valorBroas;

    totalVenda = paesVendidos + broasVendidas;

    printf("\nO valor total da venda no dia de hoje foi de: R$ %f \n", totalVenda);

    poupanca = (totalVenda * 0.10);

    printf("\n10 porcento do valor arrecadado foi guardado na poupanca: R$ %f \n", poupanca);

    return 0;
}
