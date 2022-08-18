#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, m;

    printf("\nDigite um n�mero para saber a tabuada: ");
    scanf("%d", &n);

    if(n < 2 || n > 9) {
        printf("\nN�mero inv�lido para calcular tabuada!\n");
    } else {
        printf("\nDigite um n�mero para o n�mero de exibi��es da tabuada: ");
        scanf("%d", &m);
    }

    for(int i=1; i<=m; i++) {
        printf("\n%d x %d = %d", n, i, n * i);
    }

    printf("\n");

    return 0;
}
