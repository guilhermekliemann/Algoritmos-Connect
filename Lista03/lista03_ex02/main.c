#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, resultado;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &n1);

    printf("\nDigite o segundo número: ");
    scanf("%d", &n2);

    for(; n1<=n2; n1++) {
        resultado = resultado + n1;
    }

    printf("\nResultado: %d\n", resultado);

    return 0;
}
