#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a[6] = {1, 0, 5, -2, -5, 7};
    int soma;

    soma = a[0] + a[1] + a[5];
    printf("\nSoma dos elementos [%d] + [%d] + [%d] = %d\n\n", a[0], a[1], a[5], soma);

    a[4] = 100;

    for(int i=0; i<6; i++) {
        printf("a[%d]\n", a[i]);
    }

    return 0;
}
