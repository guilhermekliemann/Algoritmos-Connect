#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salarioFixo, venda, comissao, salarioFinal;

    printf("\nQual o sal�rio fixo do funcion�rio? ");
    scanf("%f", &salarioFixo);

    printf("\nQuantos reais em venda o funcion�rio fez no m�s? ");
    scanf("%f", &venda);

    comissao = venda * 0.04;
    salarioFinal = salarioFixo + comissao;

    printf("\nTotal de comiss�o do funcion�rio: R$ %.2f\nSal�rio final do funcion�rio: R$ %.2f\n", comissao, salarioFinal);

    return 0;
}
