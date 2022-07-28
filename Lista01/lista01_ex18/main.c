#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float horaNormal, horaExtra, salarioLiquido, salarioBruto;

    printf("\nQuantas horas voc� trabalhou hoje? ");
    scanf("%f", &horaNormal);

    horaExtra = horaNormal - 8;
    horaNormal = horaNormal - horaExtra;

    printf("\nHoras normais: %.0f\nHoras extra: %.0f\n", horaNormal, horaExtra);

    salarioBruto = (horaNormal * 10) + (horaExtra * 15);

    salarioLiquido = salarioBruto * 0.9;

    printf("\nSal�rio bruto: %.2f\nSal�rio l�quido: %.2f\n", salarioBruto, salarioLiquido);

    return 0;
}
