#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float total, felipe;
    int carlos, andre;

    printf("\nQual foi o valor total da conta: ");
    scanf("%f", &total);

    carlos = andre = total / 3;
    felipe = total - andre - carlos;

    printf("\nUma conta de R$ %.2f resulta em R$ %d,00 para Carlos, R$ %d,00 para André e R$ %.2f para Felipe!\n",
            total, carlos, andre, felipe);

    return 0;
}
