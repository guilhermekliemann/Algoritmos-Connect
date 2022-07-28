#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int x,y,area;

    printf("\nDigite o primeiro lado do retangulo: ");
    scanf("%d", &x);

    printf("\nDigite o segundo lado do retangulo: ");
    scanf("%d", &y);

    area = x * y;

    printf("\nTamanho da area do retangulo: %d metros quadrados!\n", area);

    return 0;
}
