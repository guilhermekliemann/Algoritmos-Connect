#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    printf("\nDigite o primeiro(A) número: ");
    scanf("%d", &a);

    printf("\nDigite o segundo(B) número: ");
    scanf("%d", &b);

    if(a > b) {
        printf("\nO número A é maior que o número B!\n");
    } else {
        printf("\nO número B é maior que o número A!\n");
    }

    return 0;
}
