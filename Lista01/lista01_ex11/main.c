#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qtdDias, dias, meses, anos;

    printf("\nQuantos dias estamos sem acidentes? ");
    scanf("%d", &qtdDias);

    anos = qtdDias / 365;
    meses = (qtdDias % 365) / 30;
    dias = (qtdDias % 365) % 30;

    printf("\nEstamos à %d anos, %d meses e %d dias sem acidentes! \n", anos, meses, dias);

    return 0;
}
