#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salarioFuncionario, salarioMinimo = 1212.0, qtdSalarioMinimo;

    printf("\nQual o salário do funcionário: ");
    scanf("%f", &salarioFuncionario);

    qtdSalarioMinimo = salarioFuncionario / salarioMinimo;

    printf("\nSalário do funcionário: %.2f\nValor do salário mínimo: %.2f\nQuantidade de salário mínimo com base no salário do funcionário: %.2f\n",
           salarioFuncionario, salarioMinimo, qtdSalarioMinimo);

    return 0;
}
