#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salarioFuncionario, salarioMinimo = 1212.0, qtdSalarioMinimo;

    printf("\nQual o sal�rio do funcion�rio: ");
    scanf("%f", &salarioFuncionario);

    qtdSalarioMinimo = salarioFuncionario / salarioMinimo;

    printf("\nSal�rio do funcion�rio: %.2f\nValor do sal�rio m�nimo: %.2f\nQuantidade de sal�rio m�nimo com base no sal�rio do funcion�rio: %.2f\n",
           salarioFuncionario, salarioMinimo, qtdSalarioMinimo);

    return 0;
}
