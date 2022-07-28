#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int dias, meses, total;

    printf("\nDigite o dia de hoje: ");
    scanf("%d", &dias);
    printf("\nDigite o mês atual: ");
    scanf("%d", &meses);

    total = meses * 30 + dias;
    printf("\nTotal de dias que se passaram durante o ano é de: %d \n", total);

    return 0;
}
