#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int cont = 0;
    double acumulado, total, lido;

    do {
        printf("\nDigite o %d� n�mero: ", cont+1);
        scanf("%lf", &lido);

        if(lido >= 0) {
            total += lido;
            cont++;
        }
    } while(lido >= 0);

    printf("\nM�dia total: %.1lf\n", total / cont);

    return 0;
}
