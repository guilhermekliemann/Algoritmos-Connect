#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, diff;

    printf("\nDigite o primeiro número: ");
    scanf("%d", &n1);

    printf("\nDigite o segundo número: ");
    scanf("%d", &n2);

    if(n1 > n2) {
        diff = n1 - n2;
        printf("\nA diferença entre o primeiro número e o segundo número é de %d!\n", diff);
    } else if(n1 < n2) {
        diff = n2 - n1;
        printf("\nA diferença entre o segundo número e o primeiro número é de %d!\n", diff);
    } else {
        printf("\nNúmeros iguais tem diferença de 0!\n");
    }

    return 0;
}
