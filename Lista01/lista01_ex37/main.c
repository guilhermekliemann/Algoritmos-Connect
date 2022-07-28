#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, resultado;

    printf("\nDigite um número para saber a tabuada: ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++) {
        resultado = n * i;
        printf("\n%d x %d = %d", n, i, resultado);
    }

    return 0;
}
