#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &n1);

    printf("\nDigite o segundo número: ");
    scanf("%d", &n2);

    printf("\nDigite o terceiro número: ");
    scanf("%d", &n3);

    if(n1 == n2 || n2 == n3 || n3 == n1) {
        printf("\nOs números devem ser diferentes!");
    } else if(n1 > n2 && n2 > n3) {
        printf("\nOrdem decrescente: %d - %d - %d\n", n1, n2, n3);
    } else if(n1 < n2 && n2 < n3) {
        printf("\nOrdem decrescente: %d - %d - %d\n", n3, n2, n1);
    } else if(n2 > n3 && n3 > n1) {
        printf("\nOrdem decrescente: %d - %d - %d\n", n2, n3, n1);
    } else if(n1 > n3 && n3 > n2) {
        printf("\nOrdem decrescente: %d - %d - %d\n", n1, n3, n2);
    } else if(n3 > n1 && n1 > n2) {
        printf("\nOrdem decrescente: %d - %d - %d\n", n3, n1, n2);
    }

    return 0;
}
