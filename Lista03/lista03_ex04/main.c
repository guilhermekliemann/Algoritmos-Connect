#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;
    char nome[30];

    printf("\nDigite o seu nome: ");
    scanf("%s", &nome);

    printf("\nDigite um número: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        printf("\n%d - %s", i, nome);
    }

    return 0;
}
