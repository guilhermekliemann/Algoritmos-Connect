#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    printf("\nDigite o primeiro(A) n�mero: ");
    scanf("%d", &a);

    printf("\nDigite o segundo(B) n�mero: ");
    scanf("%d", &b);

    if(a > b) {
        printf("\nO n�mero A � maior que o n�mero B!\n");
    } else {
        printf("\nO n�mero B � maior que o n�mero A!\n");
    }

    return 0;
}
