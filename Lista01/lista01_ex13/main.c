#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, centena, dezena, unidade;

    printf("\nDigite um número de 3 digitos: ");
    scanf("%d", &num);

    centena = num / 100;
    dezena = num % 100;
    unidade = dezena % 10;
    dezena = dezena / 10;

    printf("\nCENTENA = %d \nDEZENA = %d \nUNIDADE = %d\n", centena, dezena, unidade);

    return 0;
}
