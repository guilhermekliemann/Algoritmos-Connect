#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n[3], total;

    for(int i=0; i<3; i++) {
        printf("\nDigite o %d� n�mero: ", i+1);
        scanf("%d", &n[i]);
    }

    total = n[0] * n[1] * n[2];

    printf("\nResultado da multiplica��o dos tr�s n�meros � de: %d\n", total);

    return 0;
}
