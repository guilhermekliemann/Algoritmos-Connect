#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int cod;
    float salario, aumento;

    printf("\nDigite o c�digo do cargo do funcion�rio: ");
    scanf("%d", &cod);

    if(cod == 101) {
        printf("\nDigite o sal�rio do cargo de Gerente: ");
        scanf("%f", &salario);
        aumento = salario * 1.10;
        printf("\nC�digo: %d\nCargo: Gerente\nSal�rio normal: R$ %.2f\nSal�rio com aumento: R$ %.2f\n", cod, salario, aumento);
    } else if(cod == 102) {
        printf("\nDigite o sal�rio do cargo de Engenheiro: ");
        scanf("%f", &salario);
        aumento = salario * 1.20;
        printf("\nC�digo: %d\nCargo: Engenheiro\nSal�rio normal: R$ %.2f\nSal�rio com aumento: R$ %.2f\n", cod, salario, aumento);
    } else if(cod == 103) {
        printf("\nDigite o sal�rio do cargo de T�cnico: ");
        scanf("%f", &salario);
        aumento = salario * 1.30;
        printf("\nC�digo: %d\nCargo: T�cnico\nSal�rio normal: R$ %.2f\nSal�rio com aumento: R$ %.2f\n", cod, salario, aumento);
    } else {
        printf("\nDigite o sal�rio do cargo [n�o identificado]: ");
        scanf("%f", &salario);
        aumento = salario * 1.40;
        printf("\nC�digo: %d\nCargo: [n�o identificado]\nSal�rio normal: R$ %.2f\nSal�rio com aumento: R$ %.2f\n", cod, salario, aumento);
    }

    return 0;
}
