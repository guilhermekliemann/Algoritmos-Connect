#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, m;

    printf("\nDigite um número para o valor de (n): ");
    scanf("%d", &n);

    printf("\nDigite um número para o valor de (m): ");
    scanf("%d", &m);

    printf("\n");

    int i = 1;
    while(i <= 200) {
        if(i % n == 0 && i % m != 0) {
            printf("%d\n", i);
        }
        i++;
    }

    printf("\n");

    return 0;
}
