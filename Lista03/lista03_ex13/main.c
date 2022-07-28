#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, soma = 0;

    do {
        printf("\nDigite um número positivo: ");
        scanf("%d", &n);

        if(n > 0) {
            soma += n;
            printf("\nSomatória total: %d\n", soma);
        } else {
            printf("\nNúmero negativo, programa encerrado!\n");
        }

    } while(n >= 0);

    return 0;
}
