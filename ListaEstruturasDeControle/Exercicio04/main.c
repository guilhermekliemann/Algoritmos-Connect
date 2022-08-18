#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int log = 10, n, cont = 0;

    printf("\nDigite um valor para (n): ");
    scanf("%d", &n);

    do {
        n = n / log;
        cont++;
    } while(n % log == 0);

    printf("\nForam feitas %d divisões!\n", cont);

    return 0;
}
