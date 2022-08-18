#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, m;

    printf("\nDigite um número para saber a tabuada: ");
    scanf("%d", &n);

    if(n < 2 || n > 9) {
        printf("\nNúmero inválido para calcular tabuada!\n");
    } else {
        printf("\nDigite um número para o número de exibições da tabuada: ");
        scanf("%d", &m);
    }

    for(int i=1; i<=m; i++) {
        printf("\n%d x %d = %d", n, i, n * i);
    }

    printf("\n");

    return 0;
}
