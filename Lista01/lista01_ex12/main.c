#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salarioInicial, salarioAumento, salarioFinal;

    printf("\nQual o sal�rio inicial do funcion�rio: ");
    scanf("%f", &salarioInicial);

    salarioAumento = salarioInicial * 1.15;
    salarioFinal = salarioAumento * 0.8;

    printf("\nSal�rio inicial: R$ %.2f \nSal�rio com aumento: R$ %.2f \nSalario final com desconto: R$ %.2f \n",
           salarioInicial, salarioAumento, salarioFinal);

    return 0;
}
