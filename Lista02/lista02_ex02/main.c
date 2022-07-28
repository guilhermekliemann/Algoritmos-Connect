#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("\nDigite um número para verificar se ele é PAR ou ÍMPAR: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("\nO número %d é um número PAR!\n", n);
    } else {
        printf("\nO número %d é um número ÍMPAR!\n", n);
    }

    return 0;
}
