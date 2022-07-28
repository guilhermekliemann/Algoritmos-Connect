#include <stdio.h>
#include <stdlib.h>

int main()
{

    int qtdCavalos, qtdFerraduras;

    printf("\nQuantos cavalos voce tem? ");
    scanf("%d", &qtdCavalos);

    qtdFerraduras = qtdCavalos * 4;

    printf("Voce ira precisar comprar %d ferraduras!\n", qtdFerraduras);

    return 0;
}
