#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salarioInicial, salarioAumento, salarioFinal;

    printf("\nQual o salário inicial do funcionário: ");
    scanf("%f", &salarioInicial);

    salarioAumento = salarioInicial * 1.15;
    salarioFinal = salarioAumento * 0.8;

    printf("\nSalário inicial: R$ %.2f \nSalário com aumento: R$ %.2f \nSalario final com desconto: R$ %.2f \n",
           salarioInicial, salarioAumento, salarioFinal);

    return 0;
}
