#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salarioFixo, venda, comissao, salarioFinal;

    printf("\nQual o salário fixo do funcionário? ");
    scanf("%f", &salarioFixo);

    printf("\nQuantos reais em venda o funcionário fez no mês? ");
    scanf("%f", &venda);

    comissao = venda * 0.04;
    salarioFinal = salarioFixo + comissao;

    printf("\nTotal de comissão do funcionário: R$ %.2f\nSalário final do funcionário: R$ %.2f\n", comissao, salarioFinal);

    return 0;
}
