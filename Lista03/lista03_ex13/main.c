#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, soma = 0;

    do {
        printf("\nDigite um n�mero positivo: ");
        scanf("%d", &n);

        if(n > 0) {
            soma += n;
            printf("\nSomat�ria total: %d\n", soma);
        } else {
            printf("\nN�mero negativo, programa encerrado!\n");
        }

    } while(n >= 0);

    return 0;
}
