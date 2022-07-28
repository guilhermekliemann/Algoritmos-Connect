#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int cod;
    float salario, aumento;

    printf("\nDigite o código do cargo do funcionário: ");
    scanf("%d", &cod);

    if(cod == 101) {
        printf("\nDigite o salário do cargo de Gerente: ");
        scanf("%f", &salario);
        aumento = salario * 1.10;
        printf("\nCódigo: %d\nCargo: Gerente\nSalário normal: R$ %.2f\nSalário com aumento: R$ %.2f\n", cod, salario, aumento);
    } else if(cod == 102) {
        printf("\nDigite o salário do cargo de Engenheiro: ");
        scanf("%f", &salario);
        aumento = salario * 1.20;
        printf("\nCódigo: %d\nCargo: Engenheiro\nSalário normal: R$ %.2f\nSalário com aumento: R$ %.2f\n", cod, salario, aumento);
    } else if(cod == 103) {
        printf("\nDigite o salário do cargo de Técnico: ");
        scanf("%f", &salario);
        aumento = salario * 1.30;
        printf("\nCódigo: %d\nCargo: Técnico\nSalário normal: R$ %.2f\nSalário com aumento: R$ %.2f\n", cod, salario, aumento);
    } else {
        printf("\nDigite o salário do cargo [não identificado]: ");
        scanf("%f", &salario);
        aumento = salario * 1.40;
        printf("\nCódigo: %d\nCargo: [não identificado]\nSalário normal: R$ %.2f\nSalário com aumento: R$ %.2f\n", cod, salario, aumento);
    }

    return 0;
}
